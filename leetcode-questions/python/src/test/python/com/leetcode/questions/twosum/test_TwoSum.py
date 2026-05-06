"""Tests for LeetCode 1 -- Two Sum."""
import os
import sys
import unittest

# Path to the user's solution module.
sys.path.append(os.path.abspath(os.path.join(
    os.path.dirname(__file__), "../../../../../../main/python")))

from com.leetcode.questions.leetcode.editor.en.TwoSum import Solution  # noqa: E402


class TestTwoSum(unittest.TestCase):
    def setUp(self):
        self.solution = Solution()

    def test_all_cases(self):
        # Test Case 1
        input0_0 = [2, 7, 11, 15]
        input1_0 = 9
        expected0 = [0, 1]
        self.assertEqual(expected0, self.solution.twoSum(input0_0, input1_0))

        # Test Case 2
        input0_1 = [3, 2, 4]
        input1_1 = 6
        expected1 = [1, 2]
        self.assertEqual(expected1, self.solution.twoSum(input0_1, input1_1))

        # Test Case 3
        input0_2 = [3, 3]
        input1_2 = 6
        expected2 = [0, 1]
        self.assertEqual(expected2, self.solution.twoSum(input0_2, input1_2))


if __name__ == "__main__":
    unittest.main()
