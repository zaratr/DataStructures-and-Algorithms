#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <assert.h>
#include "../support/generated_leetcode_test_harness.h"
#include "c:/Users/zarat/IdeaProjects/DataStructures-and-Algorithms/leetcode-questions/c/src/main/c/com/leetcode/questions/leetcode/editor/en/_3sum.c"

int main() {
    // Auto-generated test cases:
    // Test Case 1
    int nums0[] = {-1, 0, 1, 2, -1, -4};
    int nums0Size = 6;
    // Expected output: [[-1, -1, 2], [-1, 0, 1]]
    // Unsupported C return type for direct assertion: list<list<integer>>

    // Test Case 2
    int nums1[] = {0, 1, 1};
    int nums1Size = 3;
    // Expected output: []
    // Unsupported C return type for direct assertion: list<list<integer>>

    // Test Case 3
    int nums2[] = {0, 0, 0};
    int nums2Size = 3;
    // Expected output: [[0, 0, 0]]
    // Unsupported C return type for direct assertion: list<list<integer>>

    // Test Case 4
    int nums3[] = {-2, 0, 0, 2, 2};
    int nums3Size = 5;
    // Expected output: [[-2, 0, 2]]
    // Unsupported C return type for direct assertion: list<list<integer>>

    // Test Case 5
    int nums4[] = {-2, 0, 1, 1, 2};
    int nums4Size = 5;
    // Expected output: [[-2, 0, 2], [-2, 1, 1]]
    // Unsupported C return type for direct assertion: list<list<integer>>

    // Test Case 6
    int nums5[] = {1, 2, -2, -1};
    int nums5Size = 4;
    // Expected output: []
    // Unsupported C return type for direct assertion: list<list<integer>>

    // Test Case 7
    int nums6[] = {-1, 0, 0, 0, 1, 1, 2};
    int nums6Size = 7;
    // Expected output: [[-1, 0, 1], [0, 0, 0]]
    // Unsupported C return type for direct assertion: list<list<integer>>

    // Test Case 8
    int nums7[] = {1, -1, -1, 0};
    int nums7Size = 4;
    // Expected output: [[-1, 0, 1]]
    // Unsupported C return type for direct assertion: list<list<integer>>

    // Test Case 9
    int nums8[] = {3, -2, 1, 0, -1, -2, 1, -2, 1, -2};
    int nums8Size = 10;
    // Expected output: [[-2, -1, 3], [-2, 1, 1], [-1, 0, 1]]
    // Unsupported C return type for direct assertion: list<list<integer>>

    // Test Case 10
    int nums9[] = {-1, 0, 1, 0};
    int nums9Size = 4;
    // Expected output: [[-1, 0, 1]]
    // Unsupported C return type for direct assertion: list<list<integer>>

    // Test Case 11
    int nums10[] = {-4, -2, -2, -2, 0, 1, 2, 2, 2, 3, 3, 4, 4, 6, 6};
    int nums10Size = 15;
    // Expected output: [[-4, -2, 6], [-4, 0, 4], [-4, 1, 3], [-4, 2, 2], [-2, -2, 4], [-2, 0, 2]]
    // Unsupported C return type for direct assertion: list<list<integer>>

    // Test Case 12
    int nums11[] = {-1, 1, 0};
    int nums11Size = 3;
    // Expected output: [[-1, 0, 1]]
    // Unsupported C return type for direct assertion: list<list<integer>>

    // Test Case 13
    int nums12[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int nums12Size = 32;
    // Expected output: [[0, 0, 0]]
    // Unsupported C return type for direct assertion: list<list<integer>>

    // Test Case 14
    int nums13[] = {-1, 0, 1, -1, 0, 1, -1, 0, 1};
    int nums13Size = 9;
    // Expected output: [[-1, 0, 1], [0, 0, 0]]
    // Unsupported C return type for direct assertion: list<list<integer>>

    // Test Case 15
    int nums14[] = {-3, -3, -3, -3, 1, 2, 2, 3, 3, 3};
    int nums14Size = 10;
    // Expected output: [[-3, 1, 2]]
    // Unsupported C return type for direct assertion: list<list<integer>>

    // Test Case 16
    int nums15[] = {-1, -1, -1, -1, 0, 0, 0, 0, 1, 1, 1, 1};
    int nums15Size = 12;
    // Expected output: [[-1, 0, 1], [0, 0, 0]]
    // Unsupported C return type for direct assertion: list<list<integer>>

    // Test Case 17
    int nums16[] = {-3, -2, -1, 0, 0, 0, 1, 2, 3};
    int nums16Size = 9;
    // Expected output: [[-3, 0, 3], [-3, 1, 2], [-2, -1, 3], [-2, 0, 2], [-1, 0, 1], [0, 0, 0]]
    // Unsupported C return type for direct assertion: list<list<integer>>

    // Test Case 18
    int nums17[] = {-5, -3, -2, 0, 1, 2, 3, 5, 7};
    int nums17Size = 9;
    // Expected output: [[-5, -2, 7], [-5, 0, 5], [-5, 2, 3], [-3, -2, 5], [-3, 0, 3], [-3, 1, 2], [-2, 0, 2]]
    // Unsupported C return type for direct assertion: list<list<integer>>

    // Test Case 19
    int nums18[] = {-1, -1, 0, 0, 0, 1, 1, 1, 2, 2};
    int nums18Size = 10;
    // Expected output: [[-1, -1, 2], [-1, 0, 1], [0, 0, 0]]
    // Unsupported C return type for direct assertion: list<list<integer>>

    // Test Case 20
    int nums19[] = {-4, -3, -2, -1, 0, 1, 2, 3, 4};
    int nums19Size = 9;
    // Expected output: [[-4, 0, 4], [-4, 1, 3], [-3, -1, 4], [-3, 0, 3], [-3, 1, 2], [-2, -1, 3], [-2, 0, 2], [-1, 0, 1]]
    // Unsupported C return type for direct assertion: list<list<integer>>

    // Test Case 21
    int nums20[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int nums20Size = 16;
    // Expected output: [[0, 0, 0]]
    // Unsupported C return type for direct assertion: list<list<integer>>

    // Test Case 22
    int nums21[] = {-1, -1, 0, 0, 1, 1, 2, -2, 3};
    int nums21Size = 9;
    // Expected output: [[-2, -1, 3], [-2, 0, 2], [-2, 1, 1], [-1, -1, 2], [-1, 0, 1]]
    // Unsupported C return type for direct assertion: list<list<integer>>

    // Test Case 23
    int nums22[] = {-1, -1, 0, 1, 1, 1, 2, 2, 3, 3, 4, 4};
    int nums22Size = 12;
    // Expected output: [[-1, -1, 2], [-1, 0, 1]]
    // Unsupported C return type for direct assertion: list<list<integer>>

    // Test Case 24
    int nums23[] = {-1, -1, 0, 1, 1, 2, 2, 3};
    int nums23Size = 8;
    // Expected output: [[-1, -1, 2], [-1, 0, 1]]
    // Unsupported C return type for direct assertion: list<list<integer>>

    // Test Case 25
    int nums24[] = {-5, 2, 3, 0, -4, -6, 5, -7, 9, -3, -8, -1, 1, -7, -3, 1, -8, 5, -5, -7, 6, -3, 0, 6, -4, -8, -9, 7, 7, -4, -9, 1, -2, 6, 5, -3, -9, -1, 5, 4, -1, -2, -5, -2, -8, 8, 6, -7, -1, -2, 3, -3, 9, -4, 2, -3, 3, 2, 6, -9, -5, -3, 5, -8, 1, 8, -2, 5, -3, -8, 1, 8, -7, -4, 5, 5, -1, 6, 2, 2, -6, -1, -3, 2, -5, -7, -9, -7, 6, 2, 2, 1, 6, 5, -5, 0, -5, 8, -5, -7, 6, -2, -9, -1, -2, 7, 1, -7, 5, -3, -9, 2, -7, -8, -3, -7, -9, 0, 4, -1, 3, 8, -2, -7, 9, -9, -6, -7, 4, 3, 3, -9, -9, -9, 9, 0, 5, -2, -9, -9, -6, -1, 0, 1, 9, -8, -3, -2, -1, 6, 0, 8, 8, -7, -6, -2, -1, -2, -8, -4, 8, -6, -9, 7, -6, -4, 0, 7, 8, -9, 9, -9, -8, -3, -5, -7, -3, 9, 1, 6, -9, -2, -4, -4, -3, -1, 5, -4, -9, -9, 8, -2, -8, 1, 0, 3, 6, -1, 6, -8, -7, -2, -8, 1, 9, -3, -5, -1, -7, 8, -5, -6, -1, 8, 0, -2, -1, 1, 8, -4, 1, -4, 4, -3, -1, -4, 5, 9, 4, -9, -8, 2, -2, -7, -7, -8, -7, -3, 7, -5, -8, 2, -6, -1, -2, -4, -4, -6, -8, 5, -4, 7, 8, -4, 5, 0, -7, -8, -4, -6, -1, -3, 1, 3, -2, -1, -9, 0, 1, 2, -8, 5, 8, 7, -3, -1, -7, -9, -2, -4, -1, -5, -2, -5, -5, -9, -8, -6, 6, -2, -9, -7, -5, -9, 2, -3, 7, 0, -9, 7, -4, 3, -3, -4, -8, 1, -4, -6, -4, 3, 5, 0, 4, -5, -8, -5, -3, -7, -1, 0, -3, -8, 2, -4, -3, 6, -7, -6, -3, -1, -5, -8, -4, -3, -7, -9, -6, -6, 3, -9, -5, 7, -1, -5, -7, 4, 8, -5, -5, 2, -9, -3, -8, -3, 4, -6, 2, -8, -8, -1, -8, -8, -9, 7, -9, 1, -3, -4, -1, -3, -1, -8, 9, -6, -1, 3, 3, -9, -9, 7, -5, -1, -7, -4, -8, 2, 0, 5, -8, 8, -3, -6, -2, -8, -3, -3, -1, -7, 4, -4, 6, 3, -6, -1, -2, -8, -3, 2, -8, -2, 8, -4, -7, -8, -9, -6, -8, -9, 7, 1, -4, 1, -8, 2, -2, 4, -1, 9, -3, -5, -1, -6, -2, -8, 2, -2, -8, -4, -3, -7, -3, 0, -9, -2, -1, -7, -1, -9, -1, 7, -6, -5, -4, -8, -4, -2, -7, 5, -6, -5, -5, -5, -5, -3, 4, -9, -3, -2, -8, -1, -9, -4, -2, 5, -3, 1, -4, -1, 1, -3, -1, -3, 1, -3, -5, 7, -3, -7, -9, 9, -2, -9, 7, -7, -1, -4, -2, -5, -3, 8, -6, -2, 2, -7, -8, 6, 9, -9, -7, -3, -9, -8, -2, -7, -6, -9, -9, -1, -9, -9, -7, -1, -8, -7, -8, -6, -4, -2, -3, -2, -2, -6, -9, -8, -5, -3, -1, -1, -3, 3, -5, -1, -2, -5, -9, 0, -7, -1, -4, -3, -9, -7, -3, -7, -8, -7, -6, 0, 1, -2, 0, -4, -5, -5, -3, -9, 5, -1, -2, 8, -8, -1, -9, -7, -8, -9, -9, 0, -1, -3, -4, -3, -2, -4, -6, -2, 6, -4, -4, -3, 8, -9, -5, -9, -4, -9, -8, -7, -3, -1, -6, -9, 0, -7, -8, 2, -5, -4, -5, -3, -6, -7, -4, -7, 3, -3, -4, -2, -3, 8, -9, -5, -2, -6, -3, -8, -1, -3, -7, -1, -8, -5, -5, -1, -3, -7, -3, -5, -5, 2, -4, -9, -3, -6, -3, -8, -6, -9, -3, -1, -8, -8, -8, -8, -7, -7, -7, -7, -7, -6, -6, -6, -6, -5, -5, -5, -5, -4, -4, -4, -4, -3, -3, -3, -3, -2, -2, -2, -2, -1, -1, -1, -1, 0, 0, 0, 0};
    int nums24Size = 687;
    // Expected output: [[-9, 0, 9], [-9, 1, 8], [-9, 2, 7], [-9, 3, 6], [-9, 4, 5], [-8, -1, 9], [-8, 0, 8], [-8, 1, 7], [-8, 2, 6], [-8, 3, 5], [-8, 4, 4], [-7, -2, 9], [-7, -1, 8], [-7, 0, 7], [-7, 1, 6], [-7, 2, 5], [-7, 3, 4], [-6, -3, 9], [-6, -2, 8], [-6, -1, 7], [-6, 0, 6], [-6, 1, 5], [-6, 2, 4], [-6, 3, 3], [-5, -4, 9], [-5, -3, 8], [-5, -2, 7], [-5, -1, 6], [-5, 0, 5], [-5, 1, 4], [-5, 2, 3], [-4, -4, 8], [-4, -3, 7], [-4, -2, 6], [-4, -1, 5], [-4, 0, 4], [-4, 1, 3], [-4, 2, 2], [-3, -3, 6], [-3, -2, 5], [-3, -1, 4], [-3, 0, 3], [-3, 1, 2], [-2, -2, 4], [-2, -1, 3], [-2, 0, 2], [-2, 1, 1], [-1, -1, 2], [-1, 0, 1], [0, 0, 0]]
    // Unsupported C return type for direct assertion: list<list<integer>>

    // Test Case 26
    int nums25[] = {-10, -10, -10, -1, 0, 0, 1, 10, 10, 10};
    int nums25Size = 10;
    // Expected output: [[-10, 0, 10], [-1, 0, 1]]
    // Unsupported C return type for direct assertion: list<list<integer>>

    // Test Case 27
    int nums26[] = {-1, 0, 1, 2, -1, -4, 3, 4, 5, -5};
    int nums26Size = 10;
    // Expected output: [[-5, 0, 5], [-5, 1, 4], [-5, 2, 3], [-4, -1, 5], [-4, 0, 4], [-4, 1, 3], [-1, -1, 2], [-1, 0, 1]]
    // Unsupported C return type for direct assertion: list<list<integer>>

    // Test Case 28
    int nums27[] = {-3, -2, -1, 0, 1, 2, 3, 4, 5};
    int nums27Size = 9;
    // Expected output: [[-3, -2, 5], [-3, -1, 4], [-3, 0, 3], [-3, 1, 2], [-2, -1, 3], [-2, 0, 2], [-1, 0, 1]]
    // Unsupported C return type for direct assertion: list<list<integer>>

    // Test Case 29
    int nums28[] = {1, 2, -2, -1, -1, -3, 3, 3, 2, -2};
    int nums28Size = 10;
    // Expected output: [[-3, 1, 2], [-2, -1, 3], [-1, -1, 2]]
    // Unsupported C return type for direct assertion: list<list<integer>>

    // Test Case 30
    int nums29[] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int nums29Size = 8;
    // Expected output: [[-1, 0, 1]]
    // Unsupported C return type for direct assertion: list<list<integer>>

    // Test Case 31
    int nums30[] = {-5, 2, 5, -1, 1, 0, -2, 2, -3, 3};
    int nums30Size = 10;
    // Expected output: [[-5, 0, 5], [-5, 2, 3], [-3, -2, 5], [-3, 0, 3], [-3, 1, 2], [-2, -1, 3], [-2, 0, 2], [-1, 0, 1]]
    // Unsupported C return type for direct assertion: list<list<integer>>

    // Test Case 32
    int nums31[] = {-3, -2, -1, 0, 1, 2, 3};
    int nums31Size = 7;
    // Expected output: [[-3, 0, 3], [-3, 1, 2], [-2, -1, 3], [-2, 0, 2], [-1, 0, 1]]
    // Unsupported C return type for direct assertion: list<list<integer>>

    // Test Case 33
    int nums32[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int nums32Size = 10;
    // Expected output: [[0, 0, 0]]
    // Unsupported C return type for direct assertion: list<list<integer>>

    // Test Case 34
    int nums33[] = {-5, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5};
    int nums33Size = 11;
    // Expected output: [[-5, 0, 5], [-5, 1, 4], [-5, 2, 3], [-4, -1, 5], [-4, 0, 4], [-4, 1, 3], [-3, -2, 5], [-3, -1, 4], [-3, 0, 3], [-3, 1, 2], [-2, -1, 3], [-2, 0, 2], [-1, 0, 1]]
    // Unsupported C return type for direct assertion: list<list<integer>>

    // Test Case 35
    int nums34[] = {-1, 0, 1, 2, -1, -4, -3, 3, 0, 1, 2, -1, -4};
    int nums34Size = 13;
    // Expected output: [[-4, 1, 3], [-4, 2, 2], [-3, 0, 3], [-3, 1, 2], [-1, -1, 2], [-1, 0, 1]]
    // Unsupported C return type for direct assertion: list<list<integer>>

    // Test Case 36
    int nums35[] = {-1, 1, 2, -2, 3, -3, 4, -4};
    int nums35Size = 8;
    // Expected output: [[-4, 1, 3], [-3, -1, 4], [-3, 1, 2], [-2, -1, 3]]
    // Unsupported C return type for direct assertion: list<list<integer>>

    // Test Case 37
    int nums36[] = {-10, -5, -3, -2, -1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int nums36Size = 16;
    // Expected output: [[-10, 0, 10], [-10, 1, 9], [-10, 2, 8], [-10, 3, 7], [-10, 4, 6], [-5, -3, 8], [-5, -2, 7], [-5, -1, 6], [-5, 0, 5], [-5, 1, 4], [-5, 2, 3], [-3, -2, 5], [-3, -1, 4], [-3, 0, 3], [-3, 1, 2], [-2, -1, 3], [-2, 0, 2], [-1, 0, 1]]
    // Unsupported C return type for direct assertion: list<list<integer>>

    // Test Case 38
    int nums37[] = {1, 2, -2, -1, 0, 0, 0};
    int nums37Size = 7;
    // Expected output: [[-2, 0, 2], [-1, 0, 1], [0, 0, 0]]
    // Unsupported C return type for direct assertion: list<list<integer>>

    // Test Case 39
    int nums38[] = {-4, -2, -2, -2, 0, 1, 2, 2, 2, 3, 3, 4, 4};
    int nums38Size = 13;
    // Expected output: [[-4, 0, 4], [-4, 1, 3], [-4, 2, 2], [-2, -2, 4], [-2, 0, 2]]
    // Unsupported C return type for direct assertion: list<list<integer>>

    // Test Case 40
    int nums39[] = {1, -1, -1, 1, 0, 0, 0};
    int nums39Size = 7;
    // Expected output: [[-1, 0, 1], [0, 0, 0]]
    // Unsupported C return type for direct assertion: list<list<integer>>

    // Test Case 41
    int nums40[] = {-1, -2, -3, 4, 1, 3, 0};
    int nums40Size = 7;
    // Expected output: [[-3, -1, 4], [-3, 0, 3], [-2, -1, 3], [-1, 0, 1]]
    // Unsupported C return type for direct assertion: list<list<integer>>

    // Test Case 42
    int nums41[] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
    int nums41Size = 9;
    // Expected output: [[0, 0, 0]]
    // Unsupported C return type for direct assertion: list<list<integer>>

    // Test Case 43
    int nums42[] = {1, 2, -2, -1, -1, -1, 0, 0, 0, 0};
    int nums42Size = 10;
    // Expected output: [[-2, 0, 2], [-1, -1, 2], [-1, 0, 1], [0, 0, 0]]
    // Unsupported C return type for direct assertion: list<list<integer>>

    // Test Case 44
    int nums43[] = {-10, -9, -8, -7, 7, 8, 9, 10};
    int nums43Size = 8;
    // Expected output: []
    // Unsupported C return type for direct assertion: list<list<integer>>

    // Test Case 45
    int nums44[] = {-10, 0, 10, 5, -5, 3, -3, 2, -2, 1, -1};
    int nums44Size = 11;
    // Expected output: [[-10, 0, 10], [-5, 0, 5], [-5, 2, 3], [-3, -2, 5], [-3, 0, 3], [-3, 1, 2], [-2, -1, 3], [-2, 0, 2], [-1, 0, 1]]
    // Unsupported C return type for direct assertion: list<list<integer>>

    // Test Case 46
    int nums45[] = {3, 0, -2, -1, 1, -2, 1, 0, -2, 1, 2};
    int nums45Size = 11;
    // Expected output: [[-2, -1, 3], [-2, 0, 2], [-2, 1, 1], [-1, 0, 1]]
    // Unsupported C return type for direct assertion: list<list<integer>>

    // Test Case 47
    int nums46[] = {-10, -5, 0, 5, 10, 15, 20};
    int nums46Size = 7;
    // Expected output: [[-10, -5, 15], [-10, 0, 10], [-5, 0, 5]]
    // Unsupported C return type for direct assertion: list<list<integer>>

    // Test Case 48
    int nums47[] = {1, 1, 1, 1, 1, 1, -1, -1, -1, -1, -1, -1, 0, 0, 0};
    int nums47Size = 15;
    // Expected output: [[-1, 0, 1], [0, 0, 0]]
    // Unsupported C return type for direct assertion: list<list<integer>>

    // Test Case 49
    int nums48[] = {-10, 0, 10, 20, -20, 30, -30, 40, -40, 50, -50, 60, -60, 70, -70, 80, -80, 90, -90};
    int nums48Size = 19;
    // Expected output: [[-90, 0, 90], [-90, 10, 80], [-90, 20, 70], [-90, 30, 60], [-90, 40, 50], [-80, -10, 90], [-80, 0, 80], [-80, 10, 70], [-80, 20, 60], [-80, 30, 50], [-70, -20, 90], [-70, -10, 80], [-70, 0, 70], [-70, 10, 60], [-70, 20, 50], [-70, 30, 40], [-60, -30, 90], [-60, -20, 80], [-60, -10, 70], [-60, 0, 60], [-60, 10, 50], [-60, 20, 40], [-50, -40, 90], [-50, -30, 80], [-50, -20, 70], [-50, -10, 60], [-50, 0, 50], [-50, 10, 40], [-50, 20, 30], [-40, -30, 70], [-40, -20, 60], [-40, -10, 50], [-40, 0, 40], [-40, 10, 30], [-30, -20, 50], [-30, -10, 40], [-30, 0, 30], [-30, 10, 20], [-20, -10, 30], [-20, 0, 20], [-10, 0, 10]]
    // Unsupported C return type for direct assertion: list<list<integer>>

    // Test Case 50
    int nums49[] = {-1, 0, 1, 0, -1, 1, -1, 0, 1};
    int nums49Size = 9;
    // Expected output: [[-1, 0, 1], [0, 0, 0]]
    // Unsupported C return type for direct assertion: list<list<integer>>

    // Test Case 51
    int nums50[] = {-4, -2, -1, 0, 1, 2, 3, 5};
    int nums50Size = 8;
    // Expected output: [[-4, -1, 5], [-4, 1, 3], [-2, -1, 3], [-2, 0, 2], [-1, 0, 1]]
    // Unsupported C return type for direct assertion: list<list<integer>>

    // Test Case 52
    int nums51[] = {-1, -1, -1, 0, 0, 1, 1, 2, 3};
    int nums51Size = 9;
    // Expected output: [[-1, -1, 2], [-1, 0, 1]]
    // Unsupported C return type for direct assertion: list<list<integer>>

    // Test Case 53
    int nums52[] = {-3, -3, -3, 1, 2, 3, 4, 4, 4};
    int nums52Size = 9;
    // Expected output: [[-3, 1, 2]]
    // Unsupported C return type for direct assertion: list<list<integer>>

    // Test Case 54
    int nums53[] = {-2, -3, 4, 3, 2, 1, 0, -1, -2, -3, 3, 2, 1};
    int nums53Size = 13;
    // Expected output: [[-3, -1, 4], [-3, 0, 3], [-3, 1, 2], [-2, -2, 4], [-2, -1, 3], [-2, 0, 2], [-2, 1, 1], [-1, 0, 1]]
    // Unsupported C return type for direct assertion: list<list<integer>>

    // Test Case 55
    int nums54[] = {-4, -2, -2, -2, 0, 1, 2, 2, 2, 3, 3, 4};
    int nums54Size = 12;
    // Expected output: [[-4, 0, 4], [-4, 1, 3], [-4, 2, 2], [-2, -2, 4], [-2, 0, 2]]
    // Unsupported C return type for direct assertion: list<list<integer>>

    // Test Case 56
    int nums55[] = {-4, -1, -1, 0, 1, 2};
    int nums55Size = 6;
    // Expected output: [[-1, -1, 2], [-1, 0, 1]]
    // Unsupported C return type for direct assertion: list<list<integer>>

    // Test Case 57
    int nums56[] = {-1, -2, -3, -4, -5, 5, 4, 3, 2, 1};
    int nums56Size = 10;
    // Expected output: [[-5, 1, 4], [-5, 2, 3], [-4, -1, 5], [-4, 1, 3], [-3, -2, 5], [-3, -1, 4], [-3, 1, 2], [-2, -1, 3]]
    // Unsupported C return type for direct assertion: list<list<integer>>

    // Test Case 58
    int nums57[] = {-1, 0, 1, 2, -1, -4, 3, -2, 2};
    int nums57Size = 9;
    // Expected output: [[-4, 1, 3], [-4, 2, 2], [-2, -1, 3], [-2, 0, 2], [-1, -1, 2], [-1, 0, 1]]
    // Unsupported C return type for direct assertion: list<list<integer>>

    // Test Case 59
    int nums58[] = {-5, -4, -3, -2, -1, 1, 2, 3, 4, 5};
    int nums58Size = 10;
    // Expected output: [[-5, 1, 4], [-5, 2, 3], [-4, -1, 5], [-4, 1, 3], [-3, -2, 5], [-3, -1, 4], [-3, 1, 2], [-2, -1, 3]]
    // Unsupported C return type for direct assertion: list<list<integer>>

    // Test Case 60
    int nums59[] = {-1, -2, -3, 0, 1, 2, 3};
    int nums59Size = 7;
    // Expected output: [[-3, 0, 3], [-3, 1, 2], [-2, -1, 3], [-2, 0, 2], [-1, 0, 1]]
    // Unsupported C return type for direct assertion: list<list<integer>>

    // Test Case 61
    int nums60[] = {3, -3, 4, -4, 5, -5, 6, -6, 0};
    int nums60Size = 9;
    // Expected output: [[-6, 0, 6], [-5, 0, 5], [-4, 0, 4], [-3, 0, 3]]
    // Unsupported C return type for direct assertion: list<list<integer>>

    // Test Case 62
    int nums61[] = {0, 1, 2, 3, 4, 5, -1, -2, -3, -4, -5};
    int nums61Size = 11;
    // Expected output: [[-5, 0, 5], [-5, 1, 4], [-5, 2, 3], [-4, -1, 5], [-4, 0, 4], [-4, 1, 3], [-3, -2, 5], [-3, -1, 4], [-3, 0, 3], [-3, 1, 2], [-2, -1, 3], [-2, 0, 2], [-1, 0, 1]]
    // Unsupported C return type for direct assertion: list<list<integer>>

    // Test Case 63
    int nums62[] = {-6, -6, -4, -2, 0, 2, 4, 6, 6};
    int nums62Size = 9;
    // Expected output: [[-6, 0, 6], [-6, 2, 4], [-4, -2, 6], [-4, 0, 4], [-2, 0, 2]]
    // Unsupported C return type for direct assertion: list<list<integer>>

    // Test Case 64
    int nums63[] = {1, 2, 3, -6, 4, -1, -3, 2, 0};
    int nums63Size = 9;
    // Expected output: [[-6, 2, 4], [-3, -1, 4], [-3, 0, 3], [-3, 1, 2], [-1, 0, 1]]
    // Unsupported C return type for direct assertion: list<list<integer>>

    // Test Case 65
    int nums64[] = {-5, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int nums64Size = 26;
    // Expected output: [[-5, -4, 9], [-5, -3, 8], [-5, -2, 7], [-5, -1, 6], [-5, 0, 5], [-5, 1, 4], [-5, 2, 3], [-4, -3, 7], [-4, -2, 6], [-4, -1, 5], [-4, 0, 4], [-4, 1, 3], [-3, -2, 5], [-3, -1, 4], [-3, 0, 3], [-3, 1, 2], [-2, -1, 3], [-2, 0, 2], [-1, 0, 1]]
    // Unsupported C return type for direct assertion: list<list<integer>>

    // Test Case 66
    int nums65[] = {2, 2, 2, 2, 2, -2, -2, -2, -2, -2};
    int nums65Size = 10;
    // Expected output: []
    // Unsupported C return type for direct assertion: list<list<integer>>

    // Test Case 67
    int nums66[] = {-5, -3, -1, 0, 0, 0, 0, 0, 1, 2, 3, 5};
    int nums66Size = 12;
    // Expected output: [[-5, 0, 5], [-5, 2, 3], [-3, 0, 3], [-3, 1, 2], [-1, 0, 1], [0, 0, 0]]
    // Unsupported C return type for direct assertion: list<list<integer>>

    // Test Case 68
    int nums67[] = {-10, -9, -8, -7, -6, -5, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int nums67Size = 21;
    // Expected output: [[-10, 0, 10], [-10, 1, 9], [-10, 2, 8], [-10, 3, 7], [-10, 4, 6], [-9, -1, 10], [-9, 0, 9], [-9, 1, 8], [-9, 2, 7], [-9, 3, 6], [-9, 4, 5], [-8, -2, 10], [-8, -1, 9], [-8, 0, 8], [-8, 1, 7], [-8, 2, 6], [-8, 3, 5], [-7, -3, 10], [-7, -2, 9], [-7, -1, 8], [-7, 0, 7], [-7, 1, 6], [-7, 2, 5], [-7, 3, 4], [-6, -4, 10], [-6, -3, 9], [-6, -2, 8], [-6, -1, 7], [-6, 0, 6], [-6, 1, 5], [-6, 2, 4], [-5, -4, 9], [-5, -3, 8], [-5, -2, 7], [-5, -1, 6], [-5, 0, 5], [-5, 1, 4], [-5, 2, 3], [-4, -3, 7], [-4, -2, 6], [-4, -1, 5], [-4, 0, 4], [-4, 1, 3], [-3, -2, 5], [-3, -1, 4], [-3, 0, 3], [-3, 1, 2], [-2, -1, 3], [-2, 0, 2], [-1, 0, 1]]
    // Unsupported C return type for direct assertion: list<list<integer>>

    // Test Case 69
    int nums68[] = {1, 2, 3, 4, 5, 6, -1, -2, -3, -4, -5, -6};
    int nums68Size = 12;
    // Expected output: [[-6, 1, 5], [-6, 2, 4], [-5, -1, 6], [-5, 1, 4], [-5, 2, 3], [-4, -2, 6], [-4, -1, 5], [-4, 1, 3], [-3, -2, 5], [-3, -1, 4], [-3, 1, 2], [-2, -1, 3]]
    // Unsupported C return type for direct assertion: list<list<integer>>

    // Test Case 70
    int nums69[] = {-3, -2, -1, 0, 1, 2, 3, 4, 5, 6};
    int nums69Size = 10;
    // Expected output: [[-3, -2, 5], [-3, -1, 4], [-3, 0, 3], [-3, 1, 2], [-2, -1, 3], [-2, 0, 2], [-1, 0, 1]]
    // Unsupported C return type for direct assertion: list<list<integer>>

    // Test Case 71
    int nums70[] = {-10, -5, -5, -3, -2, -1, 0, 1, 2, 3, 4, 5, 5, 6, 7, 8};
    int nums70Size = 16;
    // Expected output: [[-10, 2, 8], [-10, 3, 7], [-10, 4, 6], [-10, 5, 5], [-5, -3, 8], [-5, -2, 7], [-5, -1, 6], [-5, 0, 5], [-5, 1, 4], [-5, 2, 3], [-3, -2, 5], [-3, -1, 4], [-3, 0, 3], [-3, 1, 2], [-2, -1, 3], [-2, 0, 2], [-1, 0, 1]]
    // Unsupported C return type for direct assertion: list<list<integer>>

    // Test Case 72
    int nums71[] = {1, 2, -3, 4, -1, -2, 3, -4, 0, 0, 0, 0};
    int nums71Size = 12;
    // Expected output: [[-4, 0, 4], [-4, 1, 3], [-3, -1, 4], [-3, 0, 3], [-3, 1, 2], [-2, -1, 3], [-2, 0, 2], [-1, 0, 1], [0, 0, 0]]
    // Unsupported C return type for direct assertion: list<list<integer>>

    // Test Case 73
    int nums72[] = {-5, 2, 1, -2, 3, -1, 2, -3, 0, 0, 0};
    int nums72Size = 11;
    // Expected output: [[-5, 2, 3], [-3, 0, 3], [-3, 1, 2], [-2, -1, 3], [-2, 0, 2], [-1, 0, 1], [0, 0, 0]]
    // Unsupported C return type for direct assertion: list<list<integer>>

    // Test Case 74
    int nums73[] = {-3, -2, -1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, -4, -5, -6, -7, -8, -9};
    int nums73Size = 19;
    // Expected output: [[-9, 0, 9], [-9, 1, 8], [-9, 2, 7], [-9, 3, 6], [-9, 4, 5], [-8, -1, 9], [-8, 0, 8], [-8, 1, 7], [-8, 2, 6], [-8, 3, 5], [-7, -2, 9], [-7, -1, 8], [-7, 0, 7], [-7, 1, 6], [-7, 2, 5], [-7, 3, 4], [-6, -3, 9], [-6, -2, 8], [-6, -1, 7], [-6, 0, 6], [-6, 1, 5], [-6, 2, 4], [-5, -4, 9], [-5, -3, 8], [-5, -2, 7], [-5, -1, 6], [-5, 0, 5], [-5, 1, 4], [-5, 2, 3], [-4, -3, 7], [-4, -2, 6], [-4, -1, 5], [-4, 0, 4], [-4, 1, 3], [-3, -2, 5], [-3, -1, 4], [-3, 0, 3], [-3, 1, 2], [-2, -1, 3], [-2, 0, 2], [-1, 0, 1]]
    // Unsupported C return type for direct assertion: list<list<integer>>

    // Test Case 75
    int nums74[] = {-2, 0, 1, 1, 2, 3, 4, 5, -3, -4, -5, 6, 7, 8, 9, -6, -7, -8, -9};
    int nums74Size = 19;
    // Expected output: [[-9, 0, 9], [-9, 1, 8], [-9, 2, 7], [-9, 3, 6], [-9, 4, 5], [-8, 0, 8], [-8, 1, 7], [-8, 2, 6], [-8, 3, 5], [-7, -2, 9], [-7, 0, 7], [-7, 1, 6], [-7, 2, 5], [-7, 3, 4], [-6, -3, 9], [-6, -2, 8], [-6, 0, 6], [-6, 1, 5], [-6, 2, 4], [-5, -4, 9], [-5, -3, 8], [-5, -2, 7], [-5, 0, 5], [-5, 1, 4], [-5, 2, 3], [-4, -3, 7], [-4, -2, 6], [-4, 0, 4], [-4, 1, 3], [-3, -2, 5], [-3, 0, 3], [-3, 1, 2], [-2, 0, 2], [-2, 1, 1]]
    // Unsupported C return type for direct assertion: list<list<integer>>

    // Test Case 76
    int nums75[] = {3, -1, -3, 0, 1, 2, 4, -2, -4, 5, -5, 6, -6};
    int nums75Size = 13;
    // Expected output: [[-6, 0, 6], [-6, 1, 5], [-6, 2, 4], [-5, -1, 6], [-5, 0, 5], [-5, 1, 4], [-5, 2, 3], [-4, -2, 6], [-4, -1, 5], [-4, 0, 4], [-4, 1, 3], [-3, -2, 5], [-3, -1, 4], [-3, 0, 3], [-3, 1, 2], [-2, -1, 3], [-2, 0, 2], [-1, 0, 1]]
    // Unsupported C return type for direct assertion: list<list<integer>>

    // Test Case 77
    int nums76[] = {1, 1, 1, 1, -1, -1, -1, -1, 0, 0, 0, 0};
    int nums76Size = 12;
    // Expected output: [[-1, 0, 1], [0, 0, 0]]
    // Unsupported C return type for direct assertion: list<list<integer>>

    // Test Case 78
    int nums77[] = {-5, -3, -1, 0, 0, 0, 1, 3, 5};
    int nums77Size = 9;
    // Expected output: [[-5, 0, 5], [-3, 0, 3], [-1, 0, 1], [0, 0, 0]]
    // Unsupported C return type for direct assertion: list<list<integer>>

    // Test Case 79
    int nums78[] = {1, 2, -2, -1, 0, -1, 2};
    int nums78Size = 7;
    // Expected output: [[-2, 0, 2], [-1, -1, 2], [-1, 0, 1]]
    // Unsupported C return type for direct assertion: list<list<integer>>

    // Test Case 80
    int nums79[] = {-7, -5, -5, -1, 0, 1, 1, 5, 7};
    int nums79Size = 9;
    // Expected output: [[-7, 0, 7], [-5, 0, 5], [-1, 0, 1]]
    // Unsupported C return type for direct assertion: list<list<integer>>

    // Test Case 81
    int nums80[] = {-1, 0, 1, 0, 1, 0, -1, -1, -1, 0};
    int nums80Size = 10;
    // Expected output: [[-1, 0, 1], [0, 0, 0]]
    // Unsupported C return type for direct assertion: list<list<integer>>

    // Test Case 82
    int nums81[] = {1, 2, -2, -1, 0, 3, -3};
    int nums81Size = 7;
    // Expected output: [[-3, 0, 3], [-3, 1, 2], [-2, -1, 3], [-2, 0, 2], [-1, 0, 1]]
    // Unsupported C return type for direct assertion: list<list<integer>>

    // Test Case 83
    int nums82[] = {-1, -1, -1, 0, 0, 0, 1, 1, 1};
    int nums82Size = 9;
    // Expected output: [[-1, 0, 1], [0, 0, 0]]
    // Unsupported C return type for direct assertion: list<list<integer>>

    // Test Case 84
    int nums83[] = {1, 2, 3, 4, 5, -5, -4, -3, -2, -1};
    int nums83Size = 10;
    // Expected output: [[-5, 1, 4], [-5, 2, 3], [-4, -1, 5], [-4, 1, 3], [-3, -2, 5], [-3, -1, 4], [-3, 1, 2], [-2, -1, 3]]
    // Unsupported C return type for direct assertion: list<list<integer>>

    // Test Case 85
    int nums84[] = {-2, 0, 0, 0, 1, 1, 1, 2, 2, 3, 3, 3, 4, 4, 5, 5, 6, 6, 7, 7, 8, 8, 9, 9};
    int nums84Size = 24;
    // Expected output: [[-2, 0, 2], [-2, 1, 1], [0, 0, 0]]
    // Unsupported C return type for direct assertion: list<list<integer>>

    // Test Case 86
    int nums85[] = {1, -1, 2, -2, 3, -3, 4, -4, 5, -5};
    int nums85Size = 10;
    // Expected output: [[-5, 1, 4], [-5, 2, 3], [-4, -1, 5], [-4, 1, 3], [-3, -2, 5], [-3, -1, 4], [-3, 1, 2], [-2, -1, 3]]
    // Unsupported C return type for direct assertion: list<list<integer>>

    // Test Case 87
    int nums86[] = {0, 0, 0, 0, 0, 0};
    int nums86Size = 6;
    // Expected output: [[0, 0, 0]]
    // Unsupported C return type for direct assertion: list<list<integer>>

    // Test Case 88
    int nums87[] = {-4, -2, -2, -1, 0, 1, 2, 2, 4};
    int nums87Size = 9;
    // Expected output: [[-4, 0, 4], [-4, 2, 2], [-2, -2, 4], [-2, 0, 2], [-1, 0, 1]]
    // Unsupported C return type for direct assertion: list<list<integer>>

    // Test Case 89
    int nums88[] = {1, -1, 1, -1, 1, -1, 1, -1, 1, -1};
    int nums88Size = 10;
    // Expected output: []
    // Unsupported C return type for direct assertion: list<list<integer>>

    // Test Case 90
    int nums89[] = {-1, 0, 1, 2, -1, -4, 3, 4, -3, 2, -2, -5, 5};
    int nums89Size = 13;
    // Expected output: [[-5, 0, 5], [-5, 1, 4], [-5, 2, 3], [-4, -1, 5], [-4, 0, 4], [-4, 1, 3], [-4, 2, 2], [-3, -2, 5], [-3, -1, 4], [-3, 0, 3], [-3, 1, 2], [-2, -1, 3], [-2, 0, 2], [-1, -1, 2], [-1, 0, 1]]
    // Unsupported C return type for direct assertion: list<list<integer>>

    // Test Case 91
    int nums90[] = {1, 1, 1, 1, 1, 1, -1, -1, -1, -1, -1, -1};
    int nums90Size = 12;
    // Expected output: []
    // Unsupported C return type for direct assertion: list<list<integer>>

    // Test Case 92
    int nums91[] = {-6, -5, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5, 6};
    int nums91Size = 13;
    // Expected output: [[-6, 0, 6], [-6, 1, 5], [-6, 2, 4], [-5, -1, 6], [-5, 0, 5], [-5, 1, 4], [-5, 2, 3], [-4, -2, 6], [-4, -1, 5], [-4, 0, 4], [-4, 1, 3], [-3, -2, 5], [-3, -1, 4], [-3, 0, 3], [-3, 1, 2], [-2, -1, 3], [-2, 0, 2], [-1, 0, 1]]
    // Unsupported C return type for direct assertion: list<list<integer>>

    // Test Case 93
    int nums92[] = {-4, -2, 1, -5, -4, -4, 4, -2, 0, 4, 0, -2, 3, 1, -5, 0};
    int nums92Size = 16;
    // Expected output: [[-5, 1, 4], [-4, 0, 4], [-4, 1, 3], [-2, -2, 4], [-2, 1, 1], [0, 0, 0]]
    // Unsupported C return type for direct assertion: list<list<integer>>

    // Test Case 94
    int nums93[] = {-1, 2, 1, -4, 3, 0, -2, 1, 1, -1, 0, 0, 0, 0, 0};
    int nums93Size = 15;
    // Expected output: [[-4, 1, 3], [-2, -1, 3], [-2, 0, 2], [-2, 1, 1], [-1, -1, 2], [-1, 0, 1], [0, 0, 0]]
    // Unsupported C return type for direct assertion: list<list<integer>>

    // Test Case 95
    int nums94[] = {-1, 2, 1, -4, 3, 0, -2, 2, 1, -1, -3, 3};
    int nums94Size = 12;
    // Expected output: [[-4, 1, 3], [-4, 2, 2], [-3, 0, 3], [-3, 1, 2], [-2, -1, 3], [-2, 0, 2], [-2, 1, 1], [-1, -1, 2], [-1, 0, 1]]
    // Unsupported C return type for direct assertion: list<list<integer>>

    // Test Case 96
    int nums95[] = {-5, -3, -1, 0, 2, 4, 6};
    int nums95Size = 7;
    // Expected output: [[-5, -1, 6], [-3, -1, 4]]
    // Unsupported C return type for direct assertion: list<list<integer>>

    // Test Case 97
    int nums96[] = {1, 2, -2, -1, 0, -4, 3, 4, 5};
    int nums96Size = 9;
    // Expected output: [[-4, -1, 5], [-4, 0, 4], [-4, 1, 3], [-2, -1, 3], [-2, 0, 2], [-1, 0, 1]]
    // Unsupported C return type for direct assertion: list<list<integer>>

    printf("All tests for 3Sum passed!\n");
    return 0;
}
