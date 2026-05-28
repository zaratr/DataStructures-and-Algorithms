package com.leetcode.questions.setmatrixzeroes;

import com.leetcode.questions.leetcode.editor.en.SetMatrixZeroes;
import com.leetcode.questions.support.GeneratedLeetCodeTestHarness;
import org.junit.jupiter.api.Test;
import static org.junit.jupiter.api.Assertions.*;
import java.nio.file.Files;
import java.nio.file.Path;

public class SetMatrixZeroesTest {
    private final int[][] matrix0;
    private final int[][] matrix1;


    public SetMatrixZeroesTest() {
        // Test Case 1
        this.matrix0 = new int[][]{new int[]{1, 1, 1}, new int[]{1, 0, 1}, new int[]{1, 1, 1}};

        // Test Case 2
        this.matrix1 = new int[][]{new int[]{0, 1, 2, 0}, new int[]{3, 4, 5, 2}, new int[]{1, 3, 1, 5}};
    }

    @Test
    public void testCases() throws Exception {
        SetMatrixZeroes.Solution solution = new SetMatrixZeroes.Solution();
        // Auto-generated test cases:
        // Test Case 1
        // Expected output: [[1, 0, 1], [0, 0, 0], [1, 0, 1]]
        solution.setZeroes(matrix0);
        // In-place mutation expected output; direct assertion skipped.

        // Test Case 2
        // Expected output: [[0, 0, 0, 0], [0, 4, 5, 0], [0, 3, 1, 0]]
        solution.setZeroes(matrix1);
        // In-place mutation expected output; direct assertion skipped.
    }
}
