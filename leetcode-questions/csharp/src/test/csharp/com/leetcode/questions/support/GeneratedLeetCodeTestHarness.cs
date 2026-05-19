using System.Reflection;
using System.Text.Json;
using System.Text.Json.Serialization;
using Xunit;

namespace com.leetcode.questions.support;

public static class GeneratedLeetCodeTestHarness {
    public static string ReadCasesFile(string fileName) {
        string relativePath = Path.Combine("generated-test-cases", fileName);
        string? current = Directory.GetCurrentDirectory();
        while (!string.IsNullOrEmpty(current)) {
            string candidate = Path.Combine(current, relativePath);
            if (File.Exists(candidate)) return File.ReadAllText(candidate);
            current = Directory.GetParent(current)?.FullName;
        }

        current = AppContext.BaseDirectory;
        while (!string.IsNullOrEmpty(current)) {
            string candidate = Path.Combine(current, relativePath);
            if (File.Exists(candidate)) return File.ReadAllText(candidate);
            current = Directory.GetParent(current)?.FullName;
        }

        throw new FileNotFoundException($"Could not locate {relativePath}");
    }

    public static void Run(Type solutionType, string methodName, string casesJson) {
        object solution = Activator.CreateInstance(solutionType)
            ?? throw new InvalidOperationException($"Could not create {solutionType.FullName}");
        MethodInfo method = solutionType.GetMethods()
            .Where(m => m.Name == methodName)
            .OrderByDescending(m => m.GetParameters().Length)
            .FirstOrDefault()
            ?? throw new InvalidOperationException($"No method named {methodName} on {solutionType.FullName}");

        List<TestCase> cases = JsonSerializer.Deserialize<List<TestCase>>(casesJson)
            ?? throw new InvalidOperationException("casesJson must decode to an array");

        for (int i = 0; i < cases.Count; i++) {
            object?[] args = CoerceArgs(method, cases[i].Input);
            object? actual = method.Invoke(solution, args);
            string expectedJson = Canonical(cases[i].Expected);
            string actualJson = Canonical(JsonSerializer.SerializeToElement(actual));
            Assert.True(
                expectedJson == actualJson,
                $"case {i} failed: input={cases[i].Input.GetRawText()} expected={expectedJson} actual={actualJson}"
            );
        }
    }

    private static object?[] CoerceArgs(MethodInfo method, JsonElement input) {
        ParameterInfo[] parameters = method.GetParameters();
        if (parameters.Length == 1) {
            return new[] { Deserialize(input, parameters[0].ParameterType) };
        }
        if (input.ValueKind != JsonValueKind.Array) {
            throw new InvalidOperationException($"Expected JSON array input for {parameters.Length} arguments");
        }
        JsonElement[] values = input.EnumerateArray().ToArray();
        if (values.Length != parameters.Length) {
            throw new InvalidOperationException($"Expected {parameters.Length} arguments, got {values.Length}");
        }
        object?[] args = new object?[parameters.Length];
        for (int i = 0; i < parameters.Length; i++) {
            args[i] = Deserialize(values[i], parameters[i].ParameterType);
        }
        return args;
    }

    private static object? Deserialize(JsonElement element, Type targetType) {
        return JsonSerializer.Deserialize(element.GetRawText(), targetType);
    }

    private static string Canonical(JsonElement element) {
        object? value = JsonSerializer.Deserialize<object>(element.GetRawText());
        return JsonSerializer.Serialize(value);
    }

    private sealed class TestCase {
        [JsonPropertyName("input")]
        public JsonElement Input { get; set; }

        [JsonPropertyName("expected")]
        public JsonElement Expected { get; set; }
    }
}
