#include <iostream>
#include <vector>
#include <string>
#include <cassert>
#include "c:/Users/zarat/IdeaProjects/DataStructures-and-Algorithms/leetcode-questions/cpp/src/main/cpp/com/leetcode/questions/leetcode/editor/en/LongestSubstringWithoutRepeatingCharacters.cpp"

int main() {
    Solution solution;
    // Auto-generated test cases:
    // Test Case 1
    string s0 = "abcabcbb";
    int expected0 = 3;
    assert(solution.lengthOfLongestSubstring(s0) == expected0);

    // Test Case 2
    string s1 = "bbbbb";
    int expected1 = 1;
    assert(solution.lengthOfLongestSubstring(s1) == expected1);

    // Test Case 3
    string s2 = "pwwkew";
    int expected2 = 3;
    assert(solution.lengthOfLongestSubstring(s2) == expected2);
    
    std::cout << "All tests for Longest Substring Without Repeating Characters passed!" << std::endl;
    return 0;
}
