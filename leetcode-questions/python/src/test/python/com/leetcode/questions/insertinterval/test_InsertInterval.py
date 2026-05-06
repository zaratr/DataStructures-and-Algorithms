"""Tests for LeetCode 57 -- Insert Interval."""
import os
import sys
import unittest

# Path to the user's solution module.
sys.path.append(os.path.abspath(os.path.join(
    os.path.dirname(__file__), "../../../../../../main/python")))

from com.leetcode.questions.leetcode.editor.en.InsertInterval import Solution  # noqa: E402


class TestInsertInterval(unittest.TestCase):
    def setUp(self):
        self.solution = Solution()

    def test_all_cases(self):
        # Test Case 1
        input0_0 = [[1, 3], [6, 9]]
        input1_0 = [2, 5]
        expected0 = [[1, 5], [6, 9]]
        self.assertEqual(expected0, self.solution.insert(input0_0, input1_0))

        # Test Case 2
        input0_1 = [[1, 2], [3, 5], [6, 7], [8, 10], [12, 16]]
        input1_1 = [4, 8]
        expected1 = [[1, 2], [3, 10], [12, 16]]
        self.assertEqual(expected1, self.solution.insert(input0_1, input1_1))


if __name__ == "__main__":
    unittest.main()
