"""Tests for LeetCode 175 -- Combine Two Tables."""
import os
import sys
import unittest

# Path to the user's solution module.
sys.path.append(os.path.abspath(os.path.join(
    os.path.dirname(__file__), "../../../../../../main/python")))

from com.leetcode.questions.leetcode.editor.en.CombineTwoTables import Solution  # noqa: E402


class TestCombineTwoTables(unittest.TestCase):
    def setUp(self):
        self.solution = Solution()

    def test_all_cases(self):
        # Test Case 1
        # Input: {"headers":{"Person":["personId","lastName","firstName"],"Address":["addressId","personId","city","state"]},"rows":{"Person":[[1,"Wang","Allen"],[2,"Alice","Bob"]],"Address":[[1,2,"New York City","New York"],[2,3,"Leetcode","California"]]}}
        # Expected output: +-----------+----------+---------------+----------+
        #     // | firstName | lastName | city          | state    |
        #     // +-----------+----------+---------------+----------+
        #     // | Allen     | Wang     | Null          | Null     |
        #     // | Bob       | Alice    | New York City | New York |
        #     // +-----------+----------+---------------+----------+
        # No direct Python assertion generated for this constructor/design/tree/list/SQL shape.

        pass


if __name__ == "__main__":
    unittest.main()
