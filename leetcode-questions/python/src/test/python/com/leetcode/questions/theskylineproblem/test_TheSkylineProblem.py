"""Tests for LeetCode 218 -- The Skyline Problem."""
import os
import sys
import unittest

# Path to the user's solution module.
sys.path.append(os.path.abspath(os.path.join(
    os.path.dirname(__file__), "../../../../../../main/python")))

from com.leetcode.questions.leetcode.editor.en.TheSkylineProblem import Solution  # noqa: E402


class TestTheSkylineProblem(unittest.TestCase):
    def setUp(self):
        self.solution = Solution()

    def test_all_cases(self):
        # Test Case 1
        input0_0 = [[2, 9, 10], [3, 7, 15], [5, 12, 12], [15, 20, 10], [19, 24, 8]]
        expected0 = [[2, 10], [3, 15], [7, 12], [12, 0], [15, 10], [20, 8], [24, 0]]
        self.assertEqual(expected0, self.solution.getSkyline(input0_0))

        # Test Case 2
        input0_1 = [[0, 2, 3], [2, 5, 3]]
        expected1 = [[0, 3], [5, 0]]
        self.assertEqual(expected1, self.solution.getSkyline(input0_1))


if __name__ == "__main__":
    unittest.main()
