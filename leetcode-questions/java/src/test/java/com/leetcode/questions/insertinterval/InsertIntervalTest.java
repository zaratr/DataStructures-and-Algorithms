package com.leetcode.questions.insertinterval;

import com.leetcode.questions.leetcode.editor.en.InsertInterval;
import org.junit.jupiter.api.Test;
import static org.junit.jupiter.api.Assertions.*;

public class InsertIntervalTest {
    @Test
    public void testCases() {
        InsertInterval.Solution solution = new InsertInterval.Solution();
        // Auto-generated test cases:
        // Test Case 1
        int[][] intervals0 = new int[][]{new int[]{1, 3}, new int[]{6, 9}};
        int[] newInterval0 = new int[]{2, 5};
        int[][] expected0 = new int[][]{new int[]{1, 5}, new int[]{6, 9}};
        assertArrayEquals(expected0, solution.insert(intervals0, newInterval0));

        // Test Case 2
        int[][] intervals1 = new int[][]{new int[]{1, 2}, new int[]{3, 5}, new int[]{6, 7}, new int[]{8, 10}, new int[]{12, 16}};
        int[] newInterval1 = new int[]{4, 8};
        int[][] expected1 = new int[][]{new int[]{1, 2}, new int[]{3, 10}, new int[]{12, 16}};
        assertArrayEquals(expected1, solution.insert(intervals1, newInterval1));
    }
}
