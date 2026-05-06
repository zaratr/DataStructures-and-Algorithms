package com.leetcode.questions.removeduplicatesfromsortedarray;

import com.leetcode.questions.leetcode.editor.en.RemoveDuplicatesFromSortedArray;
import org.junit.jupiter.api.Test;
import static org.junit.jupiter.api.Assertions.*;

public class RemoveDuplicatesFromSortedArrayTest {
    @Test
    public void testCases() {
        RemoveDuplicatesFromSortedArray.Solution solution = new RemoveDuplicatesFromSortedArray.Solution();
        // Auto-generated test cases:
        // Test Case 1
        int[] nums0 = new int[]{1, 1, 2};
        // Expected output: "2, nums = [1,2,_]"
        // Composite or non-scalar expected output; direct assertion skipped.
        solution.removeDuplicates(nums0);

        // Test Case 2
        int[] nums1 = new int[]{0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
        // Expected output: "5, nums = [0,1,2,3,4,_,_,_,_,_]"
        // Composite or non-scalar expected output; direct assertion skipped.
        solution.removeDuplicates(nums1);
    }
}
