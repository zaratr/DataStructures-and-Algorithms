#include <iostream>
#include <vector>
#include <string>
#include <cassert>
#include "c:/Users/zarat/IdeaProjects/DataStructures-and-Algorithms/leetcode-questions/cpp/src/main/cpp/com/leetcode/questions/leetcode/editor/en/TwoSum.cpp"

int main() {
    Solution solution;
    // Auto-generated test cases:
    // Test Case 1
    vector<int> nums0 = vector<int>{2, 7, 11, 15};
    int target0 = 9;
    vector<int> expected0 = vector<int>{0, 1};
    assert(solution.twoSum(nums0, target0) == expected0);

    // Test Case 2
    vector<int> nums1 = vector<int>{3, 2, 4};
    int target1 = 6;
    vector<int> expected1 = vector<int>{1, 2};
    assert(solution.twoSum(nums1, target1) == expected1);

    // Test Case 3
    vector<int> nums2 = vector<int>{3, 3};
    int target2 = 6;
    vector<int> expected2 = vector<int>{0, 1};
    assert(solution.twoSum(nums2, target2) == expected2);
    
    std::cout << "All tests for Two Sum passed!" << std::endl;
    return 0;
}
