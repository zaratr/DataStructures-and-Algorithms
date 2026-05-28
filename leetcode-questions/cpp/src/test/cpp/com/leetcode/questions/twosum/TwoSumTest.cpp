#include <iostream>
#include <vector>
#include <string>
#include <cassert>
#include "../support/GeneratedLeetCodeTestHarness.hpp"
#include "c:/Users/zarat/IdeaProjects/DataStructures-and-Algorithms/leetcode-questions/cpp/src/main/cpp/com/leetcode/questions/leetcode/editor/en/TwoSum.cpp"

int main() {
    Solution solution;
    // Test Case 1
    vector<int> nums0 = vector<int>{2, 7, 11, 15};
    int target0 = 9;
    vector<int> expected0 = vector<int>{0, 1};

    // Test Case 2
    vector<int> nums1 = vector<int>{3, 2, 4};
    int target1 = 6;
    vector<int> expected1 = vector<int>{1, 2};

    // Test Case 3
    vector<int> nums2 = vector<int>{3, 3};
    int target2 = 6;
    vector<int> expected2 = vector<int>{0, 1};

    // Test Case 4
    vector<int> nums3 = vector<int>{1, 5, 7, 9};
    int target3 = 10;
    vector<int> expected3 = vector<int>{0, 3};

    // Test Case 5
    vector<int> nums4 = vector<int>{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int target4 = 3;
    vector<int> expected4 = vector<int>{0, 1};

    // Test Case 6
    vector<int> nums5 = vector<int>{0, 4, 3, 0};
    int target5 = 0;
    vector<int> expected5 = vector<int>{0, 3};

    // Test Case 7
    vector<int> nums6 = vector<int>{1000000000, -1000000000, 500000000, -500000000};
    int target6 = 0;
    vector<int> expected6 = vector<int>{0, 1};

    // Test Case 8
    vector<int> nums7 = vector<int>{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int target7 = 17;
    vector<int> expected7 = vector<int>{7, 8};

    // Test Case 9
    vector<int> nums8 = vector<int>{1, 5, 7, 8};
    int target8 = 15;
    vector<int> expected8 = vector<int>{2, 3};

    // Test Case 10
    vector<int> nums9 = vector<int>{1000000000, -1000000000};
    int target9 = 0;
    vector<int> expected9 = vector<int>{0, 1};

    // Test Case 11
    vector<int> nums10 = vector<int>{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int target10 = 19;
    vector<int> expected10 = vector<int>{8, 9};

    // Test Case 12
    vector<int> nums11 = vector<int>{1, 5, 7, 11};
    int target11 = 16;
    vector<int> expected11 = vector<int>{1, 3};

    // Test Case 13
    vector<int> nums12 = vector<int>{5, 5, 5, 5, 5, 5, 5, 5, 5, 5};
    int target12 = 10;
    vector<int> expected12 = vector<int>{0, 1};

    // Test Case 14
    vector<int> nums13 = vector<int>{15, 11, 7, 2};
    int target13 = 9;
    vector<int> expected13 = vector<int>{2, 3};

    // Test Case 15
    vector<int> nums14 = vector<int>{100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500, 1600, 1700, 1800, 1900, 2000, 2100, 2200, 2300, 2400, 2500, 2600, 2700, 2800, 2900, 3000};
    int target14 = 4000;
    vector<int> expected14 = vector<int>{18, 20};

    // Test Case 16
    vector<int> nums15 = vector<int>{1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35, 37, 39, 41, 43, 45, 47, 49, 51, 53, 55, 57, 59, 61, 63, 65, 67, 69, 71, 73, 75, 77, 79, 81, 83, 85, 87, 89, 91, 93, 95, 97, 99};
    int target15 = 100;
    vector<int> expected15 = vector<int>{24, 25};

    // Test Case 17
    vector<int> nums16 = vector<int>{1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100};
    int target16 = 199;
    vector<int> expected16 = vector<int>{98, 99};

    // Test Case 18
    vector<int> nums17 = vector<int>{-5, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5};
    int target17 = 0;
    vector<int> expected17 = vector<int>{4, 6};

    // Test Case 19
    vector<int> nums18 = vector<int>{-10, -20, -30, -40, -50, -60, -70, -80, -90, -100};
    int target18 = -150;
    vector<int> expected18 = vector<int>{6, 7};

    // Test Case 20
    vector<int> nums19 = vector<int>{-1, -2, -3, -4, -5, -6, -7, -8, -9, -10, -11, -12, -13, -14, -15, -16, -17, -18, -19, -20};
    int target19 = -39;
    vector<int> expected19 = vector<int>{18, 19};

    // Test Case 21
    vector<int> nums20 = vector<int>{1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35, 37, 39, 41, 43, 45, 47, 49, 51, 53, 55, 57, 59, 61, 63, 65, 67, 69, 71, 73, 75, 77, 79, 81, 83, 85, 87, 89, 91, 93, 95, 97, 99, 101, 103, 105, 107, 109, 111, 113, 115, 117, 119};
    int target20 = 110;
    vector<int> expected20 = vector<int>{26, 28};

    // Test Case 22
    vector<int> nums21 = vector<int>{100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int target21 = 1100;
    vector<int> expected21 = vector<int>{4, 5};

    // Test Case 23
    vector<int> nums22 = vector<int>{1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35, 37, 39};
    int target22 = 70;
    vector<int> expected22 = vector<int>{16, 18};

    // Test Case 24
    vector<int> nums23 = vector<int>{1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2};
    int target23 = 3;
    vector<int> expected23 = vector<int>{18, 19};

    // Test Case 25
    vector<int> nums24 = vector<int>{100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500, 1600, 1700, 1800, 1900, 2000, 2100, 2200, 2300, 2400, 2500};
    int target24 = 3000;
    vector<int> expected24 = vector<int>{13, 15};

    // Test Case 26
    vector<int> nums25 = vector<int>{1000, 2000, 3000, 4000, 5000, 6000, 7000, 8000, 9000, 10000, 11000, 12000, 13000, 14000, 15000, 16000, 17000, 18000, 19000, 20000};
    int target25 = 30000;
    vector<int> expected25 = vector<int>{13, 15};

    // Test Case 27
    vector<int> nums26 = vector<int>{1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int target26 = 39;
    vector<int> expected26 = vector<int>{18, 19};

    // Test Case 28
    vector<int> nums27 = vector<int>{0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99};
    int target27 = 99;
    vector<int> expected27 = vector<int>{49, 50};

    // Test Case 29
    vector<int> nums28 = vector<int>{10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 190, 200, 210, 220, 230, 240, 250, 260, 270, 280, 290, 300, 310, 320, 330, 340, 350, 360, 370, 380, 390, 400, 410, 420, 430, 440, 450, 460, 470, 480, 490, 500};
    int target28 = 900;
    vector<int> expected28 = vector<int>{43, 45};

    // Test Case 30
    vector<int> nums29 = vector<int>{10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 190, 200};
    int target29 = 390;
    vector<int> expected29 = vector<int>{18, 19};

    // Test Case 31
    vector<int> nums30 = vector<int>{100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};
    int target30 = 1500;
    vector<int> expected30 = vector<int>{6, 7};

    // Test Case 32
    vector<int> nums31 = vector<int>{1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int target31 = 21;
    vector<int> expected31 = vector<int>{9, 10};

    // Test Case 33
    vector<int> nums32 = vector<int>{2, 5, 1, 9, 3, 8, 7, 6, 4, 0};
    int target32 = 17;
    vector<int> expected32 = vector<int>{3, 5};

    // Test Case 34
    vector<int> nums33 = vector<int>{1000000000, -1000000000, 500000000, 500000000};
    int target33 = 0;
    vector<int> expected33 = vector<int>{0, 1};

    // Test Case 35
    vector<int> nums34 = vector<int>{1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    int target34 = 29;
    vector<int> expected34 = vector<int>{13, 14};

    // Test Case 36
    vector<int> nums35 = vector<int>{1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int target35 = 38;
    vector<int> expected35 = vector<int>{17, 19};

    // Test Case 37
    vector<int> nums36 = vector<int>{-1000000000, 1000000000, 500000000, -500000000};
    int target36 = 0;
    vector<int> expected36 = vector<int>{0, 1};

    // Test Case 38
    vector<int> nums37 = vector<int>{10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 190, 200};
    int target37 = 300;
    vector<int> expected37 = vector<int>{13, 15};

    // Test Case 39
    vector<int> nums38 = vector<int>{1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35, 37, 39, 41, 43, 45, 47, 49, 51, 53, 55, 57, 59};
    int target38 = 100;
    vector<int> expected38 = vector<int>{24, 25};

    // Test Case 40
    vector<int> nums39 = vector<int>{5, 12, 7, 3, 9, 14, 10, 23, 1, 11};
    int target39 = 22;
    vector<int> expected39 = vector<int>{1, 6};

    // Test Case 41
    vector<int> nums40 = vector<int>{-1, -2, -3, -4, -5, -6, -7, -8, -9, -10, -11, -12, -13, -14, -15, -16, -17, -18, -19, -20, -21, -22, -23, -24, -25, -26, -27, -28, -29, -30, -31, -32, -33, -34, -35, -36, -37, -38, -39, -40, -41, -42, -43, -44, -45, -46, -47, -48, -49, -50, -51, -52, -53, -54, -55, -56, -57, -58, -59, -60, -61, -62, -63, -64, -65, -66, -67, -68, -69, -70, -71, -72, -73, -74, -75, -76, -77, -78, -79, -80, -81, -82, -83, -84, -85, -86, -87, -88, -89, -90, -91, -92, -93, -94, -95, -96, -97, -98, -99, -100};
    int target40 = -199;
    vector<int> expected40 = vector<int>{98, 99};

    // Test Case 42
    vector<int> nums41 = vector<int>{0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1};
    int target41 = 1;
    vector<int> expected41 = vector<int>{0, 1};

    // Test Case 43
    vector<int> nums42 = vector<int>{1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2};
    int target42 = 3;
    vector<int> expected42 = vector<int>{23, 24};

    // Test Case 44
    vector<int> nums43 = vector<int>{10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 190, 200, 210, 220, 230, 240, 250, 260, 270, 280, 290, 300, 310, 320, 330, 340, 350, 360, 370, 380, 390, 400, 410, 420, 430, 440, 450, 460, 470, 480, 490, 500, 510, 520, 530, 540, 550, 560, 570, 580, 590, 600, 610, 620, 630, 640, 650, 660, 670, 680, 690, 700, 710, 720, 730, 740, 750, 760, 770, 780, 790, 800, 810, 820, 830, 840, 850, 860, 870, 880, 890, 900, 910, 920, 930, 940, 950, 960, 970, 980, 990, 1000};
    int target43 = 1990;
    vector<int> expected43 = vector<int>{98, 99};

    // Test Case 45
    vector<int> nums44 = vector<int>{0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30};
    int target44 = 59;
    vector<int> expected44 = vector<int>{29, 30};

    // Test Case 46
    vector<int> nums45 = vector<int>{0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int target45 = 0;
    vector<int> expected45 = vector<int>{0, 1};

    // Test Case 47
    vector<int> nums46 = vector<int>{-1, -2, -3, -4, -5, -6, -7, -8, -9, -10};
    int target46 = -11;
    vector<int> expected46 = vector<int>{4, 5};

    // Test Case 48
    vector<int> nums47 = vector<int>{-1, -2, -3, -4, -5, -6, -7, -8, -9, -10};
    int target47 = -15;
    vector<int> expected47 = vector<int>{6, 7};

    // Test Case 49
    vector<int> nums48 = vector<int>{1000000000, -1000000000, 500000000, 500000000, -500000000, -500000000, 1, 2, 3, 4};
    int target48 = 0;
    vector<int> expected48 = vector<int>{0, 1};

    // Test Case 50
    vector<int> nums49 = vector<int>{1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150};
    int target49 = 299;
    vector<int> expected49 = vector<int>{148, 149};

    // Test Case 51
    vector<int> nums50 = vector<int>{1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30};
    int target50 = 59;
    vector<int> expected50 = vector<int>{28, 29};

    // Test Case 52
    vector<int> nums51 = vector<int>{-1, -2, -3, -4, -5, -6, -7, -8, -9, -10, -11, -12, -13, -14, -15, -16, -17, -18, -19, -20};
    int target51 = -31;
    vector<int> expected51 = vector<int>{14, 15};

    // Test Case 53
    vector<int> nums52 = vector<int>{1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    int target52 = 99;
    vector<int> expected52 = vector<int>{48, 49};

    // Test Case 54
    vector<int> nums53 = vector<int>{1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25};
    int target53 = 49;
    vector<int> expected53 = vector<int>{23, 24};

    // Test Case 55
    vector<int> nums54 = vector<int>{1, 2, 4, 8, 16, 32, 64, 128, 256, 512};
    int target54 = 513;
    vector<int> expected54 = vector<int>{0, 9};

    // Test Case 56
    vector<int> nums55 = vector<int>{-1, -2, -3, -4, -5, -6, -7, -8, -9, -10};
    int target55 = -18;
    vector<int> expected55 = vector<int>{7, 9};

    // Test Case 57
    vector<int> nums56 = vector<int>{100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500};
    int target56 = 1300;
    vector<int> expected56 = vector<int>{5, 6};

    // Test Case 58
    vector<int> nums57 = vector<int>{-1, -2, -3, -4, -5, -6, -7, -8, -9, -10};
    int target57 = -17;
    vector<int> expected57 = vector<int>{7, 8};

    // Test Case 59
    vector<int> nums58 = vector<int>{100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};
    int target58 = 1900;
    vector<int> expected58 = vector<int>{8, 9};

    // Test Case 60
    vector<int> nums59 = vector<int>{-3, -1, 0, 2, 5, 7, 8, 10};
    int target59 = 4;
    vector<int> expected59 = vector<int>{1, 4};

    // Test Case 61
    vector<int> nums60 = vector<int>{29, 37, 10, 55, 44, 3, 67, 90, 11, 38, 2, 9, 100, 34, 65, 23, 89, 12, 33, 22};
    int target60 = 62;
    vector<int> expected60 = vector<int>{0, 18};
    // Auto-generated test cases:
    LeetCodeTestHarness::assertEqual(expected0, solution.twoSum(nums0, target0), 0);

    LeetCodeTestHarness::assertEqual(expected1, solution.twoSum(nums1, target1), 1);

    LeetCodeTestHarness::assertEqual(expected2, solution.twoSum(nums2, target2), 2);

    LeetCodeTestHarness::assertEqual(expected3, solution.twoSum(nums3, target3), 3);

    LeetCodeTestHarness::assertEqual(expected4, solution.twoSum(nums4, target4), 4);

    LeetCodeTestHarness::assertEqual(expected5, solution.twoSum(nums5, target5), 5);

    LeetCodeTestHarness::assertEqual(expected6, solution.twoSum(nums6, target6), 6);

    LeetCodeTestHarness::assertEqual(expected7, solution.twoSum(nums7, target7), 7);

    LeetCodeTestHarness::assertEqual(expected8, solution.twoSum(nums8, target8), 8);

    LeetCodeTestHarness::assertEqual(expected9, solution.twoSum(nums9, target9), 9);

    LeetCodeTestHarness::assertEqual(expected10, solution.twoSum(nums10, target10), 10);

    LeetCodeTestHarness::assertEqual(expected11, solution.twoSum(nums11, target11), 11);

    LeetCodeTestHarness::assertEqual(expected12, solution.twoSum(nums12, target12), 12);

    LeetCodeTestHarness::assertEqual(expected13, solution.twoSum(nums13, target13), 13);

    LeetCodeTestHarness::assertEqual(expected14, solution.twoSum(nums14, target14), 14);

    LeetCodeTestHarness::assertEqual(expected15, solution.twoSum(nums15, target15), 15);

    LeetCodeTestHarness::assertEqual(expected16, solution.twoSum(nums16, target16), 16);

    LeetCodeTestHarness::assertEqual(expected17, solution.twoSum(nums17, target17), 17);

    LeetCodeTestHarness::assertEqual(expected18, solution.twoSum(nums18, target18), 18);

    LeetCodeTestHarness::assertEqual(expected19, solution.twoSum(nums19, target19), 19);

    LeetCodeTestHarness::assertEqual(expected20, solution.twoSum(nums20, target20), 20);

    LeetCodeTestHarness::assertEqual(expected21, solution.twoSum(nums21, target21), 21);

    LeetCodeTestHarness::assertEqual(expected22, solution.twoSum(nums22, target22), 22);

    LeetCodeTestHarness::assertEqual(expected23, solution.twoSum(nums23, target23), 23);

    LeetCodeTestHarness::assertEqual(expected24, solution.twoSum(nums24, target24), 24);

    LeetCodeTestHarness::assertEqual(expected25, solution.twoSum(nums25, target25), 25);

    LeetCodeTestHarness::assertEqual(expected26, solution.twoSum(nums26, target26), 26);

    LeetCodeTestHarness::assertEqual(expected27, solution.twoSum(nums27, target27), 27);

    LeetCodeTestHarness::assertEqual(expected28, solution.twoSum(nums28, target28), 28);

    LeetCodeTestHarness::assertEqual(expected29, solution.twoSum(nums29, target29), 29);

    LeetCodeTestHarness::assertEqual(expected30, solution.twoSum(nums30, target30), 30);

    LeetCodeTestHarness::assertEqual(expected31, solution.twoSum(nums31, target31), 31);

    LeetCodeTestHarness::assertEqual(expected32, solution.twoSum(nums32, target32), 32);

    LeetCodeTestHarness::assertEqual(expected33, solution.twoSum(nums33, target33), 33);

    LeetCodeTestHarness::assertEqual(expected34, solution.twoSum(nums34, target34), 34);

    LeetCodeTestHarness::assertEqual(expected35, solution.twoSum(nums35, target35), 35);

    LeetCodeTestHarness::assertEqual(expected36, solution.twoSum(nums36, target36), 36);

    LeetCodeTestHarness::assertEqual(expected37, solution.twoSum(nums37, target37), 37);

    LeetCodeTestHarness::assertEqual(expected38, solution.twoSum(nums38, target38), 38);

    LeetCodeTestHarness::assertEqual(expected39, solution.twoSum(nums39, target39), 39);

    LeetCodeTestHarness::assertEqual(expected40, solution.twoSum(nums40, target40), 40);

    LeetCodeTestHarness::assertEqual(expected41, solution.twoSum(nums41, target41), 41);

    LeetCodeTestHarness::assertEqual(expected42, solution.twoSum(nums42, target42), 42);

    LeetCodeTestHarness::assertEqual(expected43, solution.twoSum(nums43, target43), 43);

    LeetCodeTestHarness::assertEqual(expected44, solution.twoSum(nums44, target44), 44);

    LeetCodeTestHarness::assertEqual(expected45, solution.twoSum(nums45, target45), 45);

    LeetCodeTestHarness::assertEqual(expected46, solution.twoSum(nums46, target46), 46);

    LeetCodeTestHarness::assertEqual(expected47, solution.twoSum(nums47, target47), 47);

    LeetCodeTestHarness::assertEqual(expected48, solution.twoSum(nums48, target48), 48);

    LeetCodeTestHarness::assertEqual(expected49, solution.twoSum(nums49, target49), 49);

    LeetCodeTestHarness::assertEqual(expected50, solution.twoSum(nums50, target50), 50);

    LeetCodeTestHarness::assertEqual(expected51, solution.twoSum(nums51, target51), 51);

    LeetCodeTestHarness::assertEqual(expected52, solution.twoSum(nums52, target52), 52);

    LeetCodeTestHarness::assertEqual(expected53, solution.twoSum(nums53, target53), 53);

    LeetCodeTestHarness::assertEqual(expected54, solution.twoSum(nums54, target54), 54);

    LeetCodeTestHarness::assertEqual(expected55, solution.twoSum(nums55, target55), 55);

    LeetCodeTestHarness::assertEqual(expected56, solution.twoSum(nums56, target56), 56);

    LeetCodeTestHarness::assertEqual(expected57, solution.twoSum(nums57, target57), 57);

    LeetCodeTestHarness::assertEqual(expected58, solution.twoSum(nums58, target58), 58);

    LeetCodeTestHarness::assertEqual(expected59, solution.twoSum(nums59, target59), 59);

    LeetCodeTestHarness::assertEqual(expected60, solution.twoSum(nums60, target60), 60);

    std::cout << "All tests for Two Sum passed!" << std::endl;
    return 0;
}
