#include <iostream>
#include <vector>
#include <string>
#include <cassert>
#include "c:/Users/zarat/IdeaProjects/DataStructures-and-Algorithms/leetcode-questions/cpp/src/main/cpp/com/leetcode/questions/leetcode/editor/en/LongestCommonPrefix.cpp"

int main() {
    Solution solution;
    // Auto-generated test cases:
    // Test Case 1
    vector<string> strs0 = vector<string>{"flower", "flow", "flight"};
    string expected0 = "fl";
    assert(solution.longestCommonPrefix(strs0) == expected0);

    // Test Case 2
    vector<string> strs1 = vector<string>{"dog", "racecar", "car"};
    string expected1 = "";
    assert(solution.longestCommonPrefix(strs1) == expected1);
    
    std::cout << "All tests for Longest Common Prefix passed!" << std::endl;
    return 0;
}
