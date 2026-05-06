#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <assert.h>
#include "c:/Users/zarat/IdeaProjects/DataStructures-and-Algorithms/leetcode-questions/c/src/main/c/com/leetcode/questions/leetcode/editor/en/LongestSubstringWithoutRepeatingCharacters.c"

int main() {
    // Auto-generated test cases:
    // Test Case 1
    char* s0 = "abcabcbb";
    int expected0 = 3;
    assert(lengthOfLongestSubstring(s0) == expected0);

    // Test Case 2
    char* s1 = "bbbbb";
    int expected1 = 1;
    assert(lengthOfLongestSubstring(s1) == expected1);

    // Test Case 3
    char* s2 = "pwwkew";
    int expected2 = 3;
    assert(lengthOfLongestSubstring(s2) == expected2);
    
    printf("All tests for Longest Substring Without Repeating Characters passed!\n");
    return 0;
}
