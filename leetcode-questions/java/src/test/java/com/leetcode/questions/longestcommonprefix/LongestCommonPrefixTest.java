package com.leetcode.questions.longestcommonprefix;

import com.leetcode.questions.leetcode.editor.en.LongestCommonPrefix;
import org.junit.jupiter.api.Test;
import static org.junit.jupiter.api.Assertions.*;

public class LongestCommonPrefixTest {
    @Test
    public void testCases() {
        LongestCommonPrefix.Solution solution = new LongestCommonPrefix.Solution();
        // Auto-generated test cases:
        // Test Case 1
        String[] strs0 = new String[]{"flower", "flow", "flight"};
        String expected0 = "fl";
        assertEquals(expected0, solution.longestCommonPrefix(strs0));

        // Test Case 2
        String[] strs1 = new String[]{"dog", "racecar", "car"};
        String expected1 = "";
        assertEquals(expected1, solution.longestCommonPrefix(strs1));
    }
}
