package com.leetcode.questions.twosum;

import com.leetcode.questions.leetcode.editor.en.TwoSum;
import org.junit.jupiter.api.Test;
import static org.junit.jupiter.api.Assertions.*;

public class TwoSumTest {
    @Test
    public void testCases() {
        TwoSum.Solution solution = new TwoSum.Solution();
        // Auto-generated test cases:
        // Test Case 1
        int[] nums0 = new int[]{2, 7, 11, 15};
        int target0 = 9;
        int[] expected0 = new int[]{0, 1};
        assertArrayEquals(expected0, solution.twoSum(nums0, target0));

        // Test Case 2
        int[] nums1 = new int[]{3, 2, 4};
        int target1 = 6;
        int[] expected1 = new int[]{1, 2};
        assertArrayEquals(expected1, solution.twoSum(nums1, target1));

        // Test Case 3
        int[] nums2 = new int[]{3, 3};
        int target2 = 6;
        int[] expected2 = new int[]{0, 1};
        assertArrayEquals(expected2, solution.twoSum(nums2, target2));
    }
}
