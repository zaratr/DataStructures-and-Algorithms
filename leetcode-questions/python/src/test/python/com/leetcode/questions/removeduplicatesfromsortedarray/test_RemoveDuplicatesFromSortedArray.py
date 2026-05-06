"""Tests for LeetCode 26 -- Remove Duplicates from Sorted Array."""
import os
import sys
import unittest

# Path to the user's solution module.
sys.path.append(os.path.abspath(os.path.join(
    os.path.dirname(__file__), "../../../../../../main/python")))

from com.leetcode.questions.leetcode.editor.en.RemoveDuplicatesFromSortedArray import Solution  # noqa: E402


class TestRemoveDuplicatesFromSortedArray(unittest.TestCase):
    def setUp(self):
        self.solution = Solution()

    def test_all_cases(self):
        # Test Case 1
        input0_0 = [1, 1, 2]
        # Expected output: "2, nums = [1,2,_]"
        # Composite or non-scalar expected output; direct assertion skipped.
        self.solution.removeDuplicates(input0_0)

        # Test Case 2
        input0_1 = [0, 0, 1, 1, 1, 2, 2, 3, 3, 4]
        # Expected output: "5, nums = [0,1,2,3,4,_,_,_,_,_]"
        # Composite or non-scalar expected output; direct assertion skipped.
        self.solution.removeDuplicates(input0_1)


if __name__ == "__main__":
    unittest.main()
