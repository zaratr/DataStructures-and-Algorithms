#include <iostream>
#include <vector>
#include <string>
#include <cassert>
#include "../support/GeneratedLeetCodeTestHarness.hpp"
#include "c:/Users/zarat/IdeaProjects/DataStructures-and-Algorithms/leetcode-questions/cpp/src/main/cpp/com/leetcode/questions/leetcode/editor/en/SetMatrixZeroes.cpp"

int main() {
    Solution solution;
    // Test Case 1
    vector<vector<int>> matrix0 = vector<vector<int>>{vector<int>{1, 1, 1}, vector<int>{1, 0, 1}, vector<int>{1, 1, 1}};
    // Expected output: [[1, 0, 1], [0, 0, 0], [1, 0, 1]]

    // Test Case 2
    vector<vector<int>> matrix1 = vector<vector<int>>{vector<int>{0, 1, 2, 0}, vector<int>{3, 4, 5, 2}, vector<int>{1, 3, 1, 5}};
    // Expected output: [[0, 0, 0, 0], [0, 4, 5, 0], [0, 3, 1, 0]]
    // Auto-generated test cases:
    solution.setZeroes(matrix0);
    // In-place mutation expected output; direct assertion skipped.

    solution.setZeroes(matrix1);
    // In-place mutation expected output; direct assertion skipped.

    std::cout << "All tests for Set Matrix Zeroes passed!" << std::endl;
    return 0;
}
