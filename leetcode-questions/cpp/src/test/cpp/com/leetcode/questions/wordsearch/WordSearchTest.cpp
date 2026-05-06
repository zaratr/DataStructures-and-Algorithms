#include <iostream>
#include <vector>
#include <string>
#include <cassert>
#include "c:/Users/zarat/IdeaProjects/DataStructures-and-Algorithms/leetcode-questions/cpp/src/main/cpp/com/leetcode/questions/leetcode/editor/en/WordSearch.cpp"

int main() {
    Solution solution;
    // Auto-generated test cases:
    // Test Case 1
    vector<vector<char>> board0 = vector<vector<char>>{vector<char>{'A', 'B', 'C', 'E'}, vector<char>{'S', 'F', 'C', 'S'}, vector<char>{'A', 'D', 'E', 'E'}};
    string word0 = "ABCCED";
    bool expected0 = true;
    assert(solution.exist(board0, word0) == expected0);

    // Test Case 2
    vector<vector<char>> board1 = vector<vector<char>>{vector<char>{'A', 'B', 'C', 'E'}, vector<char>{'S', 'F', 'C', 'S'}, vector<char>{'A', 'D', 'E', 'E'}};
    string word1 = "SEE";
    bool expected1 = true;
    assert(solution.exist(board1, word1) == expected1);

    // Test Case 3
    vector<vector<char>> board2 = vector<vector<char>>{vector<char>{'A', 'B', 'C', 'E'}, vector<char>{'S', 'F', 'C', 'S'}, vector<char>{'A', 'D', 'E', 'E'}};
    string word2 = "ABCB";
    bool expected2 = false;
    assert(solution.exist(board2, word2) == expected2);
    
    std::cout << "All tests for Word Search passed!" << std::endl;
    return 0;
}
