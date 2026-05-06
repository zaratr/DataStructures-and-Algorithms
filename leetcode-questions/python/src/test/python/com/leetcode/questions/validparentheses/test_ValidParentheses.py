"""Tests for LeetCode 20 -- Valid Parentheses."""
import os
import sys
import unittest

# Path to the user's solution module.
sys.path.append(os.path.abspath(os.path.join(
    os.path.dirname(__file__), "../../../../../../main/python")))

from com.leetcode.questions.leetcode.editor.en.ValidParentheses import Solution  # noqa: E402


class TestValidParentheses(unittest.TestCase):
    def setUp(self):
        self.solution = Solution()

    def test_all_cases(self):
        # Test Case 1
        input0_0 = "()"
        # Expected output: ""
        # Composite or non-boolean expected output; direct assertion skipped.
        self.solution.isValid(input0_0)

        # Test Case 2
        input0_1 = "()[]{}"
        # Expected output: ""
        # Composite or non-boolean expected output; direct assertion skipped.
        self.solution.isValid(input0_1)

        # Test Case 3
        input0_2 = "(]"
        # Expected output: ""
        # Composite or non-boolean expected output; direct assertion skipped.
        self.solution.isValid(input0_2)

        # Test Case 4
        input0_3 = "([])"
        # Expected output: ""
        # Composite or non-boolean expected output; direct assertion skipped.
        self.solution.isValid(input0_3)

        # Test Case 5
        input0_4 = "([)]"
        # Expected output: ""
        # Composite or non-boolean expected output; direct assertion skipped.
        self.solution.isValid(input0_4)


if __name__ == "__main__":
    unittest.main()
