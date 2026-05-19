"""Tests for LeetCode 14 -- Longest Common Prefix."""
import os
import sys
import unittest
from pathlib import Path

# Path to the user's solution module.
sys.path.append(os.path.abspath(os.path.join(
    os.path.dirname(__file__), "../../../../../../main/python")))
sys.path.append(os.path.abspath(os.path.join(
    os.path.dirname(__file__), "../../../../")))

from com.leetcode.questions.leetcode.editor.en.LongestCommonPrefix import Solution  # noqa: E402
from com.leetcode.questions.support.generated_leetcode_test_harness import run_cases  # noqa: E402

CASES_PATH = Path("generated-test-cases") / "longest-common-prefix.json"

class TestLongestCommonPrefix(unittest.TestCase):
    def setUp(self):
        self.solution = Solution()


    def test_all_cases(self):
        run_cases(self, self.solution, "longestCommonPrefix", CASES_PATH.read_text(encoding="utf-8"))


if __name__ == "__main__":
    unittest.main()
