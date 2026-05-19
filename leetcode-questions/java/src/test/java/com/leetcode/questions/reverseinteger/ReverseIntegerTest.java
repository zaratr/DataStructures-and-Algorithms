package com.leetcode.questions.reverseinteger;

import com.leetcode.questions.leetcode.editor.en.ReverseInteger;
import com.leetcode.questions.support.GeneratedLeetCodeTestHarness;
import org.junit.jupiter.api.Test;
import static org.junit.jupiter.api.Assertions.*;
import java.nio.file.Files;
import java.nio.file.Path;

public class ReverseIntegerTest {

    private static final Path CASES_PATH = Path.of("generated-test-cases", "reverse-integer.json");

    public ReverseIntegerTest() {

    }

    @Test
    public void testCases() throws Exception {
        GeneratedLeetCodeTestHarness.run(ReverseInteger.Solution.class, "reverse", Files.readString(CASES_PATH));
    }
}
