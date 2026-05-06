using Xunit;
using System.Collections.Generic;
using com.leetcode.questions.leetcode.editor.en.longestcommonprefix;

namespace com.leetcode.questions.longestcommonprefix;

public class LongestCommonPrefixTest {
    [Fact]
    public void TestCases() {
        var solution = new Solution();
        // Auto-generated test cases:
        // Test Case 1
        string[] strs0 = new string[]{"flower", "flow", "flight"};
        string expected0 = "fl";
        Assert.Equal(expected0, solution.LongestCommonPrefix(strs0));

        // Test Case 2
        string[] strs1 = new string[]{"dog", "racecar", "car"};
        string expected1 = "";
        Assert.Equal(expected1, solution.LongestCommonPrefix(strs1));
    }
}
