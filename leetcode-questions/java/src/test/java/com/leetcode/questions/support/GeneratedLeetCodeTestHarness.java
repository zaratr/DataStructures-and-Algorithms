package com.leetcode.questions.support;

import org.junit.jupiter.api.Assertions;

import java.lang.reflect.Array;
import java.lang.reflect.Constructor;
import java.lang.reflect.Method;
import java.lang.reflect.ParameterizedType;
import java.lang.reflect.Type;
import java.lang.reflect.Modifier;
import java.util.ArrayList;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;

public final class GeneratedLeetCodeTestHarness {
    private GeneratedLeetCodeTestHarness() {}

    public static void run(Class<?> solutionClass, String methodName, String casesJson) throws Exception {
        Object solution = newInstance(solutionClass);
        Method method = findMethod(solutionClass, methodName);
        Object parsed = Json.parse(casesJson);
        if (!(parsed instanceof List<?> rows)) {
            throw new IllegalArgumentException("casesJson must decode to a JSON array");
        }

        for (int i = 0; i < rows.size(); i++) {
            Object row = rows.get(i);
            if (!(row instanceof Map<?, ?>)) {
                Assertions.fail("Case " + i + " is not a JSON object");
            }
            Map<?, ?> map = (Map<?, ?>) row;

            Object rawInput = map.get("input");
            Object rawExpected = map.get("expected");
            Object[] args = coerceInputs(method, rawInput);
            Object expected = normalize(rawExpected);
            Object actual;
            try {
                actual = normalize(method.invoke(solution, args));
            } catch (Throwable t) {
                Throwable cause = t instanceof java.lang.reflect.InvocationTargetException && t.getCause() != null
                        ? t.getCause()
                        : t;
                Assertions.fail("Case " + i + " threw " + cause.getClass().getSimpleName() + ": " + cause.getMessage());
                return;
            }

            Assertions.assertEquals(
                    expected,
                    actual,
                    "Case " + i + " failed. input=" + Json.write(normalize(rawInput))
                            + " expected=" + Json.write(expected)
                            + " actual=" + Json.write(actual)
            );
        }
    }

    private static Object newInstance(Class<?> solutionClass) throws Exception {
        Constructor<?> ctor = solutionClass.getDeclaredConstructor();
        ctor.setAccessible(true);
        return ctor.newInstance();
    }

    private static Method findMethod(Class<?> cls, String name) {
        Method best = null;
        for (Method m : cls.getDeclaredMethods()) {
            if (!m.getName().equals(name)) continue;
            if (best == null || m.getParameterCount() > best.getParameterCount()) {
                best = m;
            }
        }
        if (best == null) {
            throw new IllegalStateException("No method named " + name + " on " + cls.getName());
        }
        best.setAccessible(true);
        return best;
    }

    private static Object[] coerceInputs(Method method, Object rawInput) {
        Class<?>[] parameterTypes = method.getParameterTypes();
        Type[] genericParameterTypes = method.getGenericParameterTypes();

        if (parameterTypes.length == 1) {
            return new Object[]{coerce(rawInput, parameterTypes[0], genericParameterTypes[0])};
        }

        if (!(rawInput instanceof List<?> values)) {
            throw new IllegalArgumentException(
                    "Expected a JSON array for " + parameterTypes.length + " arguments, got " + rawInput
            );
        }
        if (values.size() != parameterTypes.length) {
            throw new IllegalArgumentException(
                    "Expected " + parameterTypes.length + " args, got " + values.size()
            );
        }

        Object[] args = new Object[parameterTypes.length];
        for (int i = 0; i < parameterTypes.length; i++) {
            args[i] = coerce(values.get(i), parameterTypes[i], genericParameterTypes[i]);
        }
        return args;
    }

