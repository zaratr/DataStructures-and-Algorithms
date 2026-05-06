"""Tests for LeetCode 14 -- Longest Common Prefix."""
import os
import sys
import unittest

# Path to the user's solution module.
sys.path.append(os.path.abspath(os.path.join(
    os.path.dirname(__file__), "../../../../../../main/python")))

from com.leetcode.questions.leetcode.editor.en.LongestCommonPrefix import Solution  # noqa: E402


class TestLongestCommonPrefix(unittest.TestCase):
    def setUp(self):
        self.solution = Solution()

    def test_all_cases(self):
        # Test Case 1
        input0_0 = ["flower", "flow", "flight"]
        expected0 = "fl"
        self.assertEqual(expected0, self.solution.longestCommonPrefix(input0_0))

        # Test Case 2
        input0_1 = ["dog", "racecar", "car"]
        expected1 = ""
        self.assertEqual(expected1, self.solution.longestCommonPrefix(input0_1))


if __name__ == "__main__":
    unittest.main()
