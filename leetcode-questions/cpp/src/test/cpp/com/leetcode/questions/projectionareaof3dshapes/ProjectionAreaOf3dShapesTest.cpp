#include <iostream>
#include <vector>
#include <string>
#include <cassert>
#include "c:/Users/zarat/IdeaProjects/DataStructures-and-Algorithms/leetcode-questions/cpp/src/main/cpp/com/leetcode/questions/leetcode/editor/en/ProjectionAreaOf3dShapes.cpp"

int main() {
    Solution solution;
    // Auto-generated test cases:
    // Test Case 1
    vector<vector<int>> grid0 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{3, 4}};
    int expected0 = 17;
    assert(solution.projectionArea(grid0) == expected0);

    // Test Case 2
    vector<vector<int>> grid1 = vector<vector<int>>{vector<int>{2}};
    int expected1 = 5;
    assert(solution.projectionArea(grid1) == expected1);

    // Test Case 3
    vector<vector<int>> grid2 = vector<vector<int>>{vector<int>{1, 0}, vector<int>{0, 2}};
    int expected2 = 8;
    assert(solution.projectionArea(grid2) == expected2);
    
    std::cout << "All tests for Projection Area of 3D Shapes passed!" << std::endl;
    return 0;
}