    @SuppressWarnings({"rawtypes", "unchecked"})
    private static Object coerce(Object value, Class<?> target, Type genericType) {
        if (value == null) return null;
        if (target == int.class || target == Integer.class) return ((Number) value).intValue();
        if (target == long.class || target == Long.class) return ((Number) value).longValue();
        if (target == double.class || target == Double.class) return ((Number) value).doubleValue();
        if (target == float.class || target == Float.class) return ((Number) value).floatValue();
        if (target == boolean.class || target == Boolean.class) return (Boolean) value;
        if (target == char.class || target == Character.class) return ((String) value).charAt(0);
        if (target == String.class) return (String) value;

        if (target.isArray()) {
            List<?> list = (List<?>) value;
            Class<?> componentType = target.getComponentType();
            Object array = Array.newInstance(componentType, list.size());
            for (int i = 0; i < list.size(); i++) {
                Array.set(array, i, coerce(list.get(i), componentType, componentType));
            }
            return array;
        }

        if (List.class.isAssignableFrom(target)) {
            List<?> list = (List<?>) value;
            List result = new ArrayList(list.size());
            Type elementType = genericType instanceof ParameterizedType
                    ? ((ParameterizedType) genericType).getActualTypeArguments()[0]
                    : Object.class;
            Class<?> elementClass = rawClass(elementType);
            for (Object item : list) {
                result.add(coerce(item, elementClass, elementType));
            }
            return result;
        }

        return value;
    }

    private static Class<?> rawClass(Type type) {
        if (type instanceof Class<?> clazz) return clazz;
        if (type instanceof ParameterizedType parameterizedType) {
            return (Class<?>) parameterizedType.getRawType();
        }
        return Object.class;
    }

    @SuppressWarnings({"rawtypes", "unchecked"})
    private static Object normalize(Object value) {
        if (value == null) return null;
        if (value instanceof Character) return value.toString();
        if (value instanceof Byte || value instanceof Short || value instanceof Integer || value instanceof Long) {
            return ((Number) value).longValue();
        }
        if (value instanceof Float || value instanceof Double) {
            return ((Number) value).doubleValue();
        }
        if (value instanceof Boolean || value instanceof String) return value;
        if (value.getClass().isArray()) {
            int length = Array.getLength(value);
            List<Object> list = new ArrayList<>(length);
            for (int i = 0; i < length; i++) {
                list.add(normalize(Array.get(value, i)));
            }
            return list;
        }
        if (value instanceof List<?> list) {
            List<Object> normalized = new ArrayList<>(list.size());
            for (Object item : list) {
                normalized.add(normalize(item));
            }
            return normalized;
        }
        if (value instanceof Map<?, ?> map) {
            Map<Object, Object> normalized = new LinkedHashMap<>();
            for (Map.Entry<?, ?> entry : map.entrySet()) {
                normalized.put(entry.getKey(), normalize(entry.getValue()));
            }
            return normalized;
        }
        if (Modifier.isStatic(value.getClass().getModifiers())) {
            return value.toString();
        }
        return value.toString();
    }

    static final class Json {
        private final String text;
        private int index;

        private Json(String text) {
            this.text = text;
        }

        static Object parse(String text) {
            Json parser = new Json(text);
            parser.skip();
            return parser.value();
        }

        static String write(Object value) {
            StringBuilder builder = new StringBuilder();
            write(value, builder);
            return builder.toString();
        }

        private static void write(Object value, StringBuilder builder) {
            if (value == null) {
                builder.append("null");
                return;
            }
            if (value instanceof Boolean || value instanceof Number) {
                builder.append(value);
                return;
            }
            if (value instanceof CharSequence) {
                builder.append('"');
                escape(value.toString(), builder);
                builder.append('"');
                return;
            }
            if (value instanceof List<?> list) {
                builder.append('[');
                for (int i = 0; i < list.size(); i++) {
                    if (i > 0) builder.append(',');
                    write(list.get(i), builder);
                }
                builder.append(']');
                return;
            }
            if (value instanceof Map<?, ?> map) {
                builder.append('{');
                boolean first = true;
                for (Map.Entry<?, ?> entry : map.entrySet()) {
                    if (!first) builder.append(',');
                    first = false;
                    builder.append('"');
                    escape(String.valueOf(entry.getKey()), builder);
                    builder.append("\":");
                    write(entry.getValue(), builder);
                }
                builder.append('}');
                return;
            }
            builder.append('"');
            escape(value.toString(), builder);
            builder.append('"');
        }

