#include <iostream>
#include <vector>
#include <string>
#include <cassert>
#include "c:/Users/zarat/IdeaProjects/DataStructures-and-Algorithms/leetcode-questions/cpp/src/main/cpp/com/leetcode/questions/leetcode/editor/en/_3sum.cpp"

int main() {
    Solution solution;
    // Auto-generated test cases:
    // Test Case 1
    vector<int> nums0 = vector<int>{-1, 0, 1, 2, -1, -4};
    vector<vector<int>> expected0 = vector<vector<int>>{vector<int>{-1, -1, 2}, vector<int>{-1, 0, 1}};
    assert(solution.threeSum(nums0) == expected0);

    // Test Case 2
    vector<int> nums1 = vector<int>{0, 1, 1};
    vector<vector<int>> expected1 = vector<vector<int>>{};
    assert(solution.threeSum(nums1) == expected1);

    // Test Case 3
    vector<int> nums2 = vector<int>{0, 0, 0};
    vector<vector<int>> expected2 = vector<vector<int>>{vector<int>{0, 0, 0}};
    assert(solution.threeSum(nums2) == expected2);
    
    std::cout << "All tests for 3Sum passed!" << std::endl;
    return 0;
}
