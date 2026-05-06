#include <iostream>
#include <vector>
#include <string>
#include <cassert>
#include "c:/Users/zarat/IdeaProjects/DataStructures-and-Algorithms/leetcode-questions/cpp/src/main/cpp/com/leetcode/questions/leetcode/editor/en/RemoveDuplicatesFromSortedArray.cpp"

int main() {
    Solution solution;
    // Auto-generated test cases:
    // Test Case 1
    vector<int> nums0 = vector<int>{1, 1, 2};
    // Expected output: "2, nums = [1,2,_]"
    // Composite or non-scalar expected output; direct assertion skipped.
    (void)solution.removeDuplicates(nums0);

    // Test Case 2
    vector<int> nums1 = vector<int>{0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    // Expected output: "5, nums = [0,1,2,3,4,_,_,_,_,_]"
    // Composite or non-scalar expected output; direct assertion skipped.
    (void)solution.removeDuplicates(nums1);
    
    std::cout << "All tests for Remove Duplicates from Sorted Array passed!" << std::endl;
    return 0;
}