        private static void escape(String text, StringBuilder builder) {
            for (int i = 0; i < text.length(); i++) {
                char c = text.charAt(i);
                switch (c) {
                    case '"' -> builder.append("\\\"");
                    case '\\' -> builder.append("\\\\");
                    case '\n' -> builder.append("\\n");
                    case '\r' -> builder.append("\\r");
                    case '\t' -> builder.append("\\t");
                    default -> {
                        if (c < 0x20) builder.append(String.format("\\u%04x", (int) c));
                        else builder.append(c);
                    }
                }
            }
        }

        private void skip() {
            while (index < text.length() && Character.isWhitespace(text.charAt(index))) index++;
        }

        private Object value() {
            skip();
            if (index >= text.length()) throw new IllegalArgumentException("unexpected EOF");
            char c = text.charAt(index);
            if (c == '"') return string();
            if (c == '{') return object();
            if (c == '[') return array();
            if (c == 't' || c == 'f') return bool();
            if (c == 'n') {
                expect("null");
                return null;
            }
            return number();
        }

        private void expect(String word) {
            if (!text.regionMatches(index, word, 0, word.length())) {
                throw new IllegalArgumentException("expected " + word + " at " + index);
            }
            index += word.length();
        }

        private String string() {
            index++;
            StringBuilder builder = new StringBuilder();
            while (index < text.length()) {
                char c = text.charAt(index++);
                if (c == '"') return builder.toString();
                if (c == '\\') {
                    char escaped = text.charAt(index++);
                    switch (escaped) {
                        case '"' -> builder.append('"');
                        case '\\' -> builder.append('\\');
                        case '/' -> builder.append('/');
                        case 'n' -> builder.append('\n');
                        case 'r' -> builder.append('\r');
                        case 't' -> builder.append('\t');
                        case 'b' -> builder.append('\b');
                        case 'f' -> builder.append('\f');
                        case 'u' -> {
                            builder.append((char) Integer.parseInt(text.substring(index, index + 4), 16));
                            index += 4;
                        }
                        default -> throw new IllegalArgumentException("bad escape \\" + escaped);
                    }
                } else {
                    builder.append(c);
                }
            }
            throw new IllegalArgumentException("unterminated string");
        }

        private Object number() {
            int start = index;
            if (text.charAt(index) == '-') index++;
            while (index < text.length() && "0123456789.eE+-".indexOf(text.charAt(index)) >= 0) index++;
            String token = text.substring(start, index);
            if (token.contains(".") || token.contains("e") || token.contains("E")) {
                return Double.parseDouble(token);
            }
            try {
                return Long.parseLong(token);
            } catch (NumberFormatException ex) {
                return Double.parseDouble(token);
            }
        }

        private Boolean bool() {
            if (text.charAt(index) == 't') {
                expect("true");
                return Boolean.TRUE;
            }
            expect("false");
            return Boolean.FALSE;
        }

        private List<Object> array() {
            index++;
            skip();
            List<Object> values = new ArrayList<>();
            if (index < text.length() && text.charAt(index) == ']') {
                index++;
                return values;
            }
            while (true) {
                values.add(value());
                skip();
                if (index >= text.length()) throw new IllegalArgumentException("unterminated array");
                char c = text.charAt(index++);
                if (c == ']') return values;
                if (c != ',') throw new IllegalArgumentException("expected , or ] at " + (index - 1));
                skip();
            }
        }

        private Map<String, Object> object() {
            index++;
            skip();
            Map<String, Object> values = new LinkedHashMap<>();
            if (index < text.length() && text.charAt(index) == '}') {
                index++;
                return values;
            }
            while (true) {
                skip();
                String key = string();
                skip();
                if (text.charAt(index++) != ':') throw new IllegalArgumentException("expected :");
                Object value = value();
                values.put(key, value);
                skip();
                char c = text.charAt(index++);
                if (c == '}') return values;
                if (c != ',') throw new IllegalArgumentException("expected , or } at " + (index - 1));
                skip();
            }
        }
    }
}
