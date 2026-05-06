"""Tests for LeetCode 883 -- Projection Area of 3D Shapes."""
import os
import sys
import unittest

# Path to the user's solution module.
sys.path.append(os.path.abspath(os.path.join(
    os.path.dirname(__file__), "../../../../../../main/python")))

from com.leetcode.questions.leetcode.editor.en.ProjectionAreaOf3dShapes import Solution  # noqa: E402


class TestProjectionAreaOf3dShapes(unittest.TestCase):
    def setUp(self):
        self.solution = Solution()

    def test_all_cases(self):
        # Test Case 1
        input0_0 = [[1, 2], [3, 4]]
        expected0 = 17
        self.assertEqual(expected0, self.solution.projectionArea(input0_0))

        # Test Case 2
        input0_1 = [[2]]
        expected1 = 5
        self.assertEqual(expected1, self.solution.projectionArea(input0_1))

        # Test Case 3
        input0_2 = [[1, 0], [0, 2]]
        expected2 = 8
        self.assertEqual(expected2, self.solution.projectionArea(input0_2))


if __name__ == "__main__":
    unittest.main()
