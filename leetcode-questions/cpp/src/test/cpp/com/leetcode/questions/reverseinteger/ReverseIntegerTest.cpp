#include <iostream>
#include <vector>
#include <string>
#include <cassert>
#include "../support/GeneratedLeetCodeTestHarness.hpp"
#include "c:/Users/zarat/IdeaProjects/DataStructures-and-Algorithms/leetcode-questions/cpp/src/main/cpp/com/leetcode/questions/leetcode/editor/en/ReverseInteger.cpp"

int main() {
    Solution solution;
    // Test Case 1
    int x0 = 123;
    int expected0 = 321;

    // Test Case 2
    int x1 = -123;
    int expected1 = -321;

    // Test Case 3
    int x2 = 120;
    int expected2 = 21;

    // Test Case 4
    int x3 = -2147483412;
    int expected3 = -2143847412;

    // Test Case 5
    int x4 = 2147483647;
    int expected4 = 0;

    // Test Case 6
    int x5 = 1534236469;
    int expected5 = 0;

    // Test Case 7
    int x6 = 0;
    int expected6 = 0;

    // Test Case 8
    int x7 = -2147483648;
    int expected7 = 0;

    // Test Case 9
    int x8 = -1534236469;
    int expected8 = 0;

    // Test Case 10
    int x9 = -10;
    int expected9 = -1;

    // Test Case 11
    int x10 = -100000;
    int expected10 = -1;

    // Test Case 12
    int x11 = 10;
    int expected11 = 1;

    // Test Case 13
    int x12 = -999999999;
    int expected12 = -999999999;

    // Test Case 14
    int x13 = 1;
    int expected13 = 1;

    // Test Case 15
    int x14 = 2147483646;
    int expected14 = 0;

    // Test Case 16
    int x15 = -123000;
    int expected15 = -321;

    // Test Case 17
    int x16 = -900000;
    int expected16 = -9;

    // Test Case 18
    int x17 = -100100100;
    int expected17 = -1001001;

    // Test Case 19
    int x18 = -2147483647;
    int expected18 = 0;

    // Test Case 20
    int x19 = -1010101010;
    int expected19 = -101010101;

    // Test Case 21
    int x20 = 1000000001;
    int expected20 = 1000000001;

    // Test Case 22
    int x21 = -1;
    int expected21 = -1;

    // Test Case 23
    int x22 = 123000;
    int expected22 = 321;

    // Test Case 24
    int x23 = -2000000002;
    int expected23 = -2000000002;

    // Test Case 25
    int x24 = 101010101;
    int expected24 = 101010101;

    // Test Case 26
    int x25 = 1111111111;
    int expected25 = 1111111111;

    // Test Case 27
    int x26 = 2147447412;
    int expected26 = 2147447412;

    // Test Case 28
    int x27 = -101010101;
    int expected27 = -101010101;

    // Test Case 29
    int x28 = 900000;
    int expected28 = 9;

    // Test Case 30
    int x29 = 987654321;
    int expected29 = 123456789;

    // Test Case 31
    int x30 = 999999999;
    int expected30 = 999999999;

    // Test Case 32
    int x31 = -1000000000;
    int expected31 = -1;

    // Test Case 33
    int x32 = 1001001001;
    int expected32 = 1001001001;

    // Test Case 34
    int x33 = -987654321;
    int expected33 = -123456789;

    // Test Case 35
    int x34 = -1000000001;
    int expected34 = -1000000001;

    // Test Case 36
    int x35 = 876543210;
    int expected35 = 12345678;

    // Test Case 37
    int x36 = 2147483640;
    int expected36 = 463847412;

    // Test Case 38
    int x37 = 100100100;
    int expected37 = 1001001;

    // Test Case 39
    int x38 = 100000;
    int expected38 = 1;

    // Test Case 40
    int x39 = 2000000002;
    int expected39 = 2000000002;

    // Test Case 41
    int x40 = -123456789;
    int expected40 = -987654321;

    // Test Case 42
    int x41 = -1000000003;
    int expected41 = 0;

    // Test Case 43
    int x42 = -876543210;
    int expected42 = -12345678;

    // Test Case 44
    int x43 = -1111111111;
    int expected43 = -1111111111;

    // Test Case 45
    int x44 = -1001001001;
    int expected44 = -1001001001;

    // Test Case 46
    int x45 = 1010101010;
    int expected45 = 101010101;

    // Test Case 47
    int x46 = 123456789;
    int expected46 = 987654321;

    // Test Case 48
    int x47 = -2147483640;
    int expected47 = -463847412;

    // Test Case 49
    int x48 = 1000000000;
    int expected48 = 1;

    // Test Case 50
    int x49 = 1000000003;
    int expected49 = 0;

    // Test Case 51
    int x50 = -214748364;
    int expected50 = -463847412;
    // Auto-generated test cases:
    LeetCodeTestHarness::assertEqual(expected0, solution.reverse(x0), 0);

    LeetCodeTestHarness::assertEqual(expected1, solution.reverse(x1), 1);

    LeetCodeTestHarness::assertEqual(expected2, solution.reverse(x2), 2);

    LeetCodeTestHarness::assertEqual(expected3, solution.reverse(x3), 3);

    LeetCodeTestHarness::assertEqual(expected4, solution.reverse(x4), 4);

    LeetCodeTestHarness::assertEqual(expected5, solution.reverse(x5), 5);

    LeetCodeTestHarness::assertEqual(expected6, solution.reverse(x6), 6);

    LeetCodeTestHarness::assertEqual(expected7, solution.reverse(x7), 7);

    LeetCodeTestHarness::assertEqual(expected8, solution.reverse(x8), 8);

    LeetCodeTestHarness::assertEqual(expected9, solution.reverse(x9), 9);

    LeetCodeTestHarness::assertEqual(expected10, solution.reverse(x10), 10);

    LeetCodeTestHarness::assertEqual(expected11, solution.reverse(x11), 11);

    LeetCodeTestHarness::assertEqual(expected12, solution.reverse(x12), 12);

    LeetCodeTestHarness::assertEqual(expected13, solution.reverse(x13), 13);

    LeetCodeTestHarness::assertEqual(expected14, solution.reverse(x14), 14);

    LeetCodeTestHarness::assertEqual(expected15, solution.reverse(x15), 15);

    LeetCodeTestHarness::assertEqual(expected16, solution.reverse(x16), 16);

    LeetCodeTestHarness::assertEqual(expected17, solution.reverse(x17), 17);

    LeetCodeTestHarness::assertEqual(expected18, solution.reverse(x18), 18);

    LeetCodeTestHarness::assertEqual(expected19, solution.reverse(x19), 19);

    LeetCodeTestHarness::assertEqual(expected20, solution.reverse(x20), 20);

    LeetCodeTestHarness::assertEqual(expected21, solution.reverse(x21), 21);

    LeetCodeTestHarness::assertEqual(expected22, solution.reverse(x22), 22);

    LeetCodeTestHarness::assertEqual(expected23, solution.reverse(x23), 23);

    LeetCodeTestHarness::assertEqual(expected24, solution.reverse(x24), 24);

    LeetCodeTestHarness::assertEqual(expected25, solution.reverse(x25), 25);

    LeetCodeTestHarness::assertEqual(expected26, solution.reverse(x26), 26);

    LeetCodeTestHarness::assertEqual(expected27, solution.reverse(x27), 27);

    LeetCodeTestHarness::assertEqual(expected28, solution.reverse(x28), 28);

    LeetCodeTestHarness::assertEqual(expected29, solution.reverse(x29), 29);

    LeetCodeTestHarness::assertEqual(expected30, solution.reverse(x30), 30);

    LeetCodeTestHarness::assertEqual(expected31, solution.reverse(x31), 31);

    LeetCodeTestHarness::assertEqual(expected32, solution.reverse(x32), 32);

    LeetCodeTestHarness::assertEqual(expected33, solution.reverse(x33), 33);

    LeetCodeTestHarness::assertEqual(expected34, solution.reverse(x34), 34);

    LeetCodeTestHarness::assertEqual(expected35, solution.reverse(x35), 35);

    LeetCodeTestHarness::assertEqual(expected36, solution.reverse(x36), 36);

    LeetCodeTestHarness::assertEqual(expected37, solution.reverse(x37), 37);

    LeetCodeTestHarness::assertEqual(expected38, solution.reverse(x38), 38);

    LeetCodeTestHarness::assertEqual(expected39, solution.reverse(x39), 39);

    LeetCodeTestHarness::assertEqual(expected40, solution.reverse(x40), 40);

    LeetCodeTestHarness::assertEqual(expected41, solution.reverse(x41), 41);

    LeetCodeTestHarness::assertEqual(expected42, solution.reverse(x42), 42);

    LeetCodeTestHarness::assertEqual(expected43, solution.reverse(x43), 43);

    LeetCodeTestHarness::assertEqual(expected44, solution.reverse(x44), 44);

    LeetCodeTestHarness::assertEqual(expected45, solution.reverse(x45), 45);

    LeetCodeTestHarness::assertEqual(expected46, solution.reverse(x46), 46);

    LeetCodeTestHarness::assertEqual(expected47, solution.reverse(x47), 47);

    LeetCodeTestHarness::assertEqual(expected48, solution.reverse(x48), 48);

    LeetCodeTestHarness::assertEqual(expected49, solution.reverse(x49), 49);

    LeetCodeTestHarness::assertEqual(expected50, solution.reverse(x50), 50);

    std::cout << "All tests for Reverse Integer passed!" << std::endl;
    return 0;
}
