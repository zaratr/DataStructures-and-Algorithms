#include <iostream>
#include <vector>
#include <string>
#include <cassert>
#include "c:/Users/zarat/IdeaProjects/DataStructures-and-Algorithms/leetcode-questions/cpp/src/main/cpp/com/leetcode/questions/leetcode/editor/en/TheSkylineProblem.cpp"

int main() {
    Solution solution;
    // Auto-generated test cases:
    // Test Case 1
    vector<vector<int>> buildings0 = vector<vector<int>>{vector<int>{2, 9, 10}, vector<int>{3, 7, 15}, vector<int>{5, 12, 12}, vector<int>{15, 20, 10}, vector<int>{19, 24, 8}};
    vector<vector<int>> expected0 = vector<vector<int>>{vector<int>{2, 10}, vector<int>{3, 15}, vector<int>{7, 12}, vector<int>{12, 0}, vector<int>{15, 10}, vector<int>{20, 8}, vector<int>{24, 0}};
    assert(solution.getSkyline(buildings0) == expected0);

    // Test Case 2
    vector<vector<int>> buildings1 = vector<vector<int>>{vector<int>{0, 2, 3}, vector<int>{2, 5, 3}};
    vector<vector<int>> expected1 = vector<vector<int>>{vector<int>{0, 3}, vector<int>{5, 0}};
    assert(solution.getSkyline(buildings1) == expected1);
    
    std::cout << "All tests for The Skyline Problem passed!" << std::endl;
    return 0;
}
