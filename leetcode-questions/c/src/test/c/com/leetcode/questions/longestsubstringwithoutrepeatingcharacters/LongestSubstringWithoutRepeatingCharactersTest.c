#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <assert.h>
#include "../support/generated_leetcode_test_harness.h"
#include "c:/Users/zarat/IdeaProjects/DataStructures-and-Algorithms/leetcode-questions/c/src/main/c/com/leetcode/questions/leetcode/editor/en/LongestSubstringWithoutRepeatingCharacters.c"

int main() {
    // Auto-generated test cases:
    // Test Case 1
    char* s0 = "abcabcbb";
    int expected0 = 3;
    leetcode_assert_int_equal(expected0, lengthOfLongestSubstring(s0), 0);

    // Test Case 2
    char* s1 = "bbbbb";
    int expected1 = 1;
    leetcode_assert_int_equal(expected1, lengthOfLongestSubstring(s1), 1);

    // Test Case 3
    char* s2 = "pwwkew";
    int expected2 = 3;
    leetcode_assert_int_equal(expected2, lengthOfLongestSubstring(s2), 2);

    // Test Case 4
    char* s3 = "abcdabcabcabcd";
    int expected3 = 4;
    leetcode_assert_int_equal(expected3, lengthOfLongestSubstring(s3), 3);

    // Test Case 5
    char* s4 = "abcdefgabcdefgabcdefgabcdefg";
    int expected4 = 7;
    leetcode_assert_int_equal(expected4, lengthOfLongestSubstring(s4), 4);

    // Test Case 6
    char* s5 = "aabbccddeeff";
    int expected5 = 2;
    leetcode_assert_int_equal(expected5, lengthOfLongestSubstring(s5), 5);

    // Test Case 7
    char* s6 = "sldfjldskfjdslkfjsdkljflkjsdfljfsdlkflskdjflsdjflskdjflsdkjflsdfjlsd";
    int expected6 = 6;
    leetcode_assert_int_equal(expected6, lengthOfLongestSubstring(s6), 6);

    // Test Case 8
    char* s7 = "racecar";
    int expected7 = 4;
    leetcode_assert_int_equal(expected7, lengthOfLongestSubstring(s7), 7);

    // Test Case 9
    char* s8 = "abcdefghijklmnopqrstuvwxyz";
    int expected8 = 26;
    leetcode_assert_int_equal(expected8, lengthOfLongestSubstring(s8), 8);

    // Test Case 10
    char* s9 = "aabacbebebe";
    int expected9 = 4;
    leetcode_assert_int_equal(expected9, lengthOfLongestSubstring(s9), 9);

    // Test Case 11
    char* s10 = "ekdvdfis";
    int expected10 = 5;
    leetcode_assert_int_equal(expected10, lengthOfLongestSubstring(s10), 10);

    // Test Case 12
    char* s11 = "aabbccddeeffgghhiijjkkllmmnnooppqqrrssttuuvvwwxxyyzz1234567890abcdefghijklmnopqrstuvwxyz";
    int expected11 = 36;
    leetcode_assert_int_equal(expected11, lengthOfLongestSubstring(s11), 11);

    // Test Case 13
    char* s12 = "abbaabbaabba";
    int expected12 = 2;
    leetcode_assert_int_equal(expected12, lengthOfLongestSubstring(s12), 12);

    // Test Case 14
    char* s13 = "aabbccddeeffgghhiijjkkllmmnnooppqqrrssttuuvvwwxxyyzz";
    int expected13 = 2;
    leetcode_assert_int_equal(expected13, lengthOfLongestSubstring(s13), 13);

    // Test Case 15
    char* s14 = "abcdefghihgfedcba";
    int expected14 = 9;
    leetcode_assert_int_equal(expected14, lengthOfLongestSubstring(s14), 14);

    // Test Case 16
    char* s15 = "abcdeffedcba";
    int expected15 = 6;
    leetcode_assert_int_equal(expected15, lengthOfLongestSubstring(s15), 15);

    // Test Case 17
    char* s16 = "aaaaaaaabbbbbbbccccccdddddeeeeeeffffffffggggggg";
    int expected16 = 2;
    leetcode_assert_int_equal(expected16, lengthOfLongestSubstring(s16), 16);

    // Test Case 18
    char* s17 = "tmmzuxt";
    int expected17 = 5;
    leetcode_assert_int_equal(expected17, lengthOfLongestSubstring(s17), 17);

    // Test Case 19
    char* s18 = "nfpdmpi";
    int expected18 = 5;
    leetcode_assert_int_equal(expected18, lengthOfLongestSubstring(s18), 18);

    // Test Case 20
    char* s19 = "anviaj";
    int expected19 = 5;
    leetcode_assert_int_equal(expected19, lengthOfLongestSubstring(s19), 19);

    // Test Case 21
    char* s20 = "abcdeabcde";
    int expected20 = 5;
    leetcode_assert_int_equal(expected20, lengthOfLongestSubstring(s20), 20);

    // Test Case 22
    char* s21 = "abcdabcabcd";
    int expected21 = 4;
    leetcode_assert_int_equal(expected21, lengthOfLongestSubstring(s21), 21);

    // Test Case 23
    char* s22 = "dvdf";
    int expected22 = 3;
    leetcode_assert_int_equal(expected22, lengthOfLongestSubstring(s22), 22);

    // Test Case 24
    char* s23 = "zyxwvutsrqponmlkjihgfedcba";
    int expected23 = 26;
    leetcode_assert_int_equal(expected23, lengthOfLongestSubstring(s23), 23);

    // Test Case 25
    char* s24 = "abcdabcdeabcdabcdeabcd";
    int expected24 = 5;
    leetcode_assert_int_equal(expected24, lengthOfLongestSubstring(s24), 24);

    // Test Case 26
    char* s25 = "rjqzupkoz";
    int expected25 = 8;
    leetcode_assert_int_equal(expected25, lengthOfLongestSubstring(s25), 25);

    // Test Case 27
    char* s26 = "ababababababababab";
    int expected26 = 2;
    leetcode_assert_int_equal(expected26, lengthOfLongestSubstring(s26), 26);

    // Test Case 28
    char* s27 = "!@#$%^&*()_+!@#$%^&*()_+";
    int expected27 = 12;
    leetcode_assert_int_equal(expected27, lengthOfLongestSubstring(s27), 27);

    // Test Case 29
    char* s28 = "cdddddddddddddd";
    int expected28 = 2;
    leetcode_assert_int_equal(expected28, lengthOfLongestSubstring(s28), 28);

    // Test Case 30
    char* s29 = "wobgrovw";
    int expected29 = 6;
    leetcode_assert_int_equal(expected29, lengthOfLongestSubstring(s29), 29);

    // Test Case 31
    char* s30 = "abba";
    int expected30 = 2;
    leetcode_assert_int_equal(expected30, lengthOfLongestSubstring(s30), 30);

    // Test Case 32
    char* s31 = "abcbacabc";
    int expected31 = 3;
    leetcode_assert_int_equal(expected31, lengthOfLongestSubstring(s31), 31);

    // Test Case 33
    char* s32 = "ohvhjdml";
    int expected32 = 6;
    leetcode_assert_int_equal(expected32, lengthOfLongestSubstring(s32), 32);

    // Test Case 34
    char* s33 = "123456789012345678901234567890";
    int expected33 = 10;
    leetcode_assert_int_equal(expected33, lengthOfLongestSubstring(s33), 33);

    // Test Case 35
    char* s34 = "aabbccddeeffgghhiijjkkllmmnnooppqqrrssttuuvvwwxxyyzz1234567890!@#$%^&*()_+";
    int expected34 = 23;
    leetcode_assert_int_equal(expected34, lengthOfLongestSubstring(s34), 34);

    // Test Case 36
    char* s35 = "12345678901234567890";
    int expected35 = 10;
    leetcode_assert_int_equal(expected35, lengthOfLongestSubstring(s35), 35);

    printf("All tests for Longest Substring Without Repeating Characters passed!\n");
    return 0;
}
