package com.leetcode.questions.validparentheses;

import com.leetcode.questions.leetcode.editor.en.ValidParentheses;
import com.leetcode.questions.support.GeneratedLeetCodeTestHarness;
import org.junit.jupiter.api.Test;
import static org.junit.jupiter.api.Assertions.*;
import java.nio.file.Files;
import java.nio.file.Path;

public class ValidParenthesesTest {

    private static final Path CASES_PATH = Path.of("generated-test-cases", "valid-parentheses.json");

    public ValidParenthesesTest() {

    }

    @Test
    public void testCases() throws Exception {
        GeneratedLeetCodeTestHarness.run(ValidParentheses.Solution.class, "isValid", Files.readString(CASES_PATH));
    }
}
