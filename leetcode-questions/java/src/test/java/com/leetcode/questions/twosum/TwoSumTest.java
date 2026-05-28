package com.leetcode.questions.twosum;

import com.leetcode.questions.leetcode.editor.en.TwoSum;
import com.leetcode.questions.support.GeneratedLeetCodeTestHarness;
import org.junit.jupiter.api.Test;
import static org.junit.jupiter.api.Assertions.*;
import java.nio.file.Files;
import java.nio.file.Path;

public class TwoSumTest {

    private static final Path CASES_PATH = Path.of("generated-test-cases", "two-sum.json");

    public TwoSumTest() {

    }

    @Test
    public void testCases() throws Exception {
        GeneratedLeetCodeTestHarness.run(TwoSum.Solution.class, "twoSum", Files.readString(CASES_PATH));
    }
}
