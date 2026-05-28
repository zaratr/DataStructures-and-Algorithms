#include <iostream>
#include <vector>
#include <string>
#include <cassert>
#include "../support/GeneratedLeetCodeTestHarness.hpp"
#include "c:/Users/zarat/IdeaProjects/DataStructures-and-Algorithms/leetcode-questions/cpp/src/main/cpp/com/leetcode/questions/leetcode/editor/en/LongestSubstringWithoutRepeatingCharacters.cpp"

int main() {
    Solution solution;
    // Test Case 1
    string s0 = "abcabcbb";
    int expected0 = 3;

    // Test Case 2
    string s1 = "bbbbb";
    int expected1 = 1;

    // Test Case 3
    string s2 = "pwwkew";
    int expected2 = 3;

    // Test Case 4
    string s3 = "abcdabcabcabcd";
    int expected3 = 4;

    // Test Case 5
    string s4 = "abcdefgabcdefgabcdefgabcdefg";
    int expected4 = 7;

    // Test Case 6
    string s5 = "aabbccddeeff";
    int expected5 = 2;

    // Test Case 7
    string s6 = "sldfjldskfjdslkfjsdkljflkjsdfljfsdlkflskdjflsdjflskdjflsdkjflsdfjlsd";
    int expected6 = 6;

    // Test Case 8
    string s7 = "racecar";
    int expected7 = 4;

    // Test Case 9
    string s8 = "abcdefghijklmnopqrstuvwxyz";
    int expected8 = 26;

    // Test Case 10
    string s9 = "aabacbebebe";
    int expected9 = 4;

    // Test Case 11
    string s10 = "ekdvdfis";
    int expected10 = 5;

    // Test Case 12
    string s11 = "aabbccddeeffgghhiijjkkllmmnnooppqqrrssttuuvvwwxxyyzz1234567890abcdefghijklmnopqrstuvwxyz";
    int expected11 = 36;

    // Test Case 13
    string s12 = "abbaabbaabba";
    int expected12 = 2;

    // Test Case 14
    string s13 = "aabbccddeeffgghhiijjkkllmmnnooppqqrrssttuuvvwwxxyyzz";
    int expected13 = 2;

    // Test Case 15
    string s14 = "abcdefghihgfedcba";
    int expected14 = 9;

    // Test Case 16
    string s15 = "abcdeffedcba";
    int expected15 = 6;

    // Test Case 17
    string s16 = "aaaaaaaabbbbbbbccccccdddddeeeeeeffffffffggggggg";
    int expected16 = 2;

    // Test Case 18
    string s17 = "tmmzuxt";
    int expected17 = 5;

    // Test Case 19
    string s18 = "nfpdmpi";
    int expected18 = 5;

    // Test Case 20
    string s19 = "anviaj";
    int expected19 = 5;

    // Test Case 21
    string s20 = "abcdeabcde";
    int expected20 = 5;

    // Test Case 22
    string s21 = "abcdabcabcd";
    int expected21 = 4;

    // Test Case 23
    string s22 = "dvdf";
    int expected22 = 3;

    // Test Case 24
    string s23 = "zyxwvutsrqponmlkjihgfedcba";
    int expected23 = 26;

    // Test Case 25
    string s24 = "abcdabcdeabcdabcdeabcd";
    int expected24 = 5;

    // Test Case 26
    string s25 = "rjqzupkoz";
    int expected25 = 8;

    // Test Case 27
    string s26 = "ababababababababab";
    int expected26 = 2;

    // Test Case 28
    string s27 = "!@#$%^&*()_+!@#$%^&*()_+";
    int expected27 = 12;

    // Test Case 29
    string s28 = "cdddddddddddddd";
    int expected28 = 2;

    // Test Case 30
    string s29 = "wobgrovw";
    int expected29 = 6;

    // Test Case 31
    string s30 = "abba";
    int expected30 = 2;

    // Test Case 32
    string s31 = "abcbacabc";
    int expected31 = 3;

    // Test Case 33
    string s32 = "ohvhjdml";
    int expected32 = 6;

    // Test Case 34
    string s33 = "123456789012345678901234567890";
    int expected33 = 10;

    // Test Case 35
    string s34 = "aabbccddeeffgghhiijjkkllmmnnooppqqrrssttuuvvwwxxyyzz1234567890!@#$%^&*()_+";
    int expected34 = 23;

    // Test Case 36
    string s35 = "12345678901234567890";
    int expected35 = 10;
    // Auto-generated test cases:
    LeetCodeTestHarness::assertEqual(expected0, solution.lengthOfLongestSubstring(s0), 0);

    LeetCodeTestHarness::assertEqual(expected1, solution.lengthOfLongestSubstring(s1), 1);

    LeetCodeTestHarness::assertEqual(expected2, solution.lengthOfLongestSubstring(s2), 2);

    LeetCodeTestHarness::assertEqual(expected3, solution.lengthOfLongestSubstring(s3), 3);

    LeetCodeTestHarness::assertEqual(expected4, solution.lengthOfLongestSubstring(s4), 4);

    LeetCodeTestHarness::assertEqual(expected5, solution.lengthOfLongestSubstring(s5), 5);

    LeetCodeTestHarness::assertEqual(expected6, solution.lengthOfLongestSubstring(s6), 6);

    LeetCodeTestHarness::assertEqual(expected7, solution.lengthOfLongestSubstring(s7), 7);

    LeetCodeTestHarness::assertEqual(expected8, solution.lengthOfLongestSubstring(s8), 8);

    LeetCodeTestHarness::assertEqual(expected9, solution.lengthOfLongestSubstring(s9), 9);

    LeetCodeTestHarness::assertEqual(expected10, solution.lengthOfLongestSubstring(s10), 10);

    LeetCodeTestHarness::assertEqual(expected11, solution.lengthOfLongestSubstring(s11), 11);

    LeetCodeTestHarness::assertEqual(expected12, solution.lengthOfLongestSubstring(s12), 12);

    LeetCodeTestHarness::assertEqual(expected13, solution.lengthOfLongestSubstring(s13), 13);

    LeetCodeTestHarness::assertEqual(expected14, solution.lengthOfLongestSubstring(s14), 14);

    LeetCodeTestHarness::assertEqual(expected15, solution.lengthOfLongestSubstring(s15), 15);

    LeetCodeTestHarness::assertEqual(expected16, solution.lengthOfLongestSubstring(s16), 16);

    LeetCodeTestHarness::assertEqual(expected17, solution.lengthOfLongestSubstring(s17), 17);

    LeetCodeTestHarness::assertEqual(expected18, solution.lengthOfLongestSubstring(s18), 18);

    LeetCodeTestHarness::assertEqual(expected19, solution.lengthOfLongestSubstring(s19), 19);

    LeetCodeTestHarness::assertEqual(expected20, solution.lengthOfLongestSubstring(s20), 20);

    LeetCodeTestHarness::assertEqual(expected21, solution.lengthOfLongestSubstring(s21), 21);

    LeetCodeTestHarness::assertEqual(expected22, solution.lengthOfLongestSubstring(s22), 22);

    LeetCodeTestHarness::assertEqual(expected23, solution.lengthOfLongestSubstring(s23), 23);

    LeetCodeTestHarness::assertEqual(expected24, solution.lengthOfLongestSubstring(s24), 24);

    LeetCodeTestHarness::assertEqual(expected25, solution.lengthOfLongestSubstring(s25), 25);

    LeetCodeTestHarness::assertEqual(expected26, solution.lengthOfLongestSubstring(s26), 26);

    LeetCodeTestHarness::assertEqual(expected27, solution.lengthOfLongestSubstring(s27), 27);

    LeetCodeTestHarness::assertEqual(expected28, solution.lengthOfLongestSubstring(s28), 28);

    LeetCodeTestHarness::assertEqual(expected29, solution.lengthOfLongestSubstring(s29), 29);

    LeetCodeTestHarness::assertEqual(expected30, solution.lengthOfLongestSubstring(s30), 30);

    LeetCodeTestHarness::assertEqual(expected31, solution.lengthOfLongestSubstring(s31), 31);

    LeetCodeTestHarness::assertEqual(expected32, solution.lengthOfLongestSubstring(s32), 32);

    LeetCodeTestHarness::assertEqual(expected33, solution.lengthOfLongestSubstring(s33), 33);

    LeetCodeTestHarness::assertEqual(expected34, solution.lengthOfLongestSubstring(s34), 34);

    LeetCodeTestHarness::assertEqual(expected35, solution.lengthOfLongestSubstring(s35), 35);

    std::cout << "All tests for Longest Substring Without Repeating Characters passed!" << std::endl;
    return 0;
}
