#include <iostream>
#include <vector>
#include <string>
#include <cassert>
#include "../support/GeneratedLeetCodeTestHarness.hpp"
#include "c:/Users/zarat/IdeaProjects/DataStructures-and-Algorithms/leetcode-questions/cpp/src/main/cpp/com/leetcode/questions/leetcode/editor/en/_3sum.cpp"

int main() {
    Solution solution;
    // Test Case 1
    vector<int> nums0 = vector<int>{-1, 0, 1, 2, -1, -4};
    vector<vector<int>> expected0 = vector<vector<int>>{vector<int>{-1, -1, 2}, vector<int>{-1, 0, 1}};

    // Test Case 2
    vector<int> nums1 = vector<int>{0, 1, 1};
    vector<vector<int>> expected1 = vector<vector<int>>{};

    // Test Case 3
    vector<int> nums2 = vector<int>{0, 0, 0};
    vector<vector<int>> expected2 = vector<vector<int>>{vector<int>{0, 0, 0}};

    // Test Case 4
    vector<int> nums3 = vector<int>{-2, 0, 0, 2, 2};
    vector<vector<int>> expected3 = vector<vector<int>>{vector<int>{-2, 0, 2}};

    // Test Case 5
    vector<int> nums4 = vector<int>{-2, 0, 1, 1, 2};
    vector<vector<int>> expected4 = vector<vector<int>>{vector<int>{-2, 0, 2}, vector<int>{-2, 1, 1}};

    // Test Case 6
    vector<int> nums5 = vector<int>{1, 2, -2, -1};
    vector<vector<int>> expected5 = vector<vector<int>>{};

    // Test Case 7
    vector<int> nums6 = vector<int>{-1, 0, 0, 0, 1, 1, 2};
    vector<vector<int>> expected6 = vector<vector<int>>{vector<int>{-1, 0, 1}, vector<int>{0, 0, 0}};

    // Test Case 8
    vector<int> nums7 = vector<int>{1, -1, -1, 0};
    vector<vector<int>> expected7 = vector<vector<int>>{vector<int>{-1, 0, 1}};

    // Test Case 9
    vector<int> nums8 = vector<int>{3, -2, 1, 0, -1, -2, 1, -2, 1, -2};
    vector<vector<int>> expected8 = vector<vector<int>>{vector<int>{-2, -1, 3}, vector<int>{-2, 1, 1}, vector<int>{-1, 0, 1}};

    // Test Case 10
    vector<int> nums9 = vector<int>{-1, 0, 1, 0};
    vector<vector<int>> expected9 = vector<vector<int>>{vector<int>{-1, 0, 1}};

    // Test Case 11
    vector<int> nums10 = vector<int>{-4, -2, -2, -2, 0, 1, 2, 2, 2, 3, 3, 4, 4, 6, 6};
    vector<vector<int>> expected10 = vector<vector<int>>{vector<int>{-4, -2, 6}, vector<int>{-4, 0, 4}, vector<int>{-4, 1, 3}, vector<int>{-4, 2, 2}, vector<int>{-2, -2, 4}, vector<int>{-2, 0, 2}};

    // Test Case 12
    vector<int> nums11 = vector<int>{-1, 1, 0};
    vector<vector<int>> expected11 = vector<vector<int>>{vector<int>{-1, 0, 1}};

    // Test Case 13
    vector<int> nums12 = vector<int>{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<vector<int>> expected12 = vector<vector<int>>{vector<int>{0, 0, 0}};

    // Test Case 14
    vector<int> nums13 = vector<int>{-1, 0, 1, -1, 0, 1, -1, 0, 1};
    vector<vector<int>> expected13 = vector<vector<int>>{vector<int>{-1, 0, 1}, vector<int>{0, 0, 0}};

    // Test Case 15
    vector<int> nums14 = vector<int>{-3, -3, -3, -3, 1, 2, 2, 3, 3, 3};
    vector<vector<int>> expected14 = vector<vector<int>>{vector<int>{-3, 1, 2}};

    // Test Case 16
    vector<int> nums15 = vector<int>{-1, -1, -1, -1, 0, 0, 0, 0, 1, 1, 1, 1};
    vector<vector<int>> expected15 = vector<vector<int>>{vector<int>{-1, 0, 1}, vector<int>{0, 0, 0}};

    // Test Case 17
    vector<int> nums16 = vector<int>{-3, -2, -1, 0, 0, 0, 1, 2, 3};
    vector<vector<int>> expected16 = vector<vector<int>>{vector<int>{-3, 0, 3}, vector<int>{-3, 1, 2}, vector<int>{-2, -1, 3}, vector<int>{-2, 0, 2}, vector<int>{-1, 0, 1}, vector<int>{0, 0, 0}};

    // Test Case 18
    vector<int> nums17 = vector<int>{-5, -3, -2, 0, 1, 2, 3, 5, 7};
    vector<vector<int>> expected17 = vector<vector<int>>{vector<int>{-5, -2, 7}, vector<int>{-5, 0, 5}, vector<int>{-5, 2, 3}, vector<int>{-3, -2, 5}, vector<int>{-3, 0, 3}, vector<int>{-3, 1, 2}, vector<int>{-2, 0, 2}};

    // Test Case 19
    vector<int> nums18 = vector<int>{-1, -1, 0, 0, 0, 1, 1, 1, 2, 2};
    vector<vector<int>> expected18 = vector<vector<int>>{vector<int>{-1, -1, 2}, vector<int>{-1, 0, 1}, vector<int>{0, 0, 0}};

    // Test Case 20
    vector<int> nums19 = vector<int>{-4, -3, -2, -1, 0, 1, 2, 3, 4};
    vector<vector<int>> expected19 = vector<vector<int>>{vector<int>{-4, 0, 4}, vector<int>{-4, 1, 3}, vector<int>{-3, -1, 4}, vector<int>{-3, 0, 3}, vector<int>{-3, 1, 2}, vector<int>{-2, -1, 3}, vector<int>{-2, 0, 2}, vector<int>{-1, 0, 1}};

    // Test Case 21
    vector<int> nums20 = vector<int>{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<vector<int>> expected20 = vector<vector<int>>{vector<int>{0, 0, 0}};

    // Test Case 22
    vector<int> nums21 = vector<int>{-1, -1, 0, 0, 1, 1, 2, -2, 3};
    vector<vector<int>> expected21 = vector<vector<int>>{vector<int>{-2, -1, 3}, vector<int>{-2, 0, 2}, vector<int>{-2, 1, 1}, vector<int>{-1, -1, 2}, vector<int>{-1, 0, 1}};

    // Test Case 23
    vector<int> nums22 = vector<int>{-1, -1, 0, 1, 1, 1, 2, 2, 3, 3, 4, 4};
    vector<vector<int>> expected22 = vector<vector<int>>{vector<int>{-1, -1, 2}, vector<int>{-1, 0, 1}};

    // Test Case 24
    vector<int> nums23 = vector<int>{-1, -1, 0, 1, 1, 2, 2, 3};
    vector<vector<int>> expected23 = vector<vector<int>>{vector<int>{-1, -1, 2}, vector<int>{-1, 0, 1}};

    // Test Case 25
    vector<int> nums24 = vector<int>{-5, 2, 3, 0, -4, -6, 5, -7, 9, -3, -8, -1, 1, -7, -3, 1, -8, 5, -5, -7, 6, -3, 0, 6, -4, -8, -9, 7, 7, -4, -9, 1, -2, 6, 5, -3, -9, -1, 5, 4, -1, -2, -5, -2, -8, 8, 6, -7, -1, -2, 3, -3, 9, -4, 2, -3, 3, 2, 6, -9, -5, -3, 5, -8, 1, 8, -2, 5, -3, -8, 1, 8, -7, -4, 5, 5, -1, 6, 2, 2, -6, -1, -3, 2, -5, -7, -9, -7, 6, 2, 2, 1, 6, 5, -5, 0, -5, 8, -5, -7, 6, -2, -9, -1, -2, 7, 1, -7, 5, -3, -9, 2, -7, -8, -3, -7, -9, 0, 4, -1, 3, 8, -2, -7, 9, -9, -6, -7, 4, 3, 3, -9, -9, -9, 9, 0, 5, -2, -9, -9, -6, -1, 0, 1, 9, -8, -3, -2, -1, 6, 0, 8, 8, -7, -6, -2, -1, -2, -8, -4, 8, -6, -9, 7, -6, -4, 0, 7, 8, -9, 9, -9, -8, -3, -5, -7, -3, 9, 1, 6, -9, -2, -4, -4, -3, -1, 5, -4, -9, -9, 8, -2, -8, 1, 0, 3, 6, -1, 6, -8, -7, -2, -8, 1, 9, -3, -5, -1, -7, 8, -5, -6, -1, 8, 0, -2, -1, 1, 8, -4, 1, -4, 4, -3, -1, -4, 5, 9, 4, -9, -8, 2, -2, -7, -7, -8, -7, -3, 7, -5, -8, 2, -6, -1, -2, -4, -4, -6, -8, 5, -4, 7, 8, -4, 5, 0, -7, -8, -4, -6, -1, -3, 1, 3, -2, -1, -9, 0, 1, 2, -8, 5, 8, 7, -3, -1, -7, -9, -2, -4, -1, -5, -2, -5, -5, -9, -8, -6, 6, -2, -9, -7, -5, -9, 2, -3, 7, 0, -9, 7, -4, 3, -3, -4, -8, 1, -4, -6, -4, 3, 5, 0, 4, -5, -8, -5, -3, -7, -1, 0, -3, -8, 2, -4, -3, 6, -7, -6, -3, -1, -5, -8, -4, -3, -7, -9, -6, -6, 3, -9, -5, 7, -1, -5, -7, 4, 8, -5, -5, 2, -9, -3, -8, -3, 4, -6, 2, -8, -8, -1, -8, -8, -9, 7, -9, 1, -3, -4, -1, -3, -1, -8, 9, -6, -1, 3, 3, -9, -9, 7, -5, -1, -7, -4, -8, 2, 0, 5, -8, 8, -3, -6, -2, -8, -3, -3, -1, -7, 4, -4, 6, 3, -6, -1, -2, -8, -3, 2, -8, -2, 8, -4, -7, -8, -9, -6, -8, -9, 7, 1, -4, 1, -8, 2, -2, 4, -1, 9, -3, -5, -1, -6, -2, -8, 2, -2, -8, -4, -3, -7, -3, 0, -9, -2, -1, -7, -1, -9, -1, 7, -6, -5, -4, -8, -4, -2, -7, 5, -6, -5, -5, -5, -5, -3, 4, -9, -3, -2, -8, -1, -9, -4, -2, 5, -3, 1, -4, -1, 1, -3, -1, -3, 1, -3, -5, 7, -3, -7, -9, 9, -2, -9, 7, -7, -1, -4, -2, -5, -3, 8, -6, -2, 2, -7, -8, 6, 9, -9, -7, -3, -9, -8, -2, -7, -6, -9, -9, -1, -9, -9, -7, -1, -8, -7, -8, -6, -4, -2, -3, -2, -2, -6, -9, -8, -5, -3, -1, -1, -3, 3, -5, -1, -2, -5, -9, 0, -7, -1, -4, -3, -9, -7, -3, -7, -8, -7, -6, 0, 1, -2, 0, -4, -5, -5, -3, -9, 5, -1, -2, 8, -8, -1, -9, -7, -8, -9, -9, 0, -1, -3, -4, -3, -2, -4, -6, -2, 6, -4, -4, -3, 8, -9, -5, -9, -4, -9, -8, -7, -3, -1, -6, -9, 0, -7, -8, 2, -5, -4, -5, -3, -6, -7, -4, -7, 3, -3, -4, -2, -3, 8, -9, -5, -2, -6, -3, -8, -1, -3, -7, -1, -8, -5, -5, -1, -3, -7, -3, -5, -5, 2, -4, -9, -3, -6, -3, -8, -6, -9, -3, -1, -8, -8, -8, -8, -7, -7, -7, -7, -7, -6, -6, -6, -6, -5, -5, -5, -5, -4, -4, -4, -4, -3, -3, -3, -3, -2, -2, -2, -2, -1, -1, -1, -1, 0, 0, 0, 0};
    vector<vector<int>> expected24 = vector<vector<int>>{vector<int>{-9, 0, 9}, vector<int>{-9, 1, 8}, vector<int>{-9, 2, 7}, vector<int>{-9, 3, 6}, vector<int>{-9, 4, 5}, vector<int>{-8, -1, 9}, vector<int>{-8, 0, 8}, vector<int>{-8, 1, 7}, vector<int>{-8, 2, 6}, vector<int>{-8, 3, 5}, vector<int>{-8, 4, 4}, vector<int>{-7, -2, 9}, vector<int>{-7, -1, 8}, vector<int>{-7, 0, 7}, vector<int>{-7, 1, 6}, vector<int>{-7, 2, 5}, vector<int>{-7, 3, 4}, vector<int>{-6, -3, 9}, vector<int>{-6, -2, 8}, vector<int>{-6, -1, 7}, vector<int>{-6, 0, 6}, vector<int>{-6, 1, 5}, vector<int>{-6, 2, 4}, vector<int>{-6, 3, 3}, vector<int>{-5, -4, 9}, vector<int>{-5, -3, 8}, vector<int>{-5, -2, 7}, vector<int>{-5, -1, 6}, vector<int>{-5, 0, 5}, vector<int>{-5, 1, 4}, vector<int>{-5, 2, 3}, vector<int>{-4, -4, 8}, vector<int>{-4, -3, 7}, vector<int>{-4, -2, 6}, vector<int>{-4, -1, 5}, vector<int>{-4, 0, 4}, vector<int>{-4, 1, 3}, vector<int>{-4, 2, 2}, vector<int>{-3, -3, 6}, vector<int>{-3, -2, 5}, vector<int>{-3, -1, 4}, vector<int>{-3, 0, 3}, vector<int>{-3, 1, 2}, vector<int>{-2, -2, 4}, vector<int>{-2, -1, 3}, vector<int>{-2, 0, 2}, vector<int>{-2, 1, 1}, vector<int>{-1, -1, 2}, vector<int>{-1, 0, 1}, vector<int>{0, 0, 0}};

    // Test Case 26
    vector<int> nums25 = vector<int>{-10, -10, -10, -1, 0, 0, 1, 10, 10, 10};
    vector<vector<int>> expected25 = vector<vector<int>>{vector<int>{-10, 0, 10}, vector<int>{-1, 0, 1}};

    // Test Case 27
    vector<int> nums26 = vector<int>{-1, 0, 1, 2, -1, -4, 3, 4, 5, -5};
    vector<vector<int>> expected26 = vector<vector<int>>{vector<int>{-5, 0, 5}, vector<int>{-5, 1, 4}, vector<int>{-5, 2, 3}, vector<int>{-4, -1, 5}, vector<int>{-4, 0, 4}, vector<int>{-4, 1, 3}, vector<int>{-1, -1, 2}, vector<int>{-1, 0, 1}};

    // Test Case 28
    vector<int> nums27 = vector<int>{-3, -2, -1, 0, 1, 2, 3, 4, 5};
    vector<vector<int>> expected27 = vector<vector<int>>{vector<int>{-3, -2, 5}, vector<int>{-3, -1, 4}, vector<int>{-3, 0, 3}, vector<int>{-3, 1, 2}, vector<int>{-2, -1, 3}, vector<int>{-2, 0, 2}, vector<int>{-1, 0, 1}};

    // Test Case 29
    vector<int> nums28 = vector<int>{1, 2, -2, -1, -1, -3, 3, 3, 2, -2};
    vector<vector<int>> expected28 = vector<vector<int>>{vector<int>{-3, 1, 2}, vector<int>{-2, -1, 3}, vector<int>{-1, -1, 2}};

    // Test Case 30
    vector<int> nums29 = vector<int>{-1, -1, -1, 0, 0, 1, 1, 1};
    vector<vector<int>> expected29 = vector<vector<int>>{vector<int>{-1, 0, 1}};

    // Test Case 31
    vector<int> nums30 = vector<int>{-5, 2, 5, -1, 1, 0, -2, 2, -3, 3};
    vector<vector<int>> expected30 = vector<vector<int>>{vector<int>{-5, 0, 5}, vector<int>{-5, 2, 3}, vector<int>{-3, -2, 5}, vector<int>{-3, 0, 3}, vector<int>{-3, 1, 2}, vector<int>{-2, -1, 3}, vector<int>{-2, 0, 2}, vector<int>{-1, 0, 1}};

    // Test Case 32
    vector<int> nums31 = vector<int>{-3, -2, -1, 0, 1, 2, 3};
    vector<vector<int>> expected31 = vector<vector<int>>{vector<int>{-3, 0, 3}, vector<int>{-3, 1, 2}, vector<int>{-2, -1, 3}, vector<int>{-2, 0, 2}, vector<int>{-1, 0, 1}};

    // Test Case 33
    vector<int> nums32 = vector<int>{0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<vector<int>> expected32 = vector<vector<int>>{vector<int>{0, 0, 0}};

    // Test Case 34
    vector<int> nums33 = vector<int>{-5, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5};
    vector<vector<int>> expected33 = vector<vector<int>>{vector<int>{-5, 0, 5}, vector<int>{-5, 1, 4}, vector<int>{-5, 2, 3}, vector<int>{-4, -1, 5}, vector<int>{-4, 0, 4}, vector<int>{-4, 1, 3}, vector<int>{-3, -2, 5}, vector<int>{-3, -1, 4}, vector<int>{-3, 0, 3}, vector<int>{-3, 1, 2}, vector<int>{-2, -1, 3}, vector<int>{-2, 0, 2}, vector<int>{-1, 0, 1}};

    // Test Case 35
    vector<int> nums34 = vector<int>{-1, 0, 1, 2, -1, -4, -3, 3, 0, 1, 2, -1, -4};
    vector<vector<int>> expected34 = vector<vector<int>>{vector<int>{-4, 1, 3}, vector<int>{-4, 2, 2}, vector<int>{-3, 0, 3}, vector<int>{-3, 1, 2}, vector<int>{-1, -1, 2}, vector<int>{-1, 0, 1}};

    // Test Case 36
    vector<int> nums35 = vector<int>{-1, 1, 2, -2, 3, -3, 4, -4};
    vector<vector<int>> expected35 = vector<vector<int>>{vector<int>{-4, 1, 3}, vector<int>{-3, -1, 4}, vector<int>{-3, 1, 2}, vector<int>{-2, -1, 3}};

    // Test Case 37
    vector<int> nums36 = vector<int>{-10, -5, -3, -2, -1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<vector<int>> expected36 = vector<vector<int>>{vector<int>{-10, 0, 10}, vector<int>{-10, 1, 9}, vector<int>{-10, 2, 8}, vector<int>{-10, 3, 7}, vector<int>{-10, 4, 6}, vector<int>{-5, -3, 8}, vector<int>{-5, -2, 7}, vector<int>{-5, -1, 6}, vector<int>{-5, 0, 5}, vector<int>{-5, 1, 4}, vector<int>{-5, 2, 3}, vector<int>{-3, -2, 5}, vector<int>{-3, -1, 4}, vector<int>{-3, 0, 3}, vector<int>{-3, 1, 2}, vector<int>{-2, -1, 3}, vector<int>{-2, 0, 2}, vector<int>{-1, 0, 1}};

    // Test Case 38
    vector<int> nums37 = vector<int>{1, 2, -2, -1, 0, 0, 0};
    vector<vector<int>> expected37 = vector<vector<int>>{vector<int>{-2, 0, 2}, vector<int>{-1, 0, 1}, vector<int>{0, 0, 0}};

    // Test Case 39
    vector<int> nums38 = vector<int>{-4, -2, -2, -2, 0, 1, 2, 2, 2, 3, 3, 4, 4};
    vector<vector<int>> expected38 = vector<vector<int>>{vector<int>{-4, 0, 4}, vector<int>{-4, 1, 3}, vector<int>{-4, 2, 2}, vector<int>{-2, -2, 4}, vector<int>{-2, 0, 2}};

    // Test Case 40
    vector<int> nums39 = vector<int>{1, -1, -1, 1, 0, 0, 0};
    vector<vector<int>> expected39 = vector<vector<int>>{vector<int>{-1, 0, 1}, vector<int>{0, 0, 0}};

    // Test Case 41
    vector<int> nums40 = vector<int>{-1, -2, -3, 4, 1, 3, 0};
    vector<vector<int>> expected40 = vector<vector<int>>{vector<int>{-3, -1, 4}, vector<int>{-3, 0, 3}, vector<int>{-2, -1, 3}, vector<int>{-1, 0, 1}};

    // Test Case 42
    vector<int> nums41 = vector<int>{0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<vector<int>> expected41 = vector<vector<int>>{vector<int>{0, 0, 0}};

    // Test Case 43
    vector<int> nums42 = vector<int>{1, 2, -2, -1, -1, -1, 0, 0, 0, 0};
    vector<vector<int>> expected42 = vector<vector<int>>{vector<int>{-2, 0, 2}, vector<int>{-1, -1, 2}, vector<int>{-1, 0, 1}, vector<int>{0, 0, 0}};

    // Test Case 44
    vector<int> nums43 = vector<int>{-10, -9, -8, -7, 7, 8, 9, 10};
    vector<vector<int>> expected43 = vector<vector<int>>{};

    // Test Case 45
    vector<int> nums44 = vector<int>{-10, 0, 10, 5, -5, 3, -3, 2, -2, 1, -1};
    vector<vector<int>> expected44 = vector<vector<int>>{vector<int>{-10, 0, 10}, vector<int>{-5, 0, 5}, vector<int>{-5, 2, 3}, vector<int>{-3, -2, 5}, vector<int>{-3, 0, 3}, vector<int>{-3, 1, 2}, vector<int>{-2, -1, 3}, vector<int>{-2, 0, 2}, vector<int>{-1, 0, 1}};

    // Test Case 46
    vector<int> nums45 = vector<int>{3, 0, -2, -1, 1, -2, 1, 0, -2, 1, 2};
    vector<vector<int>> expected45 = vector<vector<int>>{vector<int>{-2, -1, 3}, vector<int>{-2, 0, 2}, vector<int>{-2, 1, 1}, vector<int>{-1, 0, 1}};

    // Test Case 47
    vector<int> nums46 = vector<int>{-10, -5, 0, 5, 10, 15, 20};
    vector<vector<int>> expected46 = vector<vector<int>>{vector<int>{-10, -5, 15}, vector<int>{-10, 0, 10}, vector<int>{-5, 0, 5}};

    // Test Case 48
    vector<int> nums47 = vector<int>{1, 1, 1, 1, 1, 1, -1, -1, -1, -1, -1, -1, 0, 0, 0};
    vector<vector<int>> expected47 = vector<vector<int>>{vector<int>{-1, 0, 1}, vector<int>{0, 0, 0}};

    // Test Case 49
    vector<int> nums48 = vector<int>{-10, 0, 10, 20, -20, 30, -30, 40, -40, 50, -50, 60, -60, 70, -70, 80, -80, 90, -90};
    vector<vector<int>> expected48 = vector<vector<int>>{vector<int>{-90, 0, 90}, vector<int>{-90, 10, 80}, vector<int>{-90, 20, 70}, vector<int>{-90, 30, 60}, vector<int>{-90, 40, 50}, vector<int>{-80, -10, 90}, vector<int>{-80, 0, 80}, vector<int>{-80, 10, 70}, vector<int>{-80, 20, 60}, vector<int>{-80, 30, 50}, vector<int>{-70, -20, 90}, vector<int>{-70, -10, 80}, vector<int>{-70, 0, 70}, vector<int>{-70, 10, 60}, vector<int>{-70, 20, 50}, vector<int>{-70, 30, 40}, vector<int>{-60, -30, 90}, vector<int>{-60, -20, 80}, vector<int>{-60, -10, 70}, vector<int>{-60, 0, 60}, vector<int>{-60, 10, 50}, vector<int>{-60, 20, 40}, vector<int>{-50, -40, 90}, vector<int>{-50, -30, 80}, vector<int>{-50, -20, 70}, vector<int>{-50, -10, 60}, vector<int>{-50, 0, 50}, vector<int>{-50, 10, 40}, vector<int>{-50, 20, 30}, vector<int>{-40, -30, 70}, vector<int>{-40, -20, 60}, vector<int>{-40, -10, 50}, vector<int>{-40, 0, 40}, vector<int>{-40, 10, 30}, vector<int>{-30, -20, 50}, vector<int>{-30, -10, 40}, vector<int>{-30, 0, 30}, vector<int>{-30, 10, 20}, vector<int>{-20, -10, 30}, vector<int>{-20, 0, 20}, vector<int>{-10, 0, 10}};

    // Test Case 50
    vector<int> nums49 = vector<int>{-1, 0, 1, 0, -1, 1, -1, 0, 1};
    vector<vector<int>> expected49 = vector<vector<int>>{vector<int>{-1, 0, 1}, vector<int>{0, 0, 0}};

    // Test Case 51
    vector<int> nums50 = vector<int>{-4, -2, -1, 0, 1, 2, 3, 5};
    vector<vector<int>> expected50 = vector<vector<int>>{vector<int>{-4, -1, 5}, vector<int>{-4, 1, 3}, vector<int>{-2, -1, 3}, vector<int>{-2, 0, 2}, vector<int>{-1, 0, 1}};

    // Test Case 52
    vector<int> nums51 = vector<int>{-1, -1, -1, 0, 0, 1, 1, 2, 3};
    vector<vector<int>> expected51 = vector<vector<int>>{vector<int>{-1, -1, 2}, vector<int>{-1, 0, 1}};

    // Test Case 53
    vector<int> nums52 = vector<int>{-3, -3, -3, 1, 2, 3, 4, 4, 4};
    vector<vector<int>> expected52 = vector<vector<int>>{vector<int>{-3, 1, 2}};

    // Test Case 54
    vector<int> nums53 = vector<int>{-2, -3, 4, 3, 2, 1, 0, -1, -2, -3, 3, 2, 1};
    vector<vector<int>> expected53 = vector<vector<int>>{vector<int>{-3, -1, 4}, vector<int>{-3, 0, 3}, vector<int>{-3, 1, 2}, vector<int>{-2, -2, 4}, vector<int>{-2, -1, 3}, vector<int>{-2, 0, 2}, vector<int>{-2, 1, 1}, vector<int>{-1, 0, 1}};

    // Test Case 55
    vector<int> nums54 = vector<int>{-4, -2, -2, -2, 0, 1, 2, 2, 2, 3, 3, 4};
    vector<vector<int>> expected54 = vector<vector<int>>{vector<int>{-4, 0, 4}, vector<int>{-4, 1, 3}, vector<int>{-4, 2, 2}, vector<int>{-2, -2, 4}, vector<int>{-2, 0, 2}};

    // Test Case 56
    vector<int> nums55 = vector<int>{-4, -1, -1, 0, 1, 2};
    vector<vector<int>> expected55 = vector<vector<int>>{vector<int>{-1, -1, 2}, vector<int>{-1, 0, 1}};

    // Test Case 57
    vector<int> nums56 = vector<int>{-1, -2, -3, -4, -5, 5, 4, 3, 2, 1};
    vector<vector<int>> expected56 = vector<vector<int>>{vector<int>{-5, 1, 4}, vector<int>{-5, 2, 3}, vector<int>{-4, -1, 5}, vector<int>{-4, 1, 3}, vector<int>{-3, -2, 5}, vector<int>{-3, -1, 4}, vector<int>{-3, 1, 2}, vector<int>{-2, -1, 3}};

    // Test Case 58
    vector<int> nums57 = vector<int>{-1, 0, 1, 2, -1, -4, 3, -2, 2};
    vector<vector<int>> expected57 = vector<vector<int>>{vector<int>{-4, 1, 3}, vector<int>{-4, 2, 2}, vector<int>{-2, -1, 3}, vector<int>{-2, 0, 2}, vector<int>{-1, -1, 2}, vector<int>{-1, 0, 1}};

    // Test Case 59
    vector<int> nums58 = vector<int>{-5, -4, -3, -2, -1, 1, 2, 3, 4, 5};
    vector<vector<int>> expected58 = vector<vector<int>>{vector<int>{-5, 1, 4}, vector<int>{-5, 2, 3}, vector<int>{-4, -1, 5}, vector<int>{-4, 1, 3}, vector<int>{-3, -2, 5}, vector<int>{-3, -1, 4}, vector<int>{-3, 1, 2}, vector<int>{-2, -1, 3}};

    // Test Case 60
    vector<int> nums59 = vector<int>{-1, -2, -3, 0, 1, 2, 3};
    vector<vector<int>> expected59 = vector<vector<int>>{vector<int>{-3, 0, 3}, vector<int>{-3, 1, 2}, vector<int>{-2, -1, 3}, vector<int>{-2, 0, 2}, vector<int>{-1, 0, 1}};

    // Test Case 61
    vector<int> nums60 = vector<int>{3, -3, 4, -4, 5, -5, 6, -6, 0};
    vector<vector<int>> expected60 = vector<vector<int>>{vector<int>{-6, 0, 6}, vector<int>{-5, 0, 5}, vector<int>{-4, 0, 4}, vector<int>{-3, 0, 3}};

    // Test Case 62
    vector<int> nums61 = vector<int>{0, 1, 2, 3, 4, 5, -1, -2, -3, -4, -5};
    vector<vector<int>> expected61 = vector<vector<int>>{vector<int>{-5, 0, 5}, vector<int>{-5, 1, 4}, vector<int>{-5, 2, 3}, vector<int>{-4, -1, 5}, vector<int>{-4, 0, 4}, vector<int>{-4, 1, 3}, vector<int>{-3, -2, 5}, vector<int>{-3, -1, 4}, vector<int>{-3, 0, 3}, vector<int>{-3, 1, 2}, vector<int>{-2, -1, 3}, vector<int>{-2, 0, 2}, vector<int>{-1, 0, 1}};

    // Test Case 63
    vector<int> nums62 = vector<int>{-6, -6, -4, -2, 0, 2, 4, 6, 6};
    vector<vector<int>> expected62 = vector<vector<int>>{vector<int>{-6, 0, 6}, vector<int>{-6, 2, 4}, vector<int>{-4, -2, 6}, vector<int>{-4, 0, 4}, vector<int>{-2, 0, 2}};

    // Test Case 64
    vector<int> nums63 = vector<int>{1, 2, 3, -6, 4, -1, -3, 2, 0};
    vector<vector<int>> expected63 = vector<vector<int>>{vector<int>{-6, 2, 4}, vector<int>{-3, -1, 4}, vector<int>{-3, 0, 3}, vector<int>{-3, 1, 2}, vector<int>{-1, 0, 1}};

    // Test Case 65
    vector<int> nums64 = vector<int>{-5, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    vector<vector<int>> expected64 = vector<vector<int>>{vector<int>{-5, -4, 9}, vector<int>{-5, -3, 8}, vector<int>{-5, -2, 7}, vector<int>{-5, -1, 6}, vector<int>{-5, 0, 5}, vector<int>{-5, 1, 4}, vector<int>{-5, 2, 3}, vector<int>{-4, -3, 7}, vector<int>{-4, -2, 6}, vector<int>{-4, -1, 5}, vector<int>{-4, 0, 4}, vector<int>{-4, 1, 3}, vector<int>{-3, -2, 5}, vector<int>{-3, -1, 4}, vector<int>{-3, 0, 3}, vector<int>{-3, 1, 2}, vector<int>{-2, -1, 3}, vector<int>{-2, 0, 2}, vector<int>{-1, 0, 1}};

    // Test Case 66
    vector<int> nums65 = vector<int>{2, 2, 2, 2, 2, -2, -2, -2, -2, -2};
    vector<vector<int>> expected65 = vector<vector<int>>{};

    // Test Case 67
    vector<int> nums66 = vector<int>{-5, -3, -1, 0, 0, 0, 0, 0, 1, 2, 3, 5};
    vector<vector<int>> expected66 = vector<vector<int>>{vector<int>{-5, 0, 5}, vector<int>{-5, 2, 3}, vector<int>{-3, 0, 3}, vector<int>{-3, 1, 2}, vector<int>{-1, 0, 1}, vector<int>{0, 0, 0}};

    // Test Case 68
    vector<int> nums67 = vector<int>{-10, -9, -8, -7, -6, -5, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<vector<int>> expected67 = vector<vector<int>>{vector<int>{-10, 0, 10}, vector<int>{-10, 1, 9}, vector<int>{-10, 2, 8}, vector<int>{-10, 3, 7}, vector<int>{-10, 4, 6}, vector<int>{-9, -1, 10}, vector<int>{-9, 0, 9}, vector<int>{-9, 1, 8}, vector<int>{-9, 2, 7}, vector<int>{-9, 3, 6}, vector<int>{-9, 4, 5}, vector<int>{-8, -2, 10}, vector<int>{-8, -1, 9}, vector<int>{-8, 0, 8}, vector<int>{-8, 1, 7}, vector<int>{-8, 2, 6}, vector<int>{-8, 3, 5}, vector<int>{-7, -3, 10}, vector<int>{-7, -2, 9}, vector<int>{-7, -1, 8}, vector<int>{-7, 0, 7}, vector<int>{-7, 1, 6}, vector<int>{-7, 2, 5}, vector<int>{-7, 3, 4}, vector<int>{-6, -4, 10}, vector<int>{-6, -3, 9}, vector<int>{-6, -2, 8}, vector<int>{-6, -1, 7}, vector<int>{-6, 0, 6}, vector<int>{-6, 1, 5}, vector<int>{-6, 2, 4}, vector<int>{-5, -4, 9}, vector<int>{-5, -3, 8}, vector<int>{-5, -2, 7}, vector<int>{-5, -1, 6}, vector<int>{-5, 0, 5}, vector<int>{-5, 1, 4}, vector<int>{-5, 2, 3}, vector<int>{-4, -3, 7}, vector<int>{-4, -2, 6}, vector<int>{-4, -1, 5}, vector<int>{-4, 0, 4}, vector<int>{-4, 1, 3}, vector<int>{-3, -2, 5}, vector<int>{-3, -1, 4}, vector<int>{-3, 0, 3}, vector<int>{-3, 1, 2}, vector<int>{-2, -1, 3}, vector<int>{-2, 0, 2}, vector<int>{-1, 0, 1}};

    // Test Case 69
    vector<int> nums68 = vector<int>{1, 2, 3, 4, 5, 6, -1, -2, -3, -4, -5, -6};
    vector<vector<int>> expected68 = vector<vector<int>>{vector<int>{-6, 1, 5}, vector<int>{-6, 2, 4}, vector<int>{-5, -1, 6}, vector<int>{-5, 1, 4}, vector<int>{-5, 2, 3}, vector<int>{-4, -2, 6}, vector<int>{-4, -1, 5}, vector<int>{-4, 1, 3}, vector<int>{-3, -2, 5}, vector<int>{-3, -1, 4}, vector<int>{-3, 1, 2}, vector<int>{-2, -1, 3}};

    // Test Case 70
    vector<int> nums69 = vector<int>{-3, -2, -1, 0, 1, 2, 3, 4, 5, 6};
    vector<vector<int>> expected69 = vector<vector<int>>{vector<int>{-3, -2, 5}, vector<int>{-3, -1, 4}, vector<int>{-3, 0, 3}, vector<int>{-3, 1, 2}, vector<int>{-2, -1, 3}, vector<int>{-2, 0, 2}, vector<int>{-1, 0, 1}};

    // Test Case 71
    vector<int> nums70 = vector<int>{-10, -5, -5, -3, -2, -1, 0, 1, 2, 3, 4, 5, 5, 6, 7, 8};
    vector<vector<int>> expected70 = vector<vector<int>>{vector<int>{-10, 2, 8}, vector<int>{-10, 3, 7}, vector<int>{-10, 4, 6}, vector<int>{-10, 5, 5}, vector<int>{-5, -3, 8}, vector<int>{-5, -2, 7}, vector<int>{-5, -1, 6}, vector<int>{-5, 0, 5}, vector<int>{-5, 1, 4}, vector<int>{-5, 2, 3}, vector<int>{-3, -2, 5}, vector<int>{-3, -1, 4}, vector<int>{-3, 0, 3}, vector<int>{-3, 1, 2}, vector<int>{-2, -1, 3}, vector<int>{-2, 0, 2}, vector<int>{-1, 0, 1}};

    // Test Case 72
    vector<int> nums71 = vector<int>{1, 2, -3, 4, -1, -2, 3, -4, 0, 0, 0, 0};
    vector<vector<int>> expected71 = vector<vector<int>>{vector<int>{-4, 0, 4}, vector<int>{-4, 1, 3}, vector<int>{-3, -1, 4}, vector<int>{-3, 0, 3}, vector<int>{-3, 1, 2}, vector<int>{-2, -1, 3}, vector<int>{-2, 0, 2}, vector<int>{-1, 0, 1}, vector<int>{0, 0, 0}};

    // Test Case 73
    vector<int> nums72 = vector<int>{-5, 2, 1, -2, 3, -1, 2, -3, 0, 0, 0};
    vector<vector<int>> expected72 = vector<vector<int>>{vector<int>{-5, 2, 3}, vector<int>{-3, 0, 3}, vector<int>{-3, 1, 2}, vector<int>{-2, -1, 3}, vector<int>{-2, 0, 2}, vector<int>{-1, 0, 1}, vector<int>{0, 0, 0}};

    // Test Case 74
    vector<int> nums73 = vector<int>{-3, -2, -1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, -4, -5, -6, -7, -8, -9};
    vector<vector<int>> expected73 = vector<vector<int>>{vector<int>{-9, 0, 9}, vector<int>{-9, 1, 8}, vector<int>{-9, 2, 7}, vector<int>{-9, 3, 6}, vector<int>{-9, 4, 5}, vector<int>{-8, -1, 9}, vector<int>{-8, 0, 8}, vector<int>{-8, 1, 7}, vector<int>{-8, 2, 6}, vector<int>{-8, 3, 5}, vector<int>{-7, -2, 9}, vector<int>{-7, -1, 8}, vector<int>{-7, 0, 7}, vector<int>{-7, 1, 6}, vector<int>{-7, 2, 5}, vector<int>{-7, 3, 4}, vector<int>{-6, -3, 9}, vector<int>{-6, -2, 8}, vector<int>{-6, -1, 7}, vector<int>{-6, 0, 6}, vector<int>{-6, 1, 5}, vector<int>{-6, 2, 4}, vector<int>{-5, -4, 9}, vector<int>{-5, -3, 8}, vector<int>{-5, -2, 7}, vector<int>{-5, -1, 6}, vector<int>{-5, 0, 5}, vector<int>{-5, 1, 4}, vector<int>{-5, 2, 3}, vector<int>{-4, -3, 7}, vector<int>{-4, -2, 6}, vector<int>{-4, -1, 5}, vector<int>{-4, 0, 4}, vector<int>{-4, 1, 3}, vector<int>{-3, -2, 5}, vector<int>{-3, -1, 4}, vector<int>{-3, 0, 3}, vector<int>{-3, 1, 2}, vector<int>{-2, -1, 3}, vector<int>{-2, 0, 2}, vector<int>{-1, 0, 1}};

    // Test Case 75
    vector<int> nums74 = vector<int>{-2, 0, 1, 1, 2, 3, 4, 5, -3, -4, -5, 6, 7, 8, 9, -6, -7, -8, -9};
    vector<vector<int>> expected74 = vector<vector<int>>{vector<int>{-9, 0, 9}, vector<int>{-9, 1, 8}, vector<int>{-9, 2, 7}, vector<int>{-9, 3, 6}, vector<int>{-9, 4, 5}, vector<int>{-8, 0, 8}, vector<int>{-8, 1, 7}, vector<int>{-8, 2, 6}, vector<int>{-8, 3, 5}, vector<int>{-7, -2, 9}, vector<int>{-7, 0, 7}, vector<int>{-7, 1, 6}, vector<int>{-7, 2, 5}, vector<int>{-7, 3, 4}, vector<int>{-6, -3, 9}, vector<int>{-6, -2, 8}, vector<int>{-6, 0, 6}, vector<int>{-6, 1, 5}, vector<int>{-6, 2, 4}, vector<int>{-5, -4, 9}, vector<int>{-5, -3, 8}, vector<int>{-5, -2, 7}, vector<int>{-5, 0, 5}, vector<int>{-5, 1, 4}, vector<int>{-5, 2, 3}, vector<int>{-4, -3, 7}, vector<int>{-4, -2, 6}, vector<int>{-4, 0, 4}, vector<int>{-4, 1, 3}, vector<int>{-3, -2, 5}, vector<int>{-3, 0, 3}, vector<int>{-3, 1, 2}, vector<int>{-2, 0, 2}, vector<int>{-2, 1, 1}};

    // Test Case 76
    vector<int> nums75 = vector<int>{3, -1, -3, 0, 1, 2, 4, -2, -4, 5, -5, 6, -6};
    vector<vector<int>> expected75 = vector<vector<int>>{vector<int>{-6, 0, 6}, vector<int>{-6, 1, 5}, vector<int>{-6, 2, 4}, vector<int>{-5, -1, 6}, vector<int>{-5, 0, 5}, vector<int>{-5, 1, 4}, vector<int>{-5, 2, 3}, vector<int>{-4, -2, 6}, vector<int>{-4, -1, 5}, vector<int>{-4, 0, 4}, vector<int>{-4, 1, 3}, vector<int>{-3, -2, 5}, vector<int>{-3, -1, 4}, vector<int>{-3, 0, 3}, vector<int>{-3, 1, 2}, vector<int>{-2, -1, 3}, vector<int>{-2, 0, 2}, vector<int>{-1, 0, 1}};

    // Test Case 77
    vector<int> nums76 = vector<int>{1, 1, 1, 1, -1, -1, -1, -1, 0, 0, 0, 0};
    vector<vector<int>> expected76 = vector<vector<int>>{vector<int>{-1, 0, 1}, vector<int>{0, 0, 0}};

    // Test Case 78
    vector<int> nums77 = vector<int>{-5, -3, -1, 0, 0, 0, 1, 3, 5};
    vector<vector<int>> expected77 = vector<vector<int>>{vector<int>{-5, 0, 5}, vector<int>{-3, 0, 3}, vector<int>{-1, 0, 1}, vector<int>{0, 0, 0}};

    // Test Case 79
    vector<int> nums78 = vector<int>{1, 2, -2, -1, 0, -1, 2};
    vector<vector<int>> expected78 = vector<vector<int>>{vector<int>{-2, 0, 2}, vector<int>{-1, -1, 2}, vector<int>{-1, 0, 1}};

    // Test Case 80
    vector<int> nums79 = vector<int>{-7, -5, -5, -1, 0, 1, 1, 5, 7};
    vector<vector<int>> expected79 = vector<vector<int>>{vector<int>{-7, 0, 7}, vector<int>{-5, 0, 5}, vector<int>{-1, 0, 1}};

    // Test Case 81
    vector<int> nums80 = vector<int>{-1, 0, 1, 0, 1, 0, -1, -1, -1, 0};
    vector<vector<int>> expected80 = vector<vector<int>>{vector<int>{-1, 0, 1}, vector<int>{0, 0, 0}};

    // Test Case 82
    vector<int> nums81 = vector<int>{1, 2, -2, -1, 0, 3, -3};
    vector<vector<int>> expected81 = vector<vector<int>>{vector<int>{-3, 0, 3}, vector<int>{-3, 1, 2}, vector<int>{-2, -1, 3}, vector<int>{-2, 0, 2}, vector<int>{-1, 0, 1}};

    // Test Case 83
    vector<int> nums82 = vector<int>{-1, -1, -1, 0, 0, 0, 1, 1, 1};
    vector<vector<int>> expected82 = vector<vector<int>>{vector<int>{-1, 0, 1}, vector<int>{0, 0, 0}};

    // Test Case 84
    vector<int> nums83 = vector<int>{1, 2, 3, 4, 5, -5, -4, -3, -2, -1};
    vector<vector<int>> expected83 = vector<vector<int>>{vector<int>{-5, 1, 4}, vector<int>{-5, 2, 3}, vector<int>{-4, -1, 5}, vector<int>{-4, 1, 3}, vector<int>{-3, -2, 5}, vector<int>{-3, -1, 4}, vector<int>{-3, 1, 2}, vector<int>{-2, -1, 3}};

    // Test Case 85
    vector<int> nums84 = vector<int>{-2, 0, 0, 0, 1, 1, 1, 2, 2, 3, 3, 3, 4, 4, 5, 5, 6, 6, 7, 7, 8, 8, 9, 9};
    vector<vector<int>> expected84 = vector<vector<int>>{vector<int>{-2, 0, 2}, vector<int>{-2, 1, 1}, vector<int>{0, 0, 0}};

    // Test Case 86
    vector<int> nums85 = vector<int>{1, -1, 2, -2, 3, -3, 4, -4, 5, -5};
    vector<vector<int>> expected85 = vector<vector<int>>{vector<int>{-5, 1, 4}, vector<int>{-5, 2, 3}, vector<int>{-4, -1, 5}, vector<int>{-4, 1, 3}, vector<int>{-3, -2, 5}, vector<int>{-3, -1, 4}, vector<int>{-3, 1, 2}, vector<int>{-2, -1, 3}};

    // Test Case 87
    vector<int> nums86 = vector<int>{0, 0, 0, 0, 0, 0};
    vector<vector<int>> expected86 = vector<vector<int>>{vector<int>{0, 0, 0}};

    // Test Case 88
    vector<int> nums87 = vector<int>{-4, -2, -2, -1, 0, 1, 2, 2, 4};
    vector<vector<int>> expected87 = vector<vector<int>>{vector<int>{-4, 0, 4}, vector<int>{-4, 2, 2}, vector<int>{-2, -2, 4}, vector<int>{-2, 0, 2}, vector<int>{-1, 0, 1}};

    // Test Case 89
    vector<int> nums88 = vector<int>{1, -1, 1, -1, 1, -1, 1, -1, 1, -1};
    vector<vector<int>> expected88 = vector<vector<int>>{};

    // Test Case 90
    vector<int> nums89 = vector<int>{-1, 0, 1, 2, -1, -4, 3, 4, -3, 2, -2, -5, 5};
    vector<vector<int>> expected89 = vector<vector<int>>{vector<int>{-5, 0, 5}, vector<int>{-5, 1, 4}, vector<int>{-5, 2, 3}, vector<int>{-4, -1, 5}, vector<int>{-4, 0, 4}, vector<int>{-4, 1, 3}, vector<int>{-4, 2, 2}, vector<int>{-3, -2, 5}, vector<int>{-3, -1, 4}, vector<int>{-3, 0, 3}, vector<int>{-3, 1, 2}, vector<int>{-2, -1, 3}, vector<int>{-2, 0, 2}, vector<int>{-1, -1, 2}, vector<int>{-1, 0, 1}};

    // Test Case 91
    vector<int> nums90 = vector<int>{1, 1, 1, 1, 1, 1, -1, -1, -1, -1, -1, -1};
    vector<vector<int>> expected90 = vector<vector<int>>{};

    // Test Case 92
    vector<int> nums91 = vector<int>{-6, -5, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5, 6};
    vector<vector<int>> expected91 = vector<vector<int>>{vector<int>{-6, 0, 6}, vector<int>{-6, 1, 5}, vector<int>{-6, 2, 4}, vector<int>{-5, -1, 6}, vector<int>{-5, 0, 5}, vector<int>{-5, 1, 4}, vector<int>{-5, 2, 3}, vector<int>{-4, -2, 6}, vector<int>{-4, -1, 5}, vector<int>{-4, 0, 4}, vector<int>{-4, 1, 3}, vector<int>{-3, -2, 5}, vector<int>{-3, -1, 4}, vector<int>{-3, 0, 3}, vector<int>{-3, 1, 2}, vector<int>{-2, -1, 3}, vector<int>{-2, 0, 2}, vector<int>{-1, 0, 1}};

    // Test Case 93
    vector<int> nums92 = vector<int>{-4, -2, 1, -5, -4, -4, 4, -2, 0, 4, 0, -2, 3, 1, -5, 0};
    vector<vector<int>> expected92 = vector<vector<int>>{vector<int>{-5, 1, 4}, vector<int>{-4, 0, 4}, vector<int>{-4, 1, 3}, vector<int>{-2, -2, 4}, vector<int>{-2, 1, 1}, vector<int>{0, 0, 0}};

    // Test Case 94
    vector<int> nums93 = vector<int>{-1, 2, 1, -4, 3, 0, -2, 1, 1, -1, 0, 0, 0, 0, 0};
    vector<vector<int>> expected93 = vector<vector<int>>{vector<int>{-4, 1, 3}, vector<int>{-2, -1, 3}, vector<int>{-2, 0, 2}, vector<int>{-2, 1, 1}, vector<int>{-1, -1, 2}, vector<int>{-1, 0, 1}, vector<int>{0, 0, 0}};

    // Test Case 95
    vector<int> nums94 = vector<int>{-1, 2, 1, -4, 3, 0, -2, 2, 1, -1, -3, 3};
    vector<vector<int>> expected94 = vector<vector<int>>{vector<int>{-4, 1, 3}, vector<int>{-4, 2, 2}, vector<int>{-3, 0, 3}, vector<int>{-3, 1, 2}, vector<int>{-2, -1, 3}, vector<int>{-2, 0, 2}, vector<int>{-2, 1, 1}, vector<int>{-1, -1, 2}, vector<int>{-1, 0, 1}};

    // Test Case 96
    vector<int> nums95 = vector<int>{-5, -3, -1, 0, 2, 4, 6};
    vector<vector<int>> expected95 = vector<vector<int>>{vector<int>{-5, -1, 6}, vector<int>{-3, -1, 4}};

    // Test Case 97
    vector<int> nums96 = vector<int>{1, 2, -2, -1, 0, -4, 3, 4, 5};
    vector<vector<int>> expected96 = vector<vector<int>>{vector<int>{-4, -1, 5}, vector<int>{-4, 0, 4}, vector<int>{-4, 1, 3}, vector<int>{-2, -1, 3}, vector<int>{-2, 0, 2}, vector<int>{-1, 0, 1}};
    // Auto-generated test cases:
    LeetCodeTestHarness::assertEqual(expected0, solution.threeSum(nums0), 0);

    LeetCodeTestHarness::assertEqual(expected1, solution.threeSum(nums1), 1);

    LeetCodeTestHarness::assertEqual(expected2, solution.threeSum(nums2), 2);

    LeetCodeTestHarness::assertEqual(expected3, solution.threeSum(nums3), 3);

    LeetCodeTestHarness::assertEqual(expected4, solution.threeSum(nums4), 4);

    LeetCodeTestHarness::assertEqual(expected5, solution.threeSum(nums5), 5);

    LeetCodeTestHarness::assertEqual(expected6, solution.threeSum(nums6), 6);

    LeetCodeTestHarness::assertEqual(expected7, solution.threeSum(nums7), 7);

    LeetCodeTestHarness::assertEqual(expected8, solution.threeSum(nums8), 8);

    LeetCodeTestHarness::assertEqual(expected9, solution.threeSum(nums9), 9);

    LeetCodeTestHarness::assertEqual(expected10, solution.threeSum(nums10), 10);

    LeetCodeTestHarness::assertEqual(expected11, solution.threeSum(nums11), 11);

    LeetCodeTestHarness::assertEqual(expected12, solution.threeSum(nums12), 12);

    LeetCodeTestHarness::assertEqual(expected13, solution.threeSum(nums13), 13);

    LeetCodeTestHarness::assertEqual(expected14, solution.threeSum(nums14), 14);

    LeetCodeTestHarness::assertEqual(expected15, solution.threeSum(nums15), 15);

    LeetCodeTestHarness::assertEqual(expected16, solution.threeSum(nums16), 16);

    LeetCodeTestHarness::assertEqual(expected17, solution.threeSum(nums17), 17);

    LeetCodeTestHarness::assertEqual(expected18, solution.threeSum(nums18), 18);

    LeetCodeTestHarness::assertEqual(expected19, solution.threeSum(nums19), 19);

    LeetCodeTestHarness::assertEqual(expected20, solution.threeSum(nums20), 20);

    LeetCodeTestHarness::assertEqual(expected21, solution.threeSum(nums21), 21);

    LeetCodeTestHarness::assertEqual(expected22, solution.threeSum(nums22), 22);

    LeetCodeTestHarness::assertEqual(expected23, solution.threeSum(nums23), 23);

    LeetCodeTestHarness::assertEqual(expected24, solution.threeSum(nums24), 24);

    LeetCodeTestHarness::assertEqual(expected25, solution.threeSum(nums25), 25);

    LeetCodeTestHarness::assertEqual(expected26, solution.threeSum(nums26), 26);

    LeetCodeTestHarness::assertEqual(expected27, solution.threeSum(nums27), 27);

    LeetCodeTestHarness::assertEqual(expected28, solution.threeSum(nums28), 28);

    LeetCodeTestHarness::assertEqual(expected29, solution.threeSum(nums29), 29);

    LeetCodeTestHarness::assertEqual(expected30, solution.threeSum(nums30), 30);

    LeetCodeTestHarness::assertEqual(expected31, solution.threeSum(nums31), 31);

    LeetCodeTestHarness::assertEqual(expected32, solution.threeSum(nums32), 32);

    LeetCodeTestHarness::assertEqual(expected33, solution.threeSum(nums33), 33);

    LeetCodeTestHarness::assertEqual(expected34, solution.threeSum(nums34), 34);

    LeetCodeTestHarness::assertEqual(expected35, solution.threeSum(nums35), 35);

    LeetCodeTestHarness::assertEqual(expected36, solution.threeSum(nums36), 36);

    LeetCodeTestHarness::assertEqual(expected37, solution.threeSum(nums37), 37);

    LeetCodeTestHarness::assertEqual(expected38, solution.threeSum(nums38), 38);

    LeetCodeTestHarness::assertEqual(expected39, solution.threeSum(nums39), 39);

    LeetCodeTestHarness::assertEqual(expected40, solution.threeSum(nums40), 40);

    LeetCodeTestHarness::assertEqual(expected41, solution.threeSum(nums41), 41);

    LeetCodeTestHarness::assertEqual(expected42, solution.threeSum(nums42), 42);

    LeetCodeTestHarness::assertEqual(expected43, solution.threeSum(nums43), 43);

    LeetCodeTestHarness::assertEqual(expected44, solution.threeSum(nums44), 44);

    LeetCodeTestHarness::assertEqual(expected45, solution.threeSum(nums45), 45);

    LeetCodeTestHarness::assertEqual(expected46, solution.threeSum(nums46), 46);

    LeetCodeTestHarness::assertEqual(expected47, solution.threeSum(nums47), 47);

    LeetCodeTestHarness::assertEqual(expected48, solution.threeSum(nums48), 48);

    LeetCodeTestHarness::assertEqual(expected49, solution.threeSum(nums49), 49);

    LeetCodeTestHarness::assertEqual(expected50, solution.threeSum(nums50), 50);

    LeetCodeTestHarness::assertEqual(expected51, solution.threeSum(nums51), 51);

    LeetCodeTestHarness::assertEqual(expected52, solution.threeSum(nums52), 52);

    LeetCodeTestHarness::assertEqual(expected53, solution.threeSum(nums53), 53);

    LeetCodeTestHarness::assertEqual(expected54, solution.threeSum(nums54), 54);

    LeetCodeTestHarness::assertEqual(expected55, solution.threeSum(nums55), 55);

    LeetCodeTestHarness::assertEqual(expected56, solution.threeSum(nums56), 56);

    LeetCodeTestHarness::assertEqual(expected57, solution.threeSum(nums57), 57);

    LeetCodeTestHarness::assertEqual(expected58, solution.threeSum(nums58), 58);

    LeetCodeTestHarness::assertEqual(expected59, solution.threeSum(nums59), 59);

    LeetCodeTestHarness::assertEqual(expected60, solution.threeSum(nums60), 60);

    LeetCodeTestHarness::assertEqual(expected61, solution.threeSum(nums61), 61);

    LeetCodeTestHarness::assertEqual(expected62, solution.threeSum(nums62), 62);

    LeetCodeTestHarness::assertEqual(expected63, solution.threeSum(nums63), 63);

    LeetCodeTestHarness::assertEqual(expected64, solution.threeSum(nums64), 64);

    LeetCodeTestHarness::assertEqual(expected65, solution.threeSum(nums65), 65);

    LeetCodeTestHarness::assertEqual(expected66, solution.threeSum(nums66), 66);

    LeetCodeTestHarness::assertEqual(expected67, solution.threeSum(nums67), 67);

    LeetCodeTestHarness::assertEqual(expected68, solution.threeSum(nums68), 68);

    LeetCodeTestHarness::assertEqual(expected69, solution.threeSum(nums69), 69);

    LeetCodeTestHarness::assertEqual(expected70, solution.threeSum(nums70), 70);

    LeetCodeTestHarness::assertEqual(expected71, solution.threeSum(nums71), 71);

    LeetCodeTestHarness::assertEqual(expected72, solution.threeSum(nums72), 72);

    LeetCodeTestHarness::assertEqual(expected73, solution.threeSum(nums73), 73);

    LeetCodeTestHarness::assertEqual(expected74, solution.threeSum(nums74), 74);

    LeetCodeTestHarness::assertEqual(expected75, solution.threeSum(nums75), 75);

    LeetCodeTestHarness::assertEqual(expected76, solution.threeSum(nums76), 76);

    LeetCodeTestHarness::assertEqual(expected77, solution.threeSum(nums77), 77);

    LeetCodeTestHarness::assertEqual(expected78, solution.threeSum(nums78), 78);

    LeetCodeTestHarness::assertEqual(expected79, solution.threeSum(nums79), 79);

    LeetCodeTestHarness::assertEqual(expected80, solution.threeSum(nums80), 80);

    LeetCodeTestHarness::assertEqual(expected81, solution.threeSum(nums81), 81);

    LeetCodeTestHarness::assertEqual(expected82, solution.threeSum(nums82), 82);

    LeetCodeTestHarness::assertEqual(expected83, solution.threeSum(nums83), 83);

    LeetCodeTestHarness::assertEqual(expected84, solution.threeSum(nums84), 84);

    LeetCodeTestHarness::assertEqual(expected85, solution.threeSum(nums85), 85);

    LeetCodeTestHarness::assertEqual(expected86, solution.threeSum(nums86), 86);

    LeetCodeTestHarness::assertEqual(expected87, solution.threeSum(nums87), 87);

    LeetCodeTestHarness::assertEqual(expected88, solution.threeSum(nums88), 88);

    LeetCodeTestHarness::assertEqual(expected89, solution.threeSum(nums89), 89);

    LeetCodeTestHarness::assertEqual(expected90, solution.threeSum(nums90), 90);

    LeetCodeTestHarness::assertEqual(expected91, solution.threeSum(nums91), 91);

    LeetCodeTestHarness::assertEqual(expected92, solution.threeSum(nums92), 92);

    LeetCodeTestHarness::assertEqual(expected93, solution.threeSum(nums93), 93);

    LeetCodeTestHarness::assertEqual(expected94, solution.threeSum(nums94), 94);

    LeetCodeTestHarness::assertEqual(expected95, solution.threeSum(nums95), 95);

    LeetCodeTestHarness::assertEqual(expected96, solution.threeSum(nums96), 96);

    std::cout << "All tests for 3Sum passed!" << std::endl;
    return 0;
}
