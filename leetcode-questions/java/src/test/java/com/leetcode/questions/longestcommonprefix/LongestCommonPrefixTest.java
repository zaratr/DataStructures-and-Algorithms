package com.leetcode.questions.longestcommonprefix;

import com.leetcode.questions.leetcode.editor.en.LongestCommonPrefix;
import com.leetcode.questions.support.GeneratedLeetCodeTestHarness;
import org.junit.jupiter.api.Test;
import static org.junit.jupiter.api.Assertions.*;
import java.nio.file.Files;
import java.nio.file.Path;

public class LongestCommonPrefixTest {

    private static final Path CASES_PATH = Path.of("generated-test-cases", "longest-common-prefix.json");

    public LongestCommonPrefixTest() {

    }

    @Test
    public void testCases() throws Exception {
        GeneratedLeetCodeTestHarness.run(LongestCommonPrefix.Solution.class, "longestCommonPrefix", Files.readString(CASES_PATH));
    }
}
