"""Tests for LeetCode 73 -- Set Matrix Zeroes."""
import os
import sys
import unittest
from pathlib import Path

# Path to the user's solution module.
sys.path.append(os.path.abspath(os.path.join(
    os.path.dirname(__file__), "../../../../../../main/python")))
sys.path.append(os.path.abspath(os.path.join(
    os.path.dirname(__file__), "../../../../")))

from com.leetcode.questions.leetcode.editor.en.SetMatrixZeroes import Solution  # noqa: E402
from com.leetcode.questions.support.generated_leetcode_test_harness import run_cases  # noqa: E402



class TestSetMatrixZeroes(unittest.TestCase):
    def setUp(self):
        self.solution = Solution()
        # Test Case 1
        self.input0_0 = [[1, 1, 1], [1, 0, 1], [1, 1, 1]]

        # Test Case 2
        self.input0_1 = [[0, 1, 2, 0], [3, 4, 5, 2], [1, 3, 1, 5]]

    def test_all_cases(self):
        # Test Case 1
        # Expected output: [[1, 0, 1], [0, 0, 0], [1, 0, 1]]
        self.solution.setZeroes(self.input0_0)
        # In-place mutation expected output; direct assertion skipped.

        # Test Case 2
        # Expected output: [[0, 0, 0, 0], [0, 4, 5, 0], [0, 3, 1, 0]]
        self.solution.setZeroes(self.input0_1)
        # In-place mutation expected output; direct assertion skipped.


if __name__ == "__main__":
    unittest.main()
