using Xunit;
using System.Collections.Generic;
using com.leetcode.questions.leetcode.editor.en.theskylineproblem;

namespace com.leetcode.questions.theskylineproblem;

public class TheSkylineProblemTest {
    [Fact]
    public void TestCases() {
        var solution = new Solution();
        // Auto-generated test cases:
        // Test Case 1
        int[][] buildings0 = new int[][]{new int[]{2, 9, 10}, new int[]{3, 7, 15}, new int[]{5, 12, 12}, new int[]{15, 20, 10}, new int[]{19, 24, 8}};
        IList<IList<int>> expected0 = new List<IList<int>>(){new List<int>(){2, 10}, new List<int>(){3, 15}, new List<int>(){7, 12}, new List<int>(){12, 0}, new List<int>(){15, 10}, new List<int>(){20, 8}, new List<int>(){24, 0}};
        Assert.Equal(expected0, solution.GetSkyline(buildings0));

        // Test Case 2
        int[][] buildings1 = new int[][]{new int[]{0, 2, 3}, new int[]{2, 5, 3}};
        IList<IList<int>> expected1 = new List<IList<int>>(){new List<int>(){0, 3}, new List<int>(){5, 0}};
        Assert.Equal(expected1, solution.GetSkyline(buildings1));
    }
}
