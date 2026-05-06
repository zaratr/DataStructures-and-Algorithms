"""Tests for LeetCode 3 -- Longest Substring Without Repeating Characters."""
import os
import sys
import unittest

# Path to the user's solution module.
sys.path.append(os.path.abspath(os.path.join(
    os.path.dirname(__file__), "../../../../../../main/python")))

from com.leetcode.questions.leetcode.editor.en.LongestSubstringWithoutRepeatingCharacters import Solution  # noqa: E402


class TestLongestSubstringWithoutRepeatingCharacters(unittest.TestCase):
    def setUp(self):
        self.solution = Solution()

    def test_all_cases(self):
        # Test Case 1
        input0_0 = "abcabcbb"
        expected0 = 3
        self.assertEqual(expected0, self.solution.lengthOfLongestSubstring(input0_0))

        # Test Case 2
        input0_1 = "bbbbb"
        expected1 = 1
        self.assertEqual(expected1, self.solution.lengthOfLongestSubstring(input0_1))

        # Test Case 3
        input0_2 = "pwwkew"
        expected2 = 3
        self.assertEqual(expected2, self.solution.lengthOfLongestSubstring(input0_2))


if __name__ == "__main__":
    unittest.main()
