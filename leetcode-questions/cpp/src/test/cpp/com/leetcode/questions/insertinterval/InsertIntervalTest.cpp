#include <iostream>
#include <vector>
#include <string>
#include <cassert>
#include "c:/Users/zarat/IdeaProjects/DataStructures-and-Algorithms/leetcode-questions/cpp/src/main/cpp/com/leetcode/questions/leetcode/editor/en/InsertInterval.cpp"

int main() {
    Solution solution;
    // Auto-generated test cases:
    // Test Case 1
    vector<vector<int>> intervals0 = vector<vector<int>>{vector<int>{1, 3}, vector<int>{6, 9}};
    vector<int> newInterval0 = vector<int>{2, 5};
    vector<vector<int>> expected0 = vector<vector<int>>{vector<int>{1, 5}, vector<int>{6, 9}};
    assert(solution.insert(intervals0, newInterval0) == expected0);

    // Test Case 2
    vector<vector<int>> intervals1 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{3, 5}, vector<int>{6, 7}, vector<int>{8, 10}, vector<int>{12, 16}};
    vector<int> newInterval1 = vector<int>{4, 8};
    vector<vector<int>> expected1 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{3, 10}, vector<int>{12, 16}};
    assert(solution.insert(intervals1, newInterval1) == expected1);
    
    std::cout << "All tests for Insert Interval passed!" << std::endl;
    return 0;
}
