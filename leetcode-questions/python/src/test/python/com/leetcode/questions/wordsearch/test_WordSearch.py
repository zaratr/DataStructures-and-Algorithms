"""Tests for LeetCode 79 -- Word Search."""
import os
import sys
import unittest

# Path to the user's solution module.
sys.path.append(os.path.abspath(os.path.join(
    os.path.dirname(__file__), "../../../../../../main/python")))

from com.leetcode.questions.leetcode.editor.en.WordSearch import Solution  # noqa: E402


class TestWordSearch(unittest.TestCase):
    def setUp(self):
        self.solution = Solution()

    def test_all_cases(self):
        # Test Case 1
        input0_0 = [["A", "B", "C", "E"], ["S", "F", "C", "S"], ["A", "D", "E", "E"]]
        input1_0 = "ABCCED"
        expected0 = true
        self.assertEqual(expected0, self.solution.exist(input0_0, input1_0))

        # Test Case 2
        input0_1 = [["A", "B", "C", "E"], ["S", "F", "C", "S"], ["A", "D", "E", "E"]]
        input1_1 = "SEE"
        expected1 = true
        self.assertEqual(expected1, self.solution.exist(input0_1, input1_1))

        # Test Case 3
        input0_2 = [["A", "B", "C", "E"], ["S", "F", "C", "S"], ["A", "D", "E", "E"]]
        input1_2 = "ABCB"
        expected2 = false
        self.assertEqual(expected2, self.solution.exist(input0_2, input1_2))


if __name__ == "__main__":
    unittest.main()
