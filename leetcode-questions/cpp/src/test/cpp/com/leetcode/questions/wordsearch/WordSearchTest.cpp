#include <iostream>
#include <vector>
#include <string>
#include <cassert>
#include "../support/GeneratedLeetCodeTestHarness.hpp"
#include "c:/Users/zarat/IdeaProjects/DataStructures-and-Algorithms/leetcode-questions/cpp/src/main/cpp/com/leetcode/questions/leetcode/editor/en/WordSearch.cpp"

int main() {
    Solution solution;
    // Test Case 1
    vector<vector<char>> board0 = vector<vector<char>>{vector<char>{'A', 'B', 'C', 'E'}, vector<char>{'S', 'F', 'C', 'S'}, vector<char>{'A', 'D', 'E', 'E'}};
    string word0 = "ABCCED";
    bool expected0 = true;

    // Test Case 2
    vector<vector<char>> board1 = vector<vector<char>>{vector<char>{'A', 'B', 'C', 'E'}, vector<char>{'S', 'F', 'C', 'S'}, vector<char>{'A', 'D', 'E', 'E'}};
    string word1 = "SEE";
    bool expected1 = true;

    // Test Case 3
    vector<vector<char>> board2 = vector<vector<char>>{vector<char>{'A', 'B', 'C', 'E'}, vector<char>{'S', 'F', 'C', 'S'}, vector<char>{'A', 'D', 'E', 'E'}};
    string word2 = "ABCB";
    bool expected2 = false;

    // Test Case 4
    vector<vector<char>> board3 = vector<vector<char>>{vector<char>{'A', 'B'}, vector<char>{'C', 'D'}};
    string word3 = "BD";
    bool expected3 = true;

    // Test Case 5
    vector<vector<char>> board4 = vector<vector<char>>{vector<char>{'A', 'B'}, vector<char>{'C', 'D'}};
    string word4 = "AC";
    bool expected4 = true;

    // Test Case 6
    vector<vector<char>> board5 = vector<vector<char>>{vector<char>{'A', 'B', 'C', 'E'}, vector<char>{'S', 'F', 'C', 'S'}, vector<char>{'A', 'D', 'E', 'E'}};
    string word5 = "ASADB";
    bool expected5 = false;

    // Test Case 7
    vector<vector<char>> board6 = vector<vector<char>>{vector<char>{'A', 'B', 'C', 'E'}, vector<char>{'S', 'F', 'E', 'S'}, vector<char>{'A', 'D', 'E', 'E'}};
    string word6 = "ABCESEEEFS";
    bool expected6 = true;

    // Test Case 8
    vector<vector<char>> board7 = vector<vector<char>>{vector<char>{'A', 'B', 'C', 'E'}, vector<char>{'S', 'F', 'C', 'S'}, vector<char>{'A', 'D', 'E', 'E'}};
    string word7 = "Z";
    bool expected7 = false;

    // Test Case 9
    vector<vector<char>> board8 = vector<vector<char>>{vector<char>{'A', 'B', 'C', 'E'}, vector<char>{'S', 'F', 'C', 'S'}, vector<char>{'A', 'D', 'E', 'E'}};
    string word8 = "AB";
    bool expected8 = true;

    // Test Case 10
    vector<vector<char>> board9 = vector<vector<char>>{vector<char>{'A', 'B', 'C', 'E'}, vector<char>{'S', 'F', 'C', 'S'}, vector<char>{'A', 'D', 'E', 'E'}};
    string word9 = "E";
    bool expected9 = true;

    // Test Case 11
    vector<vector<char>> board10 = vector<vector<char>>{vector<char>{'A', 'B'}, vector<char>{'C', 'D'}};
    string word10 = "AB";
    bool expected10 = true;

    // Test Case 12
    vector<vector<char>> board11 = vector<vector<char>>{vector<char>{'A', 'B'}, vector<char>{'C', 'D'}};
    string word11 = "CD";
    bool expected11 = true;

    // Test Case 13
    vector<vector<char>> board12 = vector<vector<char>>{vector<char>{'A', 'B', 'C', 'E'}, vector<char>{'S', 'F', 'C', 'S'}, vector<char>{'A', 'D', 'E', 'E'}};
    string word12 = "ASAD";
    bool expected12 = true;

    // Test Case 14
    vector<vector<char>> board13 = vector<vector<char>>{vector<char>{'A'}};
    string word13 = "A";
    bool expected13 = true;
    // Auto-generated test cases:
    LeetCodeTestHarness::assertEqual(expected0, solution.exist(board0, word0), 0);

    LeetCodeTestHarness::assertEqual(expected1, solution.exist(board1, word1), 1);

    LeetCodeTestHarness::assertEqual(expected2, solution.exist(board2, word2), 2);

    LeetCodeTestHarness::assertEqual(expected3, solution.exist(board3, word3), 3);

    LeetCodeTestHarness::assertEqual(expected4, solution.exist(board4, word4), 4);

    LeetCodeTestHarness::assertEqual(expected5, solution.exist(board5, word5), 5);

    LeetCodeTestHarness::assertEqual(expected6, solution.exist(board6, word6), 6);

    LeetCodeTestHarness::assertEqual(expected7, solution.exist(board7, word7), 7);

    LeetCodeTestHarness::assertEqual(expected8, solution.exist(board8, word8), 8);

    LeetCodeTestHarness::assertEqual(expected9, solution.exist(board9, word9), 9);

    LeetCodeTestHarness::assertEqual(expected10, solution.exist(board10, word10), 10);

    LeetCodeTestHarness::assertEqual(expected11, solution.exist(board11, word11), 11);

    LeetCodeTestHarness::assertEqual(expected12, solution.exist(board12, word12), 12);

    LeetCodeTestHarness::assertEqual(expected13, solution.exist(board13, word13), 13);

    std::cout << "All tests for Word Search passed!" << std::endl;
    return 0;
}
