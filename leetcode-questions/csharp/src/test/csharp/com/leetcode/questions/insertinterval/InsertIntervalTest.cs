using Xunit;
using System.Collections.Generic;
using com.leetcode.questions.leetcode.editor.en.insertinterval;

namespace com.leetcode.questions.insertinterval;

public class InsertIntervalTest {
    [Fact]
    public void TestCases() {
        var solution = new Solution();
        // Auto-generated test cases:
        // Test Case 1
        int[][] intervals0 = new int[][]{new int[]{1, 3}, new int[]{6, 9}};
        int[] newInterval0 = new int[]{2, 5};
        int[][] expected0 = new int[][]{new int[]{1, 5}, new int[]{6, 9}};
        Assert.Equal(expected0, solution.Insert(intervals0, newInterval0));

        // Test Case 2
        int[][] intervals1 = new int[][]{new int[]{1, 2}, new int[]{3, 5}, new int[]{6, 7}, new int[]{8, 10}, new int[]{12, 16}};
        int[] newInterval1 = new int[]{4, 8};
        int[][] expected1 = new int[][]{new int[]{1, 2}, new int[]{3, 10}, new int[]{12, 16}};
        Assert.Equal(expected1, solution.Insert(intervals1, newInterval1));
    }
}
