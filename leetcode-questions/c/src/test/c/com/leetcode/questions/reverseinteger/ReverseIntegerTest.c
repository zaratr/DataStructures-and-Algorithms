#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <assert.h>
#include "../support/generated_leetcode_test_harness.h"
#include "c:/Users/zarat/IdeaProjects/DataStructures-and-Algorithms/leetcode-questions/c/src/main/c/com/leetcode/questions/leetcode/editor/en/ReverseInteger.c"

int main() {
    // Auto-generated test cases:
    // Test Case 1
    int x0 = 123;
    int expected0 = 321;
    leetcode_assert_int_equal(expected0, reverse(x0), 0);

    // Test Case 2
    int x1 = -123;
    int expected1 = -321;
    leetcode_assert_int_equal(expected1, reverse(x1), 1);

    // Test Case 3
    int x2 = 120;
    int expected2 = 21;
    leetcode_assert_int_equal(expected2, reverse(x2), 2);

    // Test Case 4
    int x3 = -2147483412;
    int expected3 = -2143847412;
    leetcode_assert_int_equal(expected3, reverse(x3), 3);

    // Test Case 5
    int x4 = 2147483647;
    int expected4 = 0;
    leetcode_assert_int_equal(expected4, reverse(x4), 4);

    // Test Case 6
    int x5 = 1534236469;
    int expected5 = 0;
    leetcode_assert_int_equal(expected5, reverse(x5), 5);

    // Test Case 7
    int x6 = 0;
    int expected6 = 0;
    leetcode_assert_int_equal(expected6, reverse(x6), 6);

    // Test Case 8
    int x7 = -2147483648;
    int expected7 = 0;
    leetcode_assert_int_equal(expected7, reverse(x7), 7);

    // Test Case 9
    int x8 = -1534236469;
    int expected8 = 0;
    leetcode_assert_int_equal(expected8, reverse(x8), 8);

    // Test Case 10
    int x9 = -10;
    int expected9 = -1;
    leetcode_assert_int_equal(expected9, reverse(x9), 9);

    // Test Case 11
    int x10 = -100000;
    int expected10 = -1;
    leetcode_assert_int_equal(expected10, reverse(x10), 10);

    // Test Case 12
    int x11 = 10;
    int expected11 = 1;
    leetcode_assert_int_equal(expected11, reverse(x11), 11);

    // Test Case 13
    int x12 = -999999999;
    int expected12 = -999999999;
    leetcode_assert_int_equal(expected12, reverse(x12), 12);

    // Test Case 14
    int x13 = 1;
    int expected13 = 1;
    leetcode_assert_int_equal(expected13, reverse(x13), 13);

    // Test Case 15
    int x14 = 2147483646;
    int expected14 = 0;
    leetcode_assert_int_equal(expected14, reverse(x14), 14);

    // Test Case 16
    int x15 = -123000;
    int expected15 = -321;
    leetcode_assert_int_equal(expected15, reverse(x15), 15);

    // Test Case 17
    int x16 = -900000;
    int expected16 = -9;
    leetcode_assert_int_equal(expected16, reverse(x16), 16);

    // Test Case 18
    int x17 = -100100100;
    int expected17 = -1001001;
    leetcode_assert_int_equal(expected17, reverse(x17), 17);

    // Test Case 19
    int x18 = -2147483647;
    int expected18 = 0;
    leetcode_assert_int_equal(expected18, reverse(x18), 18);

    // Test Case 20
    int x19 = -1010101010;
    int expected19 = -101010101;
    leetcode_assert_int_equal(expected19, reverse(x19), 19);

    // Test Case 21
    int x20 = 1000000001;
    int expected20 = 1000000001;
    leetcode_assert_int_equal(expected20, reverse(x20), 20);

    // Test Case 22
    int x21 = -1;
    int expected21 = -1;
    leetcode_assert_int_equal(expected21, reverse(x21), 21);

    // Test Case 23
    int x22 = 123000;
    int expected22 = 321;
    leetcode_assert_int_equal(expected22, reverse(x22), 22);

    // Test Case 24
    int x23 = -2000000002;
    int expected23 = -2000000002;
    leetcode_assert_int_equal(expected23, reverse(x23), 23);

    // Test Case 25
    int x24 = 101010101;
    int expected24 = 101010101;
    leetcode_assert_int_equal(expected24, reverse(x24), 24);

    // Test Case 26
    int x25 = 1111111111;
    int expected25 = 1111111111;
    leetcode_assert_int_equal(expected25, reverse(x25), 25);

    // Test Case 27
    int x26 = 2147447412;
    int expected26 = 2147447412;
    leetcode_assert_int_equal(expected26, reverse(x26), 26);

    // Test Case 28
    int x27 = -101010101;
    int expected27 = -101010101;
    leetcode_assert_int_equal(expected27, reverse(x27), 27);

    // Test Case 29
    int x28 = 900000;
    int expected28 = 9;
    leetcode_assert_int_equal(expected28, reverse(x28), 28);

    // Test Case 30
    int x29 = 987654321;
    int expected29 = 123456789;
    leetcode_assert_int_equal(expected29, reverse(x29), 29);

    // Test Case 31
    int x30 = 999999999;
    int expected30 = 999999999;
    leetcode_assert_int_equal(expected30, reverse(x30), 30);

    // Test Case 32
    int x31 = -1000000000;
    int expected31 = -1;
    leetcode_assert_int_equal(expected31, reverse(x31), 31);

    // Test Case 33
    int x32 = 1001001001;
    int expected32 = 1001001001;
    leetcode_assert_int_equal(expected32, reverse(x32), 32);

    // Test Case 34
    int x33 = -987654321;
    int expected33 = -123456789;
    leetcode_assert_int_equal(expected33, reverse(x33), 33);

    // Test Case 35
    int x34 = -1000000001;
    int expected34 = -1000000001;
    leetcode_assert_int_equal(expected34, reverse(x34), 34);

    // Test Case 36
    int x35 = 876543210;
    int expected35 = 12345678;
    leetcode_assert_int_equal(expected35, reverse(x35), 35);

    // Test Case 37
    int x36 = 2147483640;
    int expected36 = 463847412;
    leetcode_assert_int_equal(expected36, reverse(x36), 36);

    // Test Case 38
    int x37 = 100100100;
    int expected37 = 1001001;
    leetcode_assert_int_equal(expected37, reverse(x37), 37);

    // Test Case 39
    int x38 = 100000;
    int expected38 = 1;
    leetcode_assert_int_equal(expected38, reverse(x38), 38);

    // Test Case 40
    int x39 = 2000000002;
    int expected39 = 2000000002;
    leetcode_assert_int_equal(expected39, reverse(x39), 39);

    // Test Case 41
    int x40 = -123456789;
    int expected40 = -987654321;
    leetcode_assert_int_equal(expected40, reverse(x40), 40);

    // Test Case 42
    int x41 = -1000000003;
    int expected41 = 0;
    leetcode_assert_int_equal(expected41, reverse(x41), 41);

    // Test Case 43
    int x42 = -876543210;
    int expected42 = -12345678;
    leetcode_assert_int_equal(expected42, reverse(x42), 42);

    // Test Case 44
    int x43 = -1111111111;
    int expected43 = -1111111111;
    leetcode_assert_int_equal(expected43, reverse(x43), 43);

    // Test Case 45
    int x44 = -1001001001;
    int expected44 = -1001001001;
    leetcode_assert_int_equal(expected44, reverse(x44), 44);

    // Test Case 46
    int x45 = 1010101010;
    int expected45 = 101010101;
    leetcode_assert_int_equal(expected45, reverse(x45), 45);

    // Test Case 47
    int x46 = 123456789;
    int expected46 = 987654321;
    leetcode_assert_int_equal(expected46, reverse(x46), 46);

    // Test Case 48
    int x47 = -2147483640;
    int expected47 = -463847412;
    leetcode_assert_int_equal(expected47, reverse(x47), 47);

    // Test Case 49
    int x48 = 1000000000;
    int expected48 = 1;
    leetcode_assert_int_equal(expected48, reverse(x48), 48);

    // Test Case 50
    int x49 = 1000000003;
    int expected49 = 0;
    leetcode_assert_int_equal(expected49, reverse(x49), 49);

    // Test Case 51
    int x50 = -214748364;
    int expected50 = -463847412;
    leetcode_assert_int_equal(expected50, reverse(x50), 50);

    printf("All tests for Reverse Integer passed!\n");
    return 0;
}
