using Xunit;
using System.Collections.Generic;
using com.leetcode.questions.leetcode.editor.en.projectionareaof3dshapes;

namespace com.leetcode.questions.projectionareaof3dshapes;

public class ProjectionAreaOf3dShapesTest {
    [Fact]
    public void TestCases() {
        var solution = new Solution();
        // Auto-generated test cases:
        // Test Case 1
        int[][] grid0 = new int[][]{new int[]{1, 2}, new int[]{3, 4}};
        int expected0 = 17;
        Assert.Equal(expected0, solution.ProjectionArea(grid0));

        // Test Case 2
        int[][] grid1 = new int[][]{new int[]{2}};
        int expected1 = 5;
        Assert.Equal(expected1, solution.ProjectionArea(grid1));

        // Test Case 3
        int[][] grid2 = new int[][]{new int[]{1, 0}, new int[]{0, 2}};
        int expected2 = 8;
        Assert.Equal(expected2, solution.ProjectionArea(grid2));
    }
}
