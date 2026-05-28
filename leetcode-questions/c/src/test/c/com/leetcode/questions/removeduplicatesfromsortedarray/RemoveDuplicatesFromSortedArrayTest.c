#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <assert.h>
#include "../support/generated_leetcode_test_harness.h"
#include "c:/Users/zarat/IdeaProjects/DataStructures-and-Algorithms/leetcode-questions/c/src/main/c/com/leetcode/questions/leetcode/editor/en/RemoveDuplicatesFromSortedArray.c"

int main() {
    // Auto-generated test cases:
    // Test Case 1
    int nums0[] = {1, 1, 2};
    int nums0Size = 3;
    // Expected output: "2, nums = [1,2,_]"
    // Composite or non-scalar expected output; direct C assertion skipped.

    // Test Case 2
    int nums1[] = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    int nums1Size = 10;
    // Expected output: "5, nums = [0,1,2,3,4,_,_,_,_,_]"
    // Composite or non-scalar expected output; direct C assertion skipped.

    // Test Case 3
    int nums2[] = {-100, 0, 100};
    int nums2Size = 3;
    int expected2 = 3;
    leetcode_assert_int_equal(expected2, removeDuplicates(nums2, nums2Size), 2);

    // Test Case 4
    int nums3[] = {1};
    int nums3Size = 1;
    int expected3 = 1;
    leetcode_assert_int_equal(expected3, removeDuplicates(nums3, nums3Size), 3);

    // Test Case 5
    int nums4[] = {1, 1, 2};
    int nums4Size = 3;
    int expected4 = 2;
    leetcode_assert_int_equal(expected4, removeDuplicates(nums4, nums4Size), 4);

    // Test Case 6
    int nums5[] = {-100, 100};
    int nums5Size = 2;
    int expected5 = 2;
    leetcode_assert_int_equal(expected5, removeDuplicates(nums5, nums5Size), 5);

    printf("All tests for Remove Duplicates from Sorted Array passed!\n");
    return 0;
}
