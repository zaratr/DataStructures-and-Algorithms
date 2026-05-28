using Xunit;
using System.Collections.Generic;
using com.leetcode.questions.leetcode.editor.en.setmatrixzeroes;
using com.leetcode.questions.support;

namespace com.leetcode.questions.setmatrixzeroes;

public class SetMatrixZeroesTest {
    private readonly int[][] matrix0;
    private readonly int[][] matrix1;


    public SetMatrixZeroesTest() {
        // Test Case 1
        this.matrix0 = new int[][]{new int[]{1, 1, 1}, new int[]{1, 0, 1}, new int[]{1, 1, 1}};

        // Test Case 2
        this.matrix1 = new int[][]{new int[]{0, 1, 2, 0}, new int[]{3, 4, 5, 2}, new int[]{1, 3, 1, 5}};
    }

    [Fact]
    public void TestCases() {
        var solution = new Solution();
        // Auto-generated test cases:
        // Test Case 1
        // Expected output: [[1, 0, 1], [0, 0, 0], [1, 0, 1]]
        solution.SetZeroes(matrix0);
        // In-place mutation expected output; direct assertion skipped.

        // Test Case 2
        // Expected output: [[0, 0, 0, 0], [0, 4, 5, 0], [0, 3, 1, 0]]
        solution.SetZeroes(matrix1);
        // In-place mutation expected output; direct assertion skipped.
    }
}
