#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <assert.h>
#include "../support/generated_leetcode_test_harness.h"
#include "c:/Users/zarat/IdeaProjects/DataStructures-and-Algorithms/leetcode-questions/c/src/main/c/com/leetcode/questions/leetcode/editor/en/TwoSum.c"

int main() {
    // Auto-generated test cases:
    // Test Case 1
    int nums0[] = {2, 7, 11, 15};
    int nums0Size = 4;
    int target0 = 9;
    int expected0[] = {0, 1};
    int expected0Size = 2;
    int returnSize0 = 0;
    int* actual0 = twoSum(nums0, nums0Size, target0, &returnSize0);
    assert(actual0 != NULL);
    leetcode_assert_int_array_equal(expected0, expected0Size, actual0, returnSize0, 0);

    // Test Case 2
    int nums1[] = {3, 2, 4};
    int nums1Size = 3;
    int target1 = 6;
    int expected1[] = {1, 2};
    int expected1Size = 2;
    int returnSize1 = 0;
    int* actual1 = twoSum(nums1, nums1Size, target1, &returnSize1);
    assert(actual1 != NULL);
    leetcode_assert_int_array_equal(expected1, expected1Size, actual1, returnSize1, 1);

    // Test Case 3
    int nums2[] = {3, 3};
    int nums2Size = 2;
    int target2 = 6;
    int expected2[] = {0, 1};
    int expected2Size = 2;
    int returnSize2 = 0;
    int* actual2 = twoSum(nums2, nums2Size, target2, &returnSize2);
    assert(actual2 != NULL);
    leetcode_assert_int_array_equal(expected2, expected2Size, actual2, returnSize2, 2);

    // Test Case 4
    int nums3[] = {1, 5, 7, 9};
    int nums3Size = 4;
    int target3 = 10;
    int expected3[] = {0, 3};
    int expected3Size = 2;
    int returnSize3 = 0;
    int* actual3 = twoSum(nums3, nums3Size, target3, &returnSize3);
    assert(actual3 != NULL);
    leetcode_assert_int_array_equal(expected3, expected3Size, actual3, returnSize3, 3);

    // Test Case 5
    int nums4[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int nums4Size = 10;
    int target4 = 3;
    int expected4[] = {0, 1};
    int expected4Size = 2;
    int returnSize4 = 0;
    int* actual4 = twoSum(nums4, nums4Size, target4, &returnSize4);
    assert(actual4 != NULL);
    leetcode_assert_int_array_equal(expected4, expected4Size, actual4, returnSize4, 4);

    // Test Case 6
    int nums5[] = {0, 4, 3, 0};
    int nums5Size = 4;
    int target5 = 0;
    int expected5[] = {0, 3};
    int expected5Size = 2;
    int returnSize5 = 0;
    int* actual5 = twoSum(nums5, nums5Size, target5, &returnSize5);
    assert(actual5 != NULL);
    leetcode_assert_int_array_equal(expected5, expected5Size, actual5, returnSize5, 5);

    // Test Case 7
    int nums6[] = {1000000000, -1000000000, 500000000, -500000000};
    int nums6Size = 4;
    int target6 = 0;
    int expected6[] = {0, 1};
    int expected6Size = 2;
    int returnSize6 = 0;
    int* actual6 = twoSum(nums6, nums6Size, target6, &returnSize6);
    assert(actual6 != NULL);
    leetcode_assert_int_array_equal(expected6, expected6Size, actual6, returnSize6, 6);

    // Test Case 8
    int nums7[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int nums7Size = 10;
    int target7 = 17;
    int expected7[] = {7, 8};
    int expected7Size = 2;
    int returnSize7 = 0;
    int* actual7 = twoSum(nums7, nums7Size, target7, &returnSize7);
    assert(actual7 != NULL);
    leetcode_assert_int_array_equal(expected7, expected7Size, actual7, returnSize7, 7);

    // Test Case 9
    int nums8[] = {1, 5, 7, 8};
    int nums8Size = 4;
    int target8 = 15;
    int expected8[] = {2, 3};
    int expected8Size = 2;
    int returnSize8 = 0;
    int* actual8 = twoSum(nums8, nums8Size, target8, &returnSize8);
    assert(actual8 != NULL);
    leetcode_assert_int_array_equal(expected8, expected8Size, actual8, returnSize8, 8);

    // Test Case 10
    int nums9[] = {1000000000, -1000000000};
    int nums9Size = 2;
    int target9 = 0;
    int expected9[] = {0, 1};
    int expected9Size = 2;
    int returnSize9 = 0;
    int* actual9 = twoSum(nums9, nums9Size, target9, &returnSize9);
    assert(actual9 != NULL);
    leetcode_assert_int_array_equal(expected9, expected9Size, actual9, returnSize9, 9);

    // Test Case 11
    int nums10[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int nums10Size = 10;
    int target10 = 19;
    int expected10[] = {8, 9};
    int expected10Size = 2;
    int returnSize10 = 0;
    int* actual10 = twoSum(nums10, nums10Size, target10, &returnSize10);
    assert(actual10 != NULL);
    leetcode_assert_int_array_equal(expected10, expected10Size, actual10, returnSize10, 10);

    // Test Case 12
    int nums11[] = {1, 5, 7, 11};
    int nums11Size = 4;
    int target11 = 16;
    int expected11[] = {1, 3};
    int expected11Size = 2;
    int returnSize11 = 0;
    int* actual11 = twoSum(nums11, nums11Size, target11, &returnSize11);
    assert(actual11 != NULL);
    leetcode_assert_int_array_equal(expected11, expected11Size, actual11, returnSize11, 11);

    // Test Case 13
    int nums12[] = {5, 5, 5, 5, 5, 5, 5, 5, 5, 5};
    int nums12Size = 10;
    int target12 = 10;
    int expected12[] = {0, 1};
    int expected12Size = 2;
    int returnSize12 = 0;
    int* actual12 = twoSum(nums12, nums12Size, target12, &returnSize12);
    assert(actual12 != NULL);
    leetcode_assert_int_array_equal(expected12, expected12Size, actual12, returnSize12, 12);

    // Test Case 14
    int nums13[] = {15, 11, 7, 2};
    int nums13Size = 4;
    int target13 = 9;
    int expected13[] = {2, 3};
    int expected13Size = 2;
    int returnSize13 = 0;
    int* actual13 = twoSum(nums13, nums13Size, target13, &returnSize13);
    assert(actual13 != NULL);
    leetcode_assert_int_array_equal(expected13, expected13Size, actual13, returnSize13, 13);

    // Test Case 15
    int nums14[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500, 1600, 1700, 1800, 1900, 2000, 2100, 2200, 2300, 2400, 2500, 2600, 2700, 2800, 2900, 3000};
    int nums14Size = 30;
    int target14 = 4000;
    int expected14[] = {18, 20};
    int expected14Size = 2;
    int returnSize14 = 0;
    int* actual14 = twoSum(nums14, nums14Size, target14, &returnSize14);
    assert(actual14 != NULL);
    leetcode_assert_int_array_equal(expected14, expected14Size, actual14, returnSize14, 14);

    // Test Case 16
    int nums15[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35, 37, 39, 41, 43, 45, 47, 49, 51, 53, 55, 57, 59, 61, 63, 65, 67, 69, 71, 73, 75, 77, 79, 81, 83, 85, 87, 89, 91, 93, 95, 97, 99};
    int nums15Size = 50;
    int target15 = 100;
    int expected15[] = {24, 25};
    int expected15Size = 2;
    int returnSize15 = 0;
    int* actual15 = twoSum(nums15, nums15Size, target15, &returnSize15);
    assert(actual15 != NULL);
    leetcode_assert_int_array_equal(expected15, expected15Size, actual15, returnSize15, 15);

    // Test Case 17
    int nums16[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100};
    int nums16Size = 100;
    int target16 = 199;
    int expected16[] = {98, 99};
    int expected16Size = 2;
    int returnSize16 = 0;
    int* actual16 = twoSum(nums16, nums16Size, target16, &returnSize16);
    assert(actual16 != NULL);
    leetcode_assert_int_array_equal(expected16, expected16Size, actual16, returnSize16, 16);

    // Test Case 18
    int nums17[] = {-5, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5};
    int nums17Size = 11;
    int target17 = 0;
    int expected17[] = {4, 6};
    int expected17Size = 2;
    int returnSize17 = 0;
    int* actual17 = twoSum(nums17, nums17Size, target17, &returnSize17);
    assert(actual17 != NULL);
    leetcode_assert_int_array_equal(expected17, expected17Size, actual17, returnSize17, 17);

    // Test Case 19
    int nums18[] = {-10, -20, -30, -40, -50, -60, -70, -80, -90, -100};
    int nums18Size = 10;
    int target18 = -150;
    int expected18[] = {6, 7};
    int expected18Size = 2;
    int returnSize18 = 0;
    int* actual18 = twoSum(nums18, nums18Size, target18, &returnSize18);
    assert(actual18 != NULL);
    leetcode_assert_int_array_equal(expected18, expected18Size, actual18, returnSize18, 18);

    // Test Case 20
    int nums19[] = {-1, -2, -3, -4, -5, -6, -7, -8, -9, -10, -11, -12, -13, -14, -15, -16, -17, -18, -19, -20};
    int nums19Size = 20;
    int target19 = -39;
    int expected19[] = {18, 19};
    int expected19Size = 2;
    int returnSize19 = 0;
    int* actual19 = twoSum(nums19, nums19Size, target19, &returnSize19);
    assert(actual19 != NULL);
    leetcode_assert_int_array_equal(expected19, expected19Size, actual19, returnSize19, 19);

    // Test Case 21
    int nums20[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35, 37, 39, 41, 43, 45, 47, 49, 51, 53, 55, 57, 59, 61, 63, 65, 67, 69, 71, 73, 75, 77, 79, 81, 83, 85, 87, 89, 91, 93, 95, 97, 99, 101, 103, 105, 107, 109, 111, 113, 115, 117, 119};
    int nums20Size = 60;
    int target20 = 110;
    int expected20[] = {26, 28};
    int expected20Size = 2;
    int returnSize20 = 0;
    int* actual20 = twoSum(nums20, nums20Size, target20, &returnSize20);
    assert(actual20 != NULL);
    leetcode_assert_int_array_equal(expected20, expected20Size, actual20, returnSize20, 20);

    // Test Case 22
    int nums21[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int nums21Size = 20;
    int target21 = 1100;
    int expected21[] = {4, 5};
    int expected21Size = 2;
    int returnSize21 = 0;
    int* actual21 = twoSum(nums21, nums21Size, target21, &returnSize21);
    assert(actual21 != NULL);
    leetcode_assert_int_array_equal(expected21, expected21Size, actual21, returnSize21, 21);

    // Test Case 23
    int nums22[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35, 37, 39};
    int nums22Size = 20;
    int target22 = 70;
    int expected22[] = {16, 18};
    int expected22Size = 2;
    int returnSize22 = 0;
    int* actual22 = twoSum(nums22, nums22Size, target22, &returnSize22);
    assert(actual22 != NULL);
    leetcode_assert_int_array_equal(expected22, expected22Size, actual22, returnSize22, 22);

    // Test Case 24
    int nums23[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2};
    int nums23Size = 20;
    int target23 = 3;
    int expected23[] = {18, 19};
    int expected23Size = 2;
    int returnSize23 = 0;
    int* actual23 = twoSum(nums23, nums23Size, target23, &returnSize23);
    assert(actual23 != NULL);
    leetcode_assert_int_array_equal(expected23, expected23Size, actual23, returnSize23, 23);

    // Test Case 25
    int nums24[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500, 1600, 1700, 1800, 1900, 2000, 2100, 2200, 2300, 2400, 2500};
    int nums24Size = 25;
    int target24 = 3000;
    int expected24[] = {13, 15};
    int expected24Size = 2;
    int returnSize24 = 0;
    int* actual24 = twoSum(nums24, nums24Size, target24, &returnSize24);
    assert(actual24 != NULL);
    leetcode_assert_int_array_equal(expected24, expected24Size, actual24, returnSize24, 24);

    // Test Case 26
    int nums25[] = {1000, 2000, 3000, 4000, 5000, 6000, 7000, 8000, 9000, 10000, 11000, 12000, 13000, 14000, 15000, 16000, 17000, 18000, 19000, 20000};
    int nums25Size = 20;
    int target25 = 30000;
    int expected25[] = {13, 15};
    int expected25Size = 2;
    int returnSize25 = 0;
    int* actual25 = twoSum(nums25, nums25Size, target25, &returnSize25);
    assert(actual25 != NULL);
    leetcode_assert_int_array_equal(expected25, expected25Size, actual25, returnSize25, 25);

    // Test Case 27
    int nums26[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int nums26Size = 20;
    int target26 = 39;
    int expected26[] = {18, 19};
    int expected26Size = 2;
    int returnSize26 = 0;
    int* actual26 = twoSum(nums26, nums26Size, target26, &returnSize26);
    assert(actual26 != NULL);
    leetcode_assert_int_array_equal(expected26, expected26Size, actual26, returnSize26, 26);

    // Test Case 28
    int nums27[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99};
    int nums27Size = 100;
    int target27 = 99;
    int expected27[] = {49, 50};
    int expected27Size = 2;
    int returnSize27 = 0;
    int* actual27 = twoSum(nums27, nums27Size, target27, &returnSize27);
    assert(actual27 != NULL);
    leetcode_assert_int_array_equal(expected27, expected27Size, actual27, returnSize27, 27);

    // Test Case 29
    int nums28[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 190, 200, 210, 220, 230, 240, 250, 260, 270, 280, 290, 300, 310, 320, 330, 340, 350, 360, 370, 380, 390, 400, 410, 420, 430, 440, 450, 460, 470, 480, 490, 500};
    int nums28Size = 50;
    int target28 = 900;
    int expected28[] = {43, 45};
    int expected28Size = 2;
    int returnSize28 = 0;
    int* actual28 = twoSum(nums28, nums28Size, target28, &returnSize28);
    assert(actual28 != NULL);
    leetcode_assert_int_array_equal(expected28, expected28Size, actual28, returnSize28, 28);

    // Test Case 30
    int nums29[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 190, 200};
    int nums29Size = 20;
    int target29 = 390;
    int expected29[] = {18, 19};
    int expected29Size = 2;
    int returnSize29 = 0;
    int* actual29 = twoSum(nums29, nums29Size, target29, &returnSize29);
    assert(actual29 != NULL);
    leetcode_assert_int_array_equal(expected29, expected29Size, actual29, returnSize29, 29);

    // Test Case 31
    int nums30[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};
    int nums30Size = 10;
    int target30 = 1500;
    int expected30[] = {6, 7};
    int expected30Size = 2;
    int returnSize30 = 0;
    int* actual30 = twoSum(nums30, nums30Size, target30, &returnSize30);
    assert(actual30 != NULL);
    leetcode_assert_int_array_equal(expected30, expected30Size, actual30, returnSize30, 30);

    // Test Case 32
    int nums31[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int nums31Size = 20;
    int target31 = 21;
    int expected31[] = {9, 10};
    int expected31Size = 2;
    int returnSize31 = 0;
    int* actual31 = twoSum(nums31, nums31Size, target31, &returnSize31);
    assert(actual31 != NULL);
    leetcode_assert_int_array_equal(expected31, expected31Size, actual31, returnSize31, 31);

    // Test Case 33
    int nums32[] = {2, 5, 1, 9, 3, 8, 7, 6, 4, 0};
    int nums32Size = 10;
    int target32 = 17;
    int expected32[] = {3, 5};
    int expected32Size = 2;
    int returnSize32 = 0;
    int* actual32 = twoSum(nums32, nums32Size, target32, &returnSize32);
    assert(actual32 != NULL);
    leetcode_assert_int_array_equal(expected32, expected32Size, actual32, returnSize32, 32);

    // Test Case 34
    int nums33[] = {1000000000, -1000000000, 500000000, 500000000};
    int nums33Size = 4;
    int target33 = 0;
    int expected33[] = {0, 1};
    int expected33Size = 2;
    int returnSize33 = 0;
    int* actual33 = twoSum(nums33, nums33Size, target33, &returnSize33);
    assert(actual33 != NULL);
    leetcode_assert_int_array_equal(expected33, expected33Size, actual33, returnSize33, 33);

    // Test Case 35
    int nums34[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    int nums34Size = 15;
    int target34 = 29;
    int expected34[] = {13, 14};
    int expected34Size = 2;
    int returnSize34 = 0;
    int* actual34 = twoSum(nums34, nums34Size, target34, &returnSize34);
    assert(actual34 != NULL);
    leetcode_assert_int_array_equal(expected34, expected34Size, actual34, returnSize34, 34);

    // Test Case 36
    int nums35[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int nums35Size = 20;
    int target35 = 38;
    int expected35[] = {17, 19};
    int expected35Size = 2;
    int returnSize35 = 0;
    int* actual35 = twoSum(nums35, nums35Size, target35, &returnSize35);
    assert(actual35 != NULL);
    leetcode_assert_int_array_equal(expected35, expected35Size, actual35, returnSize35, 35);

    // Test Case 37
    int nums36[] = {-1000000000, 1000000000, 500000000, -500000000};
    int nums36Size = 4;
    int target36 = 0;
    int expected36[] = {0, 1};
    int expected36Size = 2;
    int returnSize36 = 0;
    int* actual36 = twoSum(nums36, nums36Size, target36, &returnSize36);
    assert(actual36 != NULL);
    leetcode_assert_int_array_equal(expected36, expected36Size, actual36, returnSize36, 36);

    // Test Case 38
    int nums37[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 190, 200};
    int nums37Size = 20;
    int target37 = 300;
    int expected37[] = {13, 15};
    int expected37Size = 2;
    int returnSize37 = 0;
    int* actual37 = twoSum(nums37, nums37Size, target37, &returnSize37);
    assert(actual37 != NULL);
    leetcode_assert_int_array_equal(expected37, expected37Size, actual37, returnSize37, 37);

    // Test Case 39
    int nums38[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35, 37, 39, 41, 43, 45, 47, 49, 51, 53, 55, 57, 59};
    int nums38Size = 30;
    int target38 = 100;
    int expected38[] = {24, 25};
    int expected38Size = 2;
    int returnSize38 = 0;
    int* actual38 = twoSum(nums38, nums38Size, target38, &returnSize38);
    assert(actual38 != NULL);
    leetcode_assert_int_array_equal(expected38, expected38Size, actual38, returnSize38, 38);

    // Test Case 40
    int nums39[] = {5, 12, 7, 3, 9, 14, 10, 23, 1, 11};
    int nums39Size = 10;
    int target39 = 22;
    int expected39[] = {1, 6};
    int expected39Size = 2;
    int returnSize39 = 0;
    int* actual39 = twoSum(nums39, nums39Size, target39, &returnSize39);
    assert(actual39 != NULL);
    leetcode_assert_int_array_equal(expected39, expected39Size, actual39, returnSize39, 39);

    // Test Case 41
    int nums40[] = {-1, -2, -3, -4, -5, -6, -7, -8, -9, -10, -11, -12, -13, -14, -15, -16, -17, -18, -19, -20, -21, -22, -23, -24, -25, -26, -27, -28, -29, -30, -31, -32, -33, -34, -35, -36, -37, -38, -39, -40, -41, -42, -43, -44, -45, -46, -47, -48, -49, -50, -51, -52, -53, -54, -55, -56, -57, -58, -59, -60, -61, -62, -63, -64, -65, -66, -67, -68, -69, -70, -71, -72, -73, -74, -75, -76, -77, -78, -79, -80, -81, -82, -83, -84, -85, -86, -87, -88, -89, -90, -91, -92, -93, -94, -95, -96, -97, -98, -99, -100};
    int nums40Size = 100;
    int target40 = -199;
    int expected40[] = {98, 99};
    int expected40Size = 2;
    int returnSize40 = 0;
    int* actual40 = twoSum(nums40, nums40Size, target40, &returnSize40);
    assert(actual40 != NULL);
    leetcode_assert_int_array_equal(expected40, expected40Size, actual40, returnSize40, 40);

    // Test Case 42
    int nums41[] = {0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1};
    int nums41Size = 30;
    int target41 = 1;
    int expected41[] = {0, 1};
    int expected41Size = 2;
    int returnSize41 = 0;
    int* actual41 = twoSum(nums41, nums41Size, target41, &returnSize41);
    assert(actual41 != NULL);
    leetcode_assert_int_array_equal(expected41, expected41Size, actual41, returnSize41, 41);

    // Test Case 43
    int nums42[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2};
    int nums42Size = 25;
    int target42 = 3;
    int expected42[] = {23, 24};
    int expected42Size = 2;
    int returnSize42 = 0;
    int* actual42 = twoSum(nums42, nums42Size, target42, &returnSize42);
    assert(actual42 != NULL);
    leetcode_assert_int_array_equal(expected42, expected42Size, actual42, returnSize42, 42);

    // Test Case 44
    int nums43[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 190, 200, 210, 220, 230, 240, 250, 260, 270, 280, 290, 300, 310, 320, 330, 340, 350, 360, 370, 380, 390, 400, 410, 420, 430, 440, 450, 460, 470, 480, 490, 500, 510, 520, 530, 540, 550, 560, 570, 580, 590, 600, 610, 620, 630, 640, 650, 660, 670, 680, 690, 700, 710, 720, 730, 740, 750, 760, 770, 780, 790, 800, 810, 820, 830, 840, 850, 860, 870, 880, 890, 900, 910, 920, 930, 940, 950, 960, 970, 980, 990, 1000};
    int nums43Size = 100;
    int target43 = 1990;
    int expected43[] = {98, 99};
    int expected43Size = 2;
    int returnSize43 = 0;
    int* actual43 = twoSum(nums43, nums43Size, target43, &returnSize43);
    assert(actual43 != NULL);
    leetcode_assert_int_array_equal(expected43, expected43Size, actual43, returnSize43, 43);

    // Test Case 45
    int nums44[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30};
    int nums44Size = 31;
    int target44 = 59;
    int expected44[] = {29, 30};
    int expected44Size = 2;
    int returnSize44 = 0;
    int* actual44 = twoSum(nums44, nums44Size, target44, &returnSize44);
    assert(actual44 != NULL);
    leetcode_assert_int_array_equal(expected44, expected44Size, actual44, returnSize44, 44);

    // Test Case 46
    int nums45[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int nums45Size = 10;
    int target45 = 0;
    int expected45[] = {0, 1};
    int expected45Size = 2;
    int returnSize45 = 0;
    int* actual45 = twoSum(nums45, nums45Size, target45, &returnSize45);
    assert(actual45 != NULL);
    leetcode_assert_int_array_equal(expected45, expected45Size, actual45, returnSize45, 45);

    // Test Case 47
    int nums46[] = {-1, -2, -3, -4, -5, -6, -7, -8, -9, -10};
    int nums46Size = 10;
    int target46 = -11;
    int expected46[] = {4, 5};
    int expected46Size = 2;
    int returnSize46 = 0;
    int* actual46 = twoSum(nums46, nums46Size, target46, &returnSize46);
    assert(actual46 != NULL);
    leetcode_assert_int_array_equal(expected46, expected46Size, actual46, returnSize46, 46);

    // Test Case 48
    int nums47[] = {-1, -2, -3, -4, -5, -6, -7, -8, -9, -10};
    int nums47Size = 10;
    int target47 = -15;
    int expected47[] = {6, 7};
    int expected47Size = 2;
    int returnSize47 = 0;
    int* actual47 = twoSum(nums47, nums47Size, target47, &returnSize47);
    assert(actual47 != NULL);
    leetcode_assert_int_array_equal(expected47, expected47Size, actual47, returnSize47, 47);

    // Test Case 49
    int nums48[] = {1000000000, -1000000000, 500000000, 500000000, -500000000, -500000000, 1, 2, 3, 4};
    int nums48Size = 10;
    int target48 = 0;
    int expected48[] = {0, 1};
    int expected48Size = 2;
    int returnSize48 = 0;
    int* actual48 = twoSum(nums48, nums48Size, target48, &returnSize48);
    assert(actual48 != NULL);
    leetcode_assert_int_array_equal(expected48, expected48Size, actual48, returnSize48, 48);

    // Test Case 50
    int nums49[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150};
    int nums49Size = 150;
    int target49 = 299;
    int expected49[] = {148, 149};
    int expected49Size = 2;
    int returnSize49 = 0;
    int* actual49 = twoSum(nums49, nums49Size, target49, &returnSize49);
    assert(actual49 != NULL);
    leetcode_assert_int_array_equal(expected49, expected49Size, actual49, returnSize49, 49);

    // Test Case 51
    int nums50[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30};
    int nums50Size = 30;
    int target50 = 59;
    int expected50[] = {28, 29};
    int expected50Size = 2;
    int returnSize50 = 0;
    int* actual50 = twoSum(nums50, nums50Size, target50, &returnSize50);
    assert(actual50 != NULL);
    leetcode_assert_int_array_equal(expected50, expected50Size, actual50, returnSize50, 50);

    // Test Case 52
    int nums51[] = {-1, -2, -3, -4, -5, -6, -7, -8, -9, -10, -11, -12, -13, -14, -15, -16, -17, -18, -19, -20};
    int nums51Size = 20;
    int target51 = -31;
    int expected51[] = {14, 15};
    int expected51Size = 2;
    int returnSize51 = 0;
    int* actual51 = twoSum(nums51, nums51Size, target51, &returnSize51);
    assert(actual51 != NULL);
    leetcode_assert_int_array_equal(expected51, expected51Size, actual51, returnSize51, 51);

    // Test Case 53
    int nums52[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    int nums52Size = 50;
    int target52 = 99;
    int expected52[] = {48, 49};
    int expected52Size = 2;
    int returnSize52 = 0;
    int* actual52 = twoSum(nums52, nums52Size, target52, &returnSize52);
    assert(actual52 != NULL);
    leetcode_assert_int_array_equal(expected52, expected52Size, actual52, returnSize52, 52);

    // Test Case 54
    int nums53[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25};
    int nums53Size = 25;
    int target53 = 49;
    int expected53[] = {23, 24};
    int expected53Size = 2;
    int returnSize53 = 0;
    int* actual53 = twoSum(nums53, nums53Size, target53, &returnSize53);
    assert(actual53 != NULL);
    leetcode_assert_int_array_equal(expected53, expected53Size, actual53, returnSize53, 53);

    // Test Case 55
    int nums54[] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};
    int nums54Size = 10;
    int target54 = 513;
    int expected54[] = {0, 9};
    int expected54Size = 2;
    int returnSize54 = 0;
    int* actual54 = twoSum(nums54, nums54Size, target54, &returnSize54);
    assert(actual54 != NULL);
    leetcode_assert_int_array_equal(expected54, expected54Size, actual54, returnSize54, 54);

    // Test Case 56
    int nums55[] = {-1, -2, -3, -4, -5, -6, -7, -8, -9, -10};
    int nums55Size = 10;
    int target55 = -18;
    int expected55[] = {7, 9};
    int expected55Size = 2;
    int returnSize55 = 0;
    int* actual55 = twoSum(nums55, nums55Size, target55, &returnSize55);
    assert(actual55 != NULL);
    leetcode_assert_int_array_equal(expected55, expected55Size, actual55, returnSize55, 55);

    // Test Case 57
    int nums56[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500};
    int nums56Size = 15;
    int target56 = 1300;
    int expected56[] = {5, 6};
    int expected56Size = 2;
    int returnSize56 = 0;
    int* actual56 = twoSum(nums56, nums56Size, target56, &returnSize56);
    assert(actual56 != NULL);
    leetcode_assert_int_array_equal(expected56, expected56Size, actual56, returnSize56, 56);

    // Test Case 58
    int nums57[] = {-1, -2, -3, -4, -5, -6, -7, -8, -9, -10};
    int nums57Size = 10;
    int target57 = -17;
    int expected57[] = {7, 8};
    int expected57Size = 2;
    int returnSize57 = 0;
    int* actual57 = twoSum(nums57, nums57Size, target57, &returnSize57);
    assert(actual57 != NULL);
    leetcode_assert_int_array_equal(expected57, expected57Size, actual57, returnSize57, 57);

    // Test Case 59
    int nums58[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};
    int nums58Size = 10;
    int target58 = 1900;
    int expected58[] = {8, 9};
    int expected58Size = 2;
    int returnSize58 = 0;
    int* actual58 = twoSum(nums58, nums58Size, target58, &returnSize58);
    assert(actual58 != NULL);
    leetcode_assert_int_array_equal(expected58, expected58Size, actual58, returnSize58, 58);

    // Test Case 60
    int nums59[] = {-3, -1, 0, 2, 5, 7, 8, 10};
    int nums59Size = 8;
    int target59 = 4;
    int expected59[] = {1, 4};
    int expected59Size = 2;
    int returnSize59 = 0;
    int* actual59 = twoSum(nums59, nums59Size, target59, &returnSize59);
    assert(actual59 != NULL);
    leetcode_assert_int_array_equal(expected59, expected59Size, actual59, returnSize59, 59);

    // Test Case 61
    int nums60[] = {29, 37, 10, 55, 44, 3, 67, 90, 11, 38, 2, 9, 100, 34, 65, 23, 89, 12, 33, 22};
    int nums60Size = 20;
    int target60 = 62;
    int expected60[] = {0, 18};
    int expected60Size = 2;
    int returnSize60 = 0;
    int* actual60 = twoSum(nums60, nums60Size, target60, &returnSize60);
    assert(actual60 != NULL);
    leetcode_assert_int_array_equal(expected60, expected60Size, actual60, returnSize60, 60);

    printf("All tests for Two Sum passed!\n");
    return 0;
}
