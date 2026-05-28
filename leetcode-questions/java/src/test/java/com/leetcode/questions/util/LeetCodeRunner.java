package com.leetcode.questions.util;

public class LeetCodeRunner {
    public static LeetCodeRunner builder(int frontendId, String className, String methodName) {
        return new LeetCodeRunner();
    }

    public void assertAllPass() {
        // Placeholder used for compile smoke tests; language-specific runners validate cases separately.
    }
}
