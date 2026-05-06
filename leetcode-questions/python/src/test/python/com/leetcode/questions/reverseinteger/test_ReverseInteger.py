"""Tests for LeetCode 7 -- Reverse Integer."""
import os
import sys
import unittest

# Path to the user's solution module.
sys.path.append(os.path.abspath(os.path.join(
    os.path.dirname(__file__), "../../../../../../main/python")))

from com.leetcode.questions.leetcode.editor.en.ReverseInteger import Solution  # noqa: E402


class TestReverseInteger(unittest.TestCase):
    def setUp(self):
        self.solution = Solution()

    def test_all_cases(self):
        # Test Case 1
        input0_0 = 123
        expected0 = 321
        self.assertEqual(expected0, self.solution.reverse(input0_0))

        # Test Case 2
        input0_1 = -123
        expected1 = -321
        self.assertEqual(expected1, self.solution.reverse(input0_1))

        # Test Case 3
        input0_2 = 120
        expected2 = 21
        self.assertEqual(expected2, self.solution.reverse(input0_2))


if __name__ == "__main__":
    unittest.main()
