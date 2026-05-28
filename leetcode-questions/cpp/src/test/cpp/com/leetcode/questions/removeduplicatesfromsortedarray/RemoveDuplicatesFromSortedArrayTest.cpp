#include <iostream>
#include <vector>
#include <string>
#include <cassert>
#include "../support/GeneratedLeetCodeTestHarness.hpp"
#include "c:/Users/zarat/IdeaProjects/DataStructures-and-Algorithms/leetcode-questions/cpp/src/main/cpp/com/leetcode/questions/leetcode/editor/en/RemoveDuplicatesFromSortedArray.cpp"

int main() {
    Solution solution;
    // Test Case 1
    vector<int> nums0 = vector<int>{1, 1, 2};
    // Expected output: "2, nums = [1,2,_]"

    // Test Case 2
    vector<int> nums1 = vector<int>{0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    // Expected output: "5, nums = [0,1,2,3,4,_,_,_,_,_]"

    // Test Case 3
    vector<int> nums2 = vector<int>{-100, 0, 100};
    int expected2 = 3;

    // Test Case 4
    vector<int> nums3 = vector<int>{1};
    int expected3 = 1;

    // Test Case 5
    vector<int> nums4 = vector<int>{1, 1, 2};
    int expected4 = 2;

    // Test Case 6
    vector<int> nums5 = vector<int>{-100, 100};
    int expected5 = 2;
    // Auto-generated test cases:
    (void)solution.removeDuplicates(nums0);

    (void)solution.removeDuplicates(nums1);

    LeetCodeTestHarness::assertEqual(expected2, solution.removeDuplicates(nums2), 2);

    LeetCodeTestHarness::assertEqual(expected3, solution.removeDuplicates(nums3), 3);

    LeetCodeTestHarness::assertEqual(expected4, solution.removeDuplicates(nums4), 4);

    LeetCodeTestHarness::assertEqual(expected5, solution.removeDuplicates(nums5), 5);

    std::cout << "All tests for Remove Duplicates from Sorted Array passed!" << std::endl;
    return 0;
}
