using Xunit;
using System.Collections.Generic;
using com.leetcode.questions.leetcode.editor.en.longestsubstringwithoutrepeatingcharacters;

namespace com.leetcode.questions.longestsubstringwithoutrepeatingcharacters;

public class LongestSubstringWithoutRepeatingCharactersTest {
    [Fact]
    public void TestCases() {
        var solution = new Solution();
        // Auto-generated test cases:
        // Test Case 1
        string s0 = "abcabcbb";
        int expected0 = 3;
        Assert.Equal(expected0, solution.LengthOfLongestSubstring(s0));

        // Test Case 2
        string s1 = "bbbbb";
        int expected1 = 1;
        Assert.Equal(expected1, solution.LengthOfLongestSubstring(s1));

        // Test Case 3
        string s2 = "pwwkew";
        int expected2 = 3;
        Assert.Equal(expected2, solution.LengthOfLongestSubstring(s2));
    }
}
