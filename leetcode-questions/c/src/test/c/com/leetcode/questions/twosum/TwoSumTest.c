#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <assert.h>
#include "c:/Users/zarat/IdeaProjects/DataStructures-and-Algorithms/leetcode-questions/c/src/main/c/com/leetcode/questions/leetcode/editor/en/TwoSum.c"

int main() {
    // Auto-generated test cases:
    // Test Case 1
    int nums0[] = {2, 7, 11, 15};
    int nums0Size = 4;
    int target0 = 9;
    int expected0[] = {0, 1};
    int expected0Size = 2;
    int returnSize0 = 0;
    int* actual0 = twoSum(nums0, nums0Size, target0, &returnSize0);
    assert(actual0 != NULL);
    assert(returnSize0 == expected0Size);
    for (int j = 0; j < expected0Size; ++j) assert(actual0[j] == expected0[j]);

    // Test Case 2
    int nums1[] = {3, 2, 4};
    int nums1Size = 3;
    int target1 = 6;
    int expected1[] = {1, 2};
    int expected1Size = 2;
    int returnSize1 = 0;
    int* actual1 = twoSum(nums1, nums1Size, target1, &returnSize1);
    assert(actual1 != NULL);
    assert(returnSize1 == expected1Size);
    for (int j = 0; j < expected1Size; ++j) assert(actual1[j] == expected1[j]);

    // Test Case 3
    int nums2[] = {3, 3};
    int nums2Size = 2;
    int target2 = 6;
    int expected2[] = {0, 1};
    int expected2Size = 2;
    int returnSize2 = 0;
    int* actual2 = twoSum(nums2, nums2Size, target2, &returnSize2);
    assert(actual2 != NULL);
    assert(returnSize2 == expected2Size);
    for (int j = 0; j < expected2Size; ++j) assert(actual2[j] == expected2[j]);
    
    printf("All tests for Two Sum passed!\n");
    return 0;
}
