"""Tests for LeetCode 15 -- 3Sum."""
import os
import sys
import unittest

# Path to the user's solution module.
sys.path.append(os.path.abspath(os.path.join(
    os.path.dirname(__file__), "../../../../../../main/python")))

from com.leetcode.questions.leetcode.editor.en._3sum import Solution  # noqa: E402


class Test_3sum(unittest.TestCase):
    def setUp(self):
        self.solution = Solution()

    def test_all_cases(self):
        # Test Case 1
        input0_0 = [-1, 0, 1, 2, -1, -4]
        expected0 = [[-1, -1, 2], [-1, 0, 1]]
        self.assertEqual(expected0, self.solution.threeSum(input0_0))

        # Test Case 2
        input0_1 = [0, 1, 1]
        expected1 = []
        self.assertEqual(expected1, self.solution.threeSum(input0_1))

        # Test Case 3
        input0_2 = [0, 0, 0]
        expected2 = [[0, 0, 0]]
        self.assertEqual(expected2, self.solution.threeSum(input0_2))


if __name__ == "__main__":
    unittest.main()
