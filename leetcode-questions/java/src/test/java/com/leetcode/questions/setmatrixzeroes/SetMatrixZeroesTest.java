package com.leetcode.questions.setmatrixzeroes;

import com.leetcode.questions.leetcode.editor.en.SetMatrixZeroes;
import org.junit.jupiter.api.Test;
import static org.junit.jupiter.api.Assertions.*;

public class SetMatrixZeroesTest {
    @Test
    public void testCases() {
        SetMatrixZeroes.Solution solution = new SetMatrixZeroes.Solution();
        // Auto-generated test cases:
        // Test Case 1
        int[][] matrix0 = new int[][]{new int[]{1, 1, 1}, new int[]{1, 0, 1}, new int[]{1, 1, 1}};
        // Expected output: [[1, 0, 1], [0, 0, 0], [1, 0, 1]]
        solution.setZeroes(matrix0);
        // In-place mutation expected output; direct assertion skipped.

        // Test Case 2
        int[][] matrix1 = new int[][]{new int[]{0, 1, 2, 0}, new int[]{3, 4, 5, 2}, new int[]{1, 3, 1, 5}};
        // Expected output: [[0, 0, 0, 0], [0, 4, 5, 0], [0, 3, 1, 0]]
        solution.setZeroes(matrix1);
        // In-place mutation expected output; direct assertion skipped.
    }
}
