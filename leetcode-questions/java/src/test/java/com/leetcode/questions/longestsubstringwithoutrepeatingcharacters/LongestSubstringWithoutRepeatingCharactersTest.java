package com.leetcode.questions.longestsubstringwithoutrepeatingcharacters;

import com.leetcode.questions.leetcode.editor.en.LongestSubstringWithoutRepeatingCharacters;
import org.junit.jupiter.api.Test;
import static org.junit.jupiter.api.Assertions.*;

public class LongestSubstringWithoutRepeatingCharactersTest {
    @Test
    public void testCases() {
        LongestSubstringWithoutRepeatingCharacters.Solution solution = new LongestSubstringWithoutRepeatingCharacters.Solution();
        // Auto-generated test cases:
        // Test Case 1
        String s0 = "abcabcbb";
        int expected0 = 3;
        assertEquals(expected0, solution.lengthOfLongestSubstring(s0));

        // Test Case 2
        String s1 = "bbbbb";
        int expected1 = 1;
        assertEquals(expected1, solution.lengthOfLongestSubstring(s1));

        // Test Case 3
        String s2 = "pwwkew";
        int expected2 = 3;
        assertEquals(expected2, solution.lengthOfLongestSubstring(s2));
    }
}
