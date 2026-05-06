package com.leetcode.questions.projectionareaof3dshapes;

import com.leetcode.questions.leetcode.editor.en.ProjectionAreaOf3dShapes;
import org.junit.jupiter.api.Test;
import static org.junit.jupiter.api.Assertions.*;

public class ProjectionAreaOf3dShapesTest {
    @Test
    public void testCases() {
        ProjectionAreaOf3dShapes.Solution solution = new ProjectionAreaOf3dShapes.Solution();
        // Auto-generated test cases:
        // Test Case 1
        int[][] grid0 = new int[][]{new int[]{1, 2}, new int[]{3, 4}};
        int expected0 = 17;
        assertEquals(expected0, solution.projectionArea(grid0));

        // Test Case 2
        int[][] grid1 = new int[][]{new int[]{2}};
        int expected1 = 5;
        assertEquals(expected1, solution.projectionArea(grid1));

        // Test Case 3
        int[][] grid2 = new int[][]{new int[]{1, 0}, new int[]{0, 2}};
        int expected2 = 8;
        assertEquals(expected2, solution.projectionArea(grid2));
    }
}
