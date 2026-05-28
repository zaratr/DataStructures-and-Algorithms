#include <iostream>
#include <vector>
#include <string>
#include <cassert>
#include "../support/GeneratedLeetCodeTestHarness.hpp"
#include "c:/Users/zarat/IdeaProjects/DataStructures-and-Algorithms/leetcode-questions/cpp/src/main/cpp/com/leetcode/questions/leetcode/editor/en/InsertInterval.cpp"

int main() {
    Solution solution;
    // Test Case 1
    vector<vector<int>> intervals0 = vector<vector<int>>{vector<int>{1, 3}, vector<int>{6, 9}};
    vector<int> newInterval0 = vector<int>{2, 5};
    vector<vector<int>> expected0 = vector<vector<int>>{vector<int>{1, 5}, vector<int>{6, 9}};

    // Test Case 2
    vector<vector<int>> intervals1 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{3, 5}, vector<int>{6, 7}, vector<int>{8, 10}, vector<int>{12, 16}};
    vector<int> newInterval1 = vector<int>{4, 8};
    vector<vector<int>> expected1 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{3, 10}, vector<int>{12, 16}};

    // Test Case 3
    vector<vector<int>> intervals2 = vector<vector<int>>{vector<int>{1, 5}};
    vector<int> newInterval2 = vector<int>{2, 3};
    vector<vector<int>> expected2 = vector<vector<int>>{vector<int>{1, 5}};

    // Test Case 4
    vector<vector<int>> intervals3 = vector<vector<int>>{vector<int>{1, 5}};
    vector<int> newInterval3 = vector<int>{0, 3};
    vector<vector<int>> expected3 = vector<vector<int>>{vector<int>{0, 5}};

    // Test Case 5
    vector<vector<int>> intervals4 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{3, 10}, vector<int>{12, 16}};
    vector<int> newInterval4 = vector<int>{10, 11};
    vector<vector<int>> expected4 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{3, 11}, vector<int>{12, 16}};

    // Test Case 6
    vector<vector<int>> intervals5 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{3, 4}, vector<int>{5, 6}, vector<int>{7, 8}};
    vector<int> newInterval5 = vector<int>{1, 8};
    vector<vector<int>> expected5 = vector<vector<int>>{vector<int>{1, 8}};

    // Test Case 7
    vector<vector<int>> intervals6 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{3, 5}, vector<int>{6, 7}, vector<int>{8, 10}, vector<int>{12, 16}};
    vector<int> newInterval6 = vector<int>{13, 14};
    vector<vector<int>> expected6 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{3, 5}, vector<int>{6, 7}, vector<int>{8, 10}, vector<int>{12, 16}};

    // Test Case 8
    vector<vector<int>> intervals7 = vector<vector<int>>{vector<int>{1, 3}, vector<int>{5, 7}};
    vector<int> newInterval7 = vector<int>{4, 4};
    vector<vector<int>> expected7 = vector<vector<int>>{vector<int>{1, 3}, vector<int>{4, 4}, vector<int>{5, 7}};

    // Test Case 9
    vector<vector<int>> intervals8 = vector<vector<int>>{};
    vector<int> newInterval8 = vector<int>{5, 7};
    vector<vector<int>> expected8 = vector<vector<int>>{vector<int>{5, 7}};

    // Test Case 10
    vector<vector<int>> intervals9 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{3, 4}, vector<int>{5, 6}, vector<int>{7, 8}};
    vector<int> newInterval9 = vector<int>{0, 9};
    vector<vector<int>> expected9 = vector<vector<int>>{vector<int>{0, 9}};

    // Test Case 11
    vector<vector<int>> intervals10 = vector<vector<int>>{vector<int>{1, 3}, vector<int>{6, 9}};
    vector<int> newInterval10 = vector<int>{10, 12};
    vector<vector<int>> expected10 = vector<vector<int>>{vector<int>{1, 3}, vector<int>{6, 9}, vector<int>{10, 12}};

    // Test Case 12
    vector<vector<int>> intervals11 = vector<vector<int>>{vector<int>{1, 3}, vector<int>{5, 7}};
    vector<int> newInterval11 = vector<int>{4, 6};
    vector<vector<int>> expected11 = vector<vector<int>>{vector<int>{1, 3}, vector<int>{4, 7}};

    // Test Case 13
    vector<vector<int>> intervals12 = vector<vector<int>>{vector<int>{1, 5}};
    vector<int> newInterval12 = vector<int>{0, 0};
    vector<vector<int>> expected12 = vector<vector<int>>{vector<int>{0, 0}, vector<int>{1, 5}};

    // Test Case 14
    vector<vector<int>> intervals13 = vector<vector<int>>{vector<int>{1, 5}};
    vector<int> newInterval13 = vector<int>{6, 8};
    vector<vector<int>> expected13 = vector<vector<int>>{vector<int>{1, 5}, vector<int>{6, 8}};

    // Test Case 15
    vector<vector<int>> intervals14 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{5, 6}, vector<int>{9, 10}, vector<int>{14, 15}, vector<int>{19, 20}};
    vector<int> newInterval14 = vector<int>{3, 18};
    vector<vector<int>> expected14 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{3, 18}, vector<int>{19, 20}};

    // Test Case 16
    vector<vector<int>> intervals15 = vector<vector<int>>{vector<int>{1, 3}, vector<int>{8, 10}, vector<int>{15, 17}};
    vector<int> newInterval15 = vector<int>{4, 6};
    vector<vector<int>> expected15 = vector<vector<int>>{vector<int>{1, 3}, vector<int>{4, 6}, vector<int>{8, 10}, vector<int>{15, 17}};

    // Test Case 17
    vector<vector<int>> intervals16 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{3, 4}, vector<int>{5, 6}, vector<int>{7, 8}, vector<int>{9, 10}};
    vector<int> newInterval16 = vector<int>{1, 3};
    vector<vector<int>> expected16 = vector<vector<int>>{vector<int>{1, 4}, vector<int>{5, 6}, vector<int>{7, 8}, vector<int>{9, 10}};

    // Test Case 18
    vector<vector<int>> intervals17 = vector<vector<int>>{vector<int>{1, 5}, vector<int>{10, 15}, vector<int>{20, 25}, vector<int>{30, 35}};
    vector<int> newInterval17 = vector<int>{6, 14};
    vector<vector<int>> expected17 = vector<vector<int>>{vector<int>{1, 5}, vector<int>{6, 15}, vector<int>{20, 25}, vector<int>{30, 35}};

    // Test Case 19
    vector<vector<int>> intervals18 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{4, 5}, vector<int>{7, 8}};
    vector<int> newInterval18 = vector<int>{3, 3};
    vector<vector<int>> expected18 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{3, 3}, vector<int>{4, 5}, vector<int>{7, 8}};

    // Test Case 20
    vector<vector<int>> intervals19 = vector<vector<int>>{vector<int>{2, 3}, vector<int>{5, 6}, vector<int>{8, 9}, vector<int>{11, 12}, vector<int>{14, 15}};
    vector<int> newInterval19 = vector<int>{7, 13};
    vector<vector<int>> expected19 = vector<vector<int>>{vector<int>{2, 3}, vector<int>{5, 6}, vector<int>{7, 13}, vector<int>{14, 15}};

    // Test Case 21
    vector<vector<int>> intervals20 = vector<vector<int>>{};
    vector<int> newInterval20 = vector<int>{0, 0};
    vector<vector<int>> expected20 = vector<vector<int>>{vector<int>{0, 0}};

    // Test Case 22
    vector<vector<int>> intervals21 = vector<vector<int>>{vector<int>{1, 3}, vector<int>{4, 6}, vector<int>{8, 10}, vector<int>{12, 14}, vector<int>{16, 18}};
    vector<int> newInterval21 = vector<int>{14, 16};
    vector<vector<int>> expected21 = vector<vector<int>>{vector<int>{1, 3}, vector<int>{4, 6}, vector<int>{8, 10}, vector<int>{12, 18}};

    // Test Case 23
    vector<vector<int>> intervals22 = vector<vector<int>>{vector<int>{1, 3}, vector<int>{5, 7}, vector<int>{9, 11}, vector<int>{13, 15}, vector<int>{17, 19}};
    vector<int> newInterval22 = vector<int>{2, 16};
    vector<vector<int>> expected22 = vector<vector<int>>{vector<int>{1, 16}, vector<int>{17, 19}};

    // Test Case 24
    vector<vector<int>> intervals23 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{3, 4}, vector<int>{5, 6}, vector<int>{7, 8}, vector<int>{9, 10}, vector<int>{11, 12}, vector<int>{13, 14}, vector<int>{15, 16}, vector<int>{17, 18}, vector<int>{19, 20}};
    vector<int> newInterval23 = vector<int>{1, 18};
    vector<vector<int>> expected23 = vector<vector<int>>{vector<int>{1, 18}, vector<int>{19, 20}};

    // Test Case 25
    vector<vector<int>> intervals24 = vector<vector<int>>{vector<int>{1, 4}, vector<int>{7, 10}, vector<int>{12, 16}, vector<int>{20, 24}};
    vector<int> newInterval24 = vector<int>{5, 18};
    vector<vector<int>> expected24 = vector<vector<int>>{vector<int>{1, 4}, vector<int>{5, 18}, vector<int>{20, 24}};

    // Test Case 26
    vector<vector<int>> intervals25 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{6, 7}, vector<int>{11, 12}};
    vector<int> newInterval25 = vector<int>{5, 6};
    vector<vector<int>> expected25 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{5, 7}, vector<int>{11, 12}};

    // Test Case 27
    vector<vector<int>> intervals26 = vector<vector<int>>{vector<int>{1, 3}, vector<int>{5, 7}, vector<int>{8, 10}, vector<int>{12, 14}, vector<int>{16, 18}};
    vector<int> newInterval26 = vector<int>{0, 20};
    vector<vector<int>> expected26 = vector<vector<int>>{vector<int>{0, 20}};

    // Test Case 28
    vector<vector<int>> intervals27 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{3, 4}, vector<int>{5, 6}, vector<int>{7, 8}, vector<int>{9, 10}, vector<int>{11, 12}, vector<int>{13, 14}, vector<int>{15, 16}, vector<int>{17, 18}, vector<int>{19, 20}};
    vector<int> newInterval27 = vector<int>{0, 20};
    vector<vector<int>> expected27 = vector<vector<int>>{vector<int>{0, 20}};

    // Test Case 29
    vector<vector<int>> intervals28 = vector<vector<int>>{vector<int>{1, 3}, vector<int>{5, 7}, vector<int>{8, 10}, vector<int>{12, 14}, vector<int>{16, 18}};
    vector<int> newInterval28 = vector<int>{4, 11};
    vector<vector<int>> expected28 = vector<vector<int>>{vector<int>{1, 3}, vector<int>{4, 11}, vector<int>{12, 14}, vector<int>{16, 18}};

    // Test Case 30
    vector<vector<int>> intervals29 = vector<vector<int>>{vector<int>{1, 4}, vector<int>{9, 10}, vector<int>{11, 12}, vector<int>{13, 14}};
    vector<int> newInterval29 = vector<int>{5, 13};
    vector<vector<int>> expected29 = vector<vector<int>>{vector<int>{1, 4}, vector<int>{5, 14}};

    // Test Case 31
    vector<vector<int>> intervals30 = vector<vector<int>>{vector<int>{0, 2}, vector<int>{3, 6}, vector<int>{8, 10}, vector<int>{12, 14}, vector<int>{16, 19}};
    vector<int> newInterval30 = vector<int>{1, 18};
    vector<vector<int>> expected30 = vector<vector<int>>{vector<int>{0, 19}};

    // Test Case 32
    vector<vector<int>> intervals31 = vector<vector<int>>{vector<int>{1, 2}};
    vector<int> newInterval31 = vector<int>{3, 4};
    vector<vector<int>> expected31 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{3, 4}};

    // Test Case 33
    vector<vector<int>> intervals32 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{3, 4}, vector<int>{5, 6}, vector<int>{7, 8}, vector<int>{9, 10}, vector<int>{11, 12}, vector<int>{13, 14}};
    vector<int> newInterval32 = vector<int>{1, 14};
    vector<vector<int>> expected32 = vector<vector<int>>{vector<int>{1, 14}};

    // Test Case 34
    vector<vector<int>> intervals33 = vector<vector<int>>{vector<int>{5, 10}, vector<int>{15, 20}, vector<int>{25, 30}, vector<int>{35, 40}};
    vector<int> newInterval33 = vector<int>{22, 28};
    vector<vector<int>> expected33 = vector<vector<int>>{vector<int>{5, 10}, vector<int>{15, 20}, vector<int>{22, 30}, vector<int>{35, 40}};

    // Test Case 35
    vector<vector<int>> intervals34 = vector<vector<int>>{vector<int>{1, 3}, vector<int>{8, 10}, vector<int>{15, 17}, vector<int>{20, 22}};
    vector<int> newInterval34 = vector<int>{4, 9};
    vector<vector<int>> expected34 = vector<vector<int>>{vector<int>{1, 3}, vector<int>{4, 10}, vector<int>{15, 17}, vector<int>{20, 22}};

    // Test Case 36
    vector<vector<int>> intervals35 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{3, 6}, vector<int>{8, 10}, vector<int>{12, 15}};
    vector<int> newInterval35 = vector<int>{7, 9};
    vector<vector<int>> expected35 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{3, 6}, vector<int>{7, 10}, vector<int>{12, 15}};

    // Test Case 37
    vector<vector<int>> intervals36 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{3, 4}, vector<int>{5, 6}, vector<int>{7, 8}, vector<int>{9, 10}};
    vector<int> newInterval36 = vector<int>{11, 15};
    vector<vector<int>> expected36 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{3, 4}, vector<int>{5, 6}, vector<int>{7, 8}, vector<int>{9, 10}, vector<int>{11, 15}};

    // Test Case 38
    vector<vector<int>> intervals37 = vector<vector<int>>{vector<int>{1, 3}, vector<int>{5, 7}, vector<int>{9, 11}, vector<int>{13, 15}, vector<int>{17, 19}};
    vector<int> newInterval37 = vector<int>{2, 18};
    vector<vector<int>> expected37 = vector<vector<int>>{vector<int>{1, 19}};

    // Test Case 39
    vector<vector<int>> intervals38 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{4, 7}, vector<int>{8, 10}, vector<int>{12, 15}, vector<int>{17, 20}};
    vector<int> newInterval38 = vector<int>{3, 18};
    vector<vector<int>> expected38 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{3, 20}};

    // Test Case 40
    vector<vector<int>> intervals39 = vector<vector<int>>{vector<int>{1, 100}, vector<int>{200, 300}, vector<int>{400, 500}};
    vector<int> newInterval39 = vector<int>{150, 250};
    vector<vector<int>> expected39 = vector<vector<int>>{vector<int>{1, 100}, vector<int>{150, 300}, vector<int>{400, 500}};

    // Test Case 41
    vector<vector<int>> intervals40 = vector<vector<int>>{vector<int>{1, 5}, vector<int>{10, 15}, vector<int>{20, 25}, vector<int>{30, 35}};
    vector<int> newInterval40 = vector<int>{5, 30};
    vector<vector<int>> expected40 = vector<vector<int>>{vector<int>{1, 35}};

    // Test Case 42
    vector<vector<int>> intervals41 = vector<vector<int>>{vector<int>{1, 3}, vector<int>{5, 8}, vector<int>{10, 15}, vector<int>{16, 20}};
    vector<int> newInterval41 = vector<int>{4, 18};
    vector<vector<int>> expected41 = vector<vector<int>>{vector<int>{1, 3}, vector<int>{4, 20}};

    // Test Case 43
    vector<vector<int>> intervals42 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{3, 5}, vector<int>{6, 7}, vector<int>{8, 10}, vector<int>{12, 16}, vector<int>{19, 20}};
    vector<int> newInterval42 = vector<int>{10, 19};
    vector<vector<int>> expected42 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{3, 5}, vector<int>{6, 7}, vector<int>{8, 20}};

    // Test Case 44
    vector<vector<int>> intervals43 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{3, 5}, vector<int>{6, 7}, vector<int>{8, 10}, vector<int>{12, 16}};
    vector<int> newInterval43 = vector<int>{2, 16};
    vector<vector<int>> expected43 = vector<vector<int>>{vector<int>{1, 16}};

    // Test Case 45
    vector<vector<int>> intervals44 = vector<vector<int>>{vector<int>{1, 3}, vector<int>{5, 7}, vector<int>{8, 10}, vector<int>{12, 14}, vector<int>{16, 18}};
    vector<int> newInterval44 = vector<int>{17, 20};
    vector<vector<int>> expected44 = vector<vector<int>>{vector<int>{1, 3}, vector<int>{5, 7}, vector<int>{8, 10}, vector<int>{12, 14}, vector<int>{16, 20}};

    // Test Case 46
    vector<vector<int>> intervals45 = vector<vector<int>>{vector<int>{1, 3}, vector<int>{6, 9}, vector<int>{12, 15}, vector<int>{18, 21}, vector<int>{24, 27}};
    vector<int> newInterval45 = vector<int>{5, 20};
    vector<vector<int>> expected45 = vector<vector<int>>{vector<int>{1, 3}, vector<int>{5, 21}, vector<int>{24, 27}};

    // Test Case 47
    vector<vector<int>> intervals46 = vector<vector<int>>{vector<int>{1, 3}, vector<int>{5, 7}, vector<int>{9, 11}, vector<int>{13, 15}, vector<int>{17, 19}};
    vector<int> newInterval46 = vector<int>{8, 14};
    vector<vector<int>> expected46 = vector<vector<int>>{vector<int>{1, 3}, vector<int>{5, 7}, vector<int>{8, 15}, vector<int>{17, 19}};

    // Test Case 48
    vector<vector<int>> intervals47 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{5, 6}, vector<int>{9, 10}, vector<int>{13, 14}, vector<int>{17, 18}};
    vector<int> newInterval47 = vector<int>{3, 15};
    vector<vector<int>> expected47 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{3, 15}, vector<int>{17, 18}};

    // Test Case 49
    vector<vector<int>> intervals48 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{3, 5}, vector<int>{6, 7}, vector<int>{8, 10}, vector<int>{12, 16}};
    vector<int> newInterval48 = vector<int>{17, 20};
    vector<vector<int>> expected48 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{3, 5}, vector<int>{6, 7}, vector<int>{8, 10}, vector<int>{12, 16}, vector<int>{17, 20}};

    // Test Case 50
    vector<vector<int>> intervals49 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{3, 5}, vector<int>{6, 7}, vector<int>{8, 10}, vector<int>{12, 16}};
    vector<int> newInterval49 = vector<int>{7, 15};
    vector<vector<int>> expected49 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{3, 5}, vector<int>{6, 16}};

    // Test Case 51
    vector<vector<int>> intervals50 = vector<vector<int>>{};
    vector<int> newInterval50 = vector<int>{1, 5};
    vector<vector<int>> expected50 = vector<vector<int>>{vector<int>{1, 5}};

    // Test Case 52
    vector<vector<int>> intervals51 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{3, 4}, vector<int>{5, 6}, vector<int>{7, 8}, vector<int>{9, 10}};
    vector<int> newInterval51 = vector<int>{0, 15};
    vector<vector<int>> expected51 = vector<vector<int>>{vector<int>{0, 15}};

    // Test Case 53
    vector<vector<int>> intervals52 = vector<vector<int>>{vector<int>{1, 3}, vector<int>{5, 7}, vector<int>{8, 10}, vector<int>{12, 14}};
    vector<int> newInterval52 = vector<int>{4, 11};
    vector<vector<int>> expected52 = vector<vector<int>>{vector<int>{1, 3}, vector<int>{4, 11}, vector<int>{12, 14}};

    // Test Case 54
    vector<vector<int>> intervals53 = vector<vector<int>>{vector<int>{1, 10}, vector<int>{20, 30}, vector<int>{40, 50}};
    vector<int> newInterval53 = vector<int>{15, 25};
    vector<vector<int>> expected53 = vector<vector<int>>{vector<int>{1, 10}, vector<int>{15, 30}, vector<int>{40, 50}};

    // Test Case 55
    vector<vector<int>> intervals54 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{3, 5}, vector<int>{6, 7}, vector<int>{8, 10}, vector<int>{12, 16}};
    vector<int> newInterval54 = vector<int>{3, 12};
    vector<vector<int>> expected54 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{3, 16}};

    // Test Case 56
    vector<vector<int>> intervals55 = vector<vector<int>>{vector<int>{1, 10000}};
    vector<int> newInterval55 = vector<int>{5000, 15000};
    vector<vector<int>> expected55 = vector<vector<int>>{vector<int>{1, 15000}};

    // Test Case 57
    vector<vector<int>> intervals56 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{4, 5}, vector<int>{6, 8}, vector<int>{9, 10}, vector<int>{12, 14}, vector<int>{16, 18}};
    vector<int> newInterval56 = vector<int>{3, 13};
    vector<vector<int>> expected56 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{3, 14}, vector<int>{16, 18}};

    // Test Case 58
    vector<vector<int>> intervals57 = vector<vector<int>>{vector<int>{1, 5}, vector<int>{10, 15}, vector<int>{20, 25}, vector<int>{30, 35}};
    vector<int> newInterval57 = vector<int>{18, 22};
    vector<vector<int>> expected57 = vector<vector<int>>{vector<int>{1, 5}, vector<int>{10, 15}, vector<int>{18, 25}, vector<int>{30, 35}};

    // Test Case 59
    vector<vector<int>> intervals58 = vector<vector<int>>{vector<int>{5, 7}, vector<int>{10, 12}, vector<int>{15, 17}, vector<int>{20, 22}};
    vector<int> newInterval58 = vector<int>{8, 19};
    vector<vector<int>> expected58 = vector<vector<int>>{vector<int>{5, 7}, vector<int>{8, 19}, vector<int>{20, 22}};

    // Test Case 60
    vector<vector<int>> intervals59 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{3, 4}, vector<int>{5, 6}, vector<int>{7, 8}, vector<int>{9, 10}, vector<int>{11, 12}, vector<int>{13, 14}, vector<int>{15, 16}, vector<int>{17, 18}, vector<int>{19, 20}};
    vector<int> newInterval59 = vector<int>{3, 17};
    vector<vector<int>> expected59 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{3, 18}, vector<int>{19, 20}};

    // Test Case 61
    vector<vector<int>> intervals60 = vector<vector<int>>{vector<int>{3, 5}, vector<int>{10, 12}, vector<int>{15, 18}};
    vector<int> newInterval60 = vector<int>{6, 11};
    vector<vector<int>> expected60 = vector<vector<int>>{vector<int>{3, 5}, vector<int>{6, 12}, vector<int>{15, 18}};

    // Test Case 62
    vector<vector<int>> intervals61 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{3, 5}, vector<int>{6, 7}, vector<int>{8, 10}, vector<int>{12, 16}};
    vector<int> newInterval61 = vector<int>{1, 3};
    vector<vector<int>> expected61 = vector<vector<int>>{vector<int>{1, 5}, vector<int>{6, 7}, vector<int>{8, 10}, vector<int>{12, 16}};

    // Test Case 63
    vector<vector<int>> intervals62 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{3, 4}, vector<int>{5, 6}, vector<int>{7, 8}, vector<int>{9, 10}};
    vector<int> newInterval62 = vector<int>{0, 0};
    vector<vector<int>> expected62 = vector<vector<int>>{vector<int>{0, 0}, vector<int>{1, 2}, vector<int>{3, 4}, vector<int>{5, 6}, vector<int>{7, 8}, vector<int>{9, 10}};

    // Test Case 64
    vector<vector<int>> intervals63 = vector<vector<int>>{vector<int>{1, 1}, vector<int>{2, 2}, vector<int>{3, 3}, vector<int>{4, 4}, vector<int>{5, 5}};
    vector<int> newInterval63 = vector<int>{0, 6};
    vector<vector<int>> expected63 = vector<vector<int>>{vector<int>{0, 6}};

    // Test Case 65
    vector<vector<int>> intervals64 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{4, 6}, vector<int>{8, 10}, vector<int>{12, 14}, vector<int>{16, 18}};
    vector<int> newInterval64 = vector<int>{3, 5};
    vector<vector<int>> expected64 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{3, 6}, vector<int>{8, 10}, vector<int>{12, 14}, vector<int>{16, 18}};

    // Test Case 66
    vector<vector<int>> intervals65 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{3, 4}, vector<int>{5, 6}, vector<int>{7, 8}, vector<int>{9, 10}};
    vector<int> newInterval65 = vector<int>{10, 11};
    vector<vector<int>> expected65 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{3, 4}, vector<int>{5, 6}, vector<int>{7, 8}, vector<int>{9, 11}};

    // Test Case 67
    vector<vector<int>> intervals66 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{3, 4}, vector<int>{5, 6}, vector<int>{7, 8}, vector<int>{9, 10}};
    vector<int> newInterval66 = vector<int>{2, 9};
    vector<vector<int>> expected66 = vector<vector<int>>{vector<int>{1, 10}};

    // Test Case 68
    vector<vector<int>> intervals67 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{4, 6}, vector<int>{8, 10}, vector<int>{12, 14}, vector<int>{16, 18}, vector<int>{20, 22}, vector<int>{24, 26}, vector<int>{28, 30}};
    vector<int> newInterval67 = vector<int>{3, 27};
    vector<vector<int>> expected67 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{3, 27}, vector<int>{28, 30}};

    // Test Case 69
    vector<vector<int>> intervals68 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{3, 5}, vector<int>{6, 7}, vector<int>{8, 10}, vector<int>{12, 16}};
    vector<int> newInterval68 = vector<int>{0, 17};
    vector<vector<int>> expected68 = vector<vector<int>>{vector<int>{0, 17}};

    // Test Case 70
    vector<vector<int>> intervals69 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{5, 7}, vector<int>{9, 11}, vector<int>{13, 15}, vector<int>{17, 19}};
    vector<int> newInterval69 = vector<int>{3, 12};
    vector<vector<int>> expected69 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{3, 12}, vector<int>{13, 15}, vector<int>{17, 19}};

    // Test Case 71
    vector<vector<int>> intervals70 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{3, 5}, vector<int>{6, 7}, vector<int>{8, 10}, vector<int>{12, 16}};
    vector<int> newInterval70 = vector<int>{5, 10};
    vector<vector<int>> expected70 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{3, 10}, vector<int>{12, 16}};

    // Test Case 72
    vector<vector<int>> intervals71 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{3, 5}, vector<int>{6, 7}, vector<int>{8, 10}, vector<int>{12, 16}};
    vector<int> newInterval71 = vector<int>{6, 12};
    vector<vector<int>> expected71 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{3, 5}, vector<int>{6, 16}};

    // Test Case 73
    vector<vector<int>> intervals72 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{3, 4}, vector<int>{5, 6}, vector<int>{7, 8}, vector<int>{9, 10}, vector<int>{11, 12}};
    vector<int> newInterval72 = vector<int>{1, 12};
    vector<vector<int>> expected72 = vector<vector<int>>{vector<int>{1, 12}};

    // Test Case 74
    vector<vector<int>> intervals73 = vector<vector<int>>{vector<int>{1, 5}, vector<int>{6, 10}, vector<int>{11, 15}, vector<int>{16, 20}};
    vector<int> newInterval73 = vector<int>{1, 20};
    vector<vector<int>> expected73 = vector<vector<int>>{vector<int>{1, 20}};

    // Test Case 75
    vector<vector<int>> intervals74 = vector<vector<int>>{vector<int>{1, 3}, vector<int>{5, 7}, vector<int>{8, 10}, vector<int>{12, 14}, vector<int>{16, 18}};
    vector<int> newInterval74 = vector<int>{18, 20};
    vector<vector<int>> expected74 = vector<vector<int>>{vector<int>{1, 3}, vector<int>{5, 7}, vector<int>{8, 10}, vector<int>{12, 14}, vector<int>{16, 20}};

    // Test Case 76
    vector<vector<int>> intervals75 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{3, 4}, vector<int>{5, 6}, vector<int>{7, 8}, vector<int>{9, 10}, vector<int>{11, 12}, vector<int>{13, 14}, vector<int>{15, 16}, vector<int>{17, 18}, vector<int>{19, 20}};
    vector<int> newInterval75 = vector<int>{7, 13};
    vector<vector<int>> expected75 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{3, 4}, vector<int>{5, 6}, vector<int>{7, 14}, vector<int>{15, 16}, vector<int>{17, 18}, vector<int>{19, 20}};

    // Test Case 77
    vector<vector<int>> intervals76 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{4, 6}, vector<int>{8, 10}, vector<int>{12, 14}, vector<int>{16, 18}, vector<int>{20, 22}, vector<int>{24, 26}, vector<int>{28, 30}};
    vector<int> newInterval76 = vector<int>{5, 25};
    vector<vector<int>> expected76 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{4, 26}, vector<int>{28, 30}};

    // Test Case 78
    vector<vector<int>> intervals77 = vector<vector<int>>{vector<int>{1, 3}, vector<int>{5, 7}, vector<int>{9, 11}, vector<int>{13, 15}};
    vector<int> newInterval77 = vector<int>{2, 14};
    vector<vector<int>> expected77 = vector<vector<int>>{vector<int>{1, 15}};

    // Test Case 79
    vector<vector<int>> intervals78 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{3, 4}, vector<int>{7, 9}, vector<int>{11, 13}, vector<int>{15, 17}, vector<int>{19, 21}};
    vector<int> newInterval78 = vector<int>{5, 16};
    vector<vector<int>> expected78 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{3, 4}, vector<int>{5, 17}, vector<int>{19, 21}};

    // Test Case 80
    vector<vector<int>> intervals79 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{4, 6}, vector<int>{8, 10}, vector<int>{12, 14}, vector<int>{16, 18}};
    vector<int> newInterval79 = vector<int>{5, 9};
    vector<vector<int>> expected79 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{4, 10}, vector<int>{12, 14}, vector<int>{16, 18}};

    // Test Case 81
    vector<vector<int>> intervals80 = vector<vector<int>>{vector<int>{1, 3}, vector<int>{5, 7}, vector<int>{9, 11}, vector<int>{15, 20}};
    vector<int> newInterval80 = vector<int>{4, 10};
    vector<vector<int>> expected80 = vector<vector<int>>{vector<int>{1, 3}, vector<int>{4, 11}, vector<int>{15, 20}};

    // Test Case 82
    vector<vector<int>> intervals81 = vector<vector<int>>{vector<int>{1, 3}, vector<int>{5, 7}, vector<int>{9, 11}, vector<int>{13, 15}, vector<int>{17, 19}};
    vector<int> newInterval81 = vector<int>{6, 9};
    vector<vector<int>> expected81 = vector<vector<int>>{vector<int>{1, 3}, vector<int>{5, 11}, vector<int>{13, 15}, vector<int>{17, 19}};

    // Test Case 83
    vector<vector<int>> intervals82 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{3, 5}, vector<int>{6, 7}, vector<int>{8, 10}, vector<int>{12, 16}};
    vector<int> newInterval82 = vector<int>{1, 9};
    vector<vector<int>> expected82 = vector<vector<int>>{vector<int>{1, 10}, vector<int>{12, 16}};

    // Test Case 84
    vector<vector<int>> intervals83 = vector<vector<int>>{vector<int>{1, 4}, vector<int>{6, 8}, vector<int>{10, 12}, vector<int>{14, 16}};
    vector<int> newInterval83 = vector<int>{5, 15};
    vector<vector<int>> expected83 = vector<vector<int>>{vector<int>{1, 4}, vector<int>{5, 16}};

    // Test Case 85
    vector<vector<int>> intervals84 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{4, 6}, vector<int>{8, 10}, vector<int>{12, 14}, vector<int>{16, 18}, vector<int>{20, 22}, vector<int>{24, 26}, vector<int>{28, 30}};
    vector<int> newInterval84 = vector<int>{1, 30};
    vector<vector<int>> expected84 = vector<vector<int>>{vector<int>{1, 30}};

    // Test Case 86
    vector<vector<int>> intervals85 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{3, 5}, vector<int>{6, 9}, vector<int>{11, 13}, vector<int>{15, 17}, vector<int>{19, 21}};
    vector<int> newInterval85 = vector<int>{4, 18};
    vector<vector<int>> expected85 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{3, 18}, vector<int>{19, 21}};

    // Test Case 87
    vector<vector<int>> intervals86 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{4, 5}, vector<int>{7, 8}, vector<int>{10, 11}, vector<int>{13, 14}, vector<int>{16, 17}, vector<int>{19, 20}};
    vector<int> newInterval86 = vector<int>{3, 19};
    vector<vector<int>> expected86 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{3, 20}};

    // Test Case 88
    vector<vector<int>> intervals87 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{4, 5}, vector<int>{7, 8}, vector<int>{10, 11}, vector<int>{13, 14}, vector<int>{16, 17}, vector<int>{19, 20}};
    vector<int> newInterval87 = vector<int>{6, 18};
    vector<vector<int>> expected87 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{4, 5}, vector<int>{6, 18}, vector<int>{19, 20}};

    // Test Case 89
    vector<vector<int>> intervals88 = vector<vector<int>>{vector<int>{1, 5}, vector<int>{10, 15}, vector<int>{20, 25}, vector<int>{30, 35}, vector<int>{40, 45}};
    vector<int> newInterval88 = vector<int>{22, 33};
    vector<vector<int>> expected88 = vector<vector<int>>{vector<int>{1, 5}, vector<int>{10, 15}, vector<int>{20, 35}, vector<int>{40, 45}};

    // Test Case 90
    vector<vector<int>> intervals89 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{4, 5}, vector<int>{6, 7}, vector<int>{9, 10}};
    vector<int> newInterval89 = vector<int>{3, 8};
    vector<vector<int>> expected89 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{3, 8}, vector<int>{9, 10}};

    // Test Case 91
    vector<vector<int>> intervals90 = vector<vector<int>>{vector<int>{1, 3}, vector<int>{5, 6}, vector<int>{7, 8}, vector<int>{11, 12}, vector<int>{13, 14}};
    vector<int> newInterval90 = vector<int>{2, 10};
    vector<vector<int>> expected90 = vector<vector<int>>{vector<int>{1, 10}, vector<int>{11, 12}, vector<int>{13, 14}};

    // Test Case 92
    vector<vector<int>> intervals91 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{3, 5}, vector<int>{6, 7}, vector<int>{8, 10}, vector<int>{12, 16}};
    vector<int> newInterval91 = vector<int>{14, 16};
    vector<vector<int>> expected91 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{3, 5}, vector<int>{6, 7}, vector<int>{8, 10}, vector<int>{12, 16}};

    // Test Case 93
    vector<vector<int>> intervals92 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{4, 5}, vector<int>{7, 8}};
    vector<int> newInterval92 = vector<int>{5, 7};
    vector<vector<int>> expected92 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{4, 8}};

    // Test Case 94
    vector<vector<int>> intervals93 = vector<vector<int>>{vector<int>{1, 3}, vector<int>{5, 7}, vector<int>{9, 11}, vector<int>{13, 15}, vector<int>{17, 19}};
    vector<int> newInterval93 = vector<int>{4, 10};
    vector<vector<int>> expected93 = vector<vector<int>>{vector<int>{1, 3}, vector<int>{4, 11}, vector<int>{13, 15}, vector<int>{17, 19}};

    // Test Case 95
    vector<vector<int>> intervals94 = vector<vector<int>>{vector<int>{1, 3}, vector<int>{5, 7}, vector<int>{8, 10}, vector<int>{12, 14}, vector<int>{16, 18}};
    vector<int> newInterval94 = vector<int>{15, 17};
    vector<vector<int>> expected94 = vector<vector<int>>{vector<int>{1, 3}, vector<int>{5, 7}, vector<int>{8, 10}, vector<int>{12, 14}, vector<int>{15, 18}};

    // Test Case 96
    vector<vector<int>> intervals95 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{3, 4}, vector<int>{5, 6}, vector<int>{7, 8}, vector<int>{9, 10}, vector<int>{11, 12}, vector<int>{13, 14}, vector<int>{15, 16}, vector<int>{17, 18}, vector<int>{19, 20}};
    vector<int> newInterval95 = vector<int>{2, 19};
    vector<vector<int>> expected95 = vector<vector<int>>{vector<int>{1, 20}};

    // Test Case 97
    vector<vector<int>> intervals96 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{4, 5}, vector<int>{6, 7}, vector<int>{9, 10}, vector<int>{12, 13}};
    vector<int> newInterval96 = vector<int>{3, 8};
    vector<vector<int>> expected96 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{3, 8}, vector<int>{9, 10}, vector<int>{12, 13}};

    // Test Case 98
    vector<vector<int>> intervals97 = vector<vector<int>>{vector<int>{1, 10}, vector<int>{15, 20}, vector<int>{25, 30}, vector<int>{35, 40}};
    vector<int> newInterval97 = vector<int>{12, 28};
    vector<vector<int>> expected97 = vector<vector<int>>{vector<int>{1, 10}, vector<int>{12, 30}, vector<int>{35, 40}};

    // Test Case 99
    vector<vector<int>> intervals98 = vector<vector<int>>{vector<int>{1, 100}};
    vector<int> newInterval98 = vector<int>{50, 50};
    vector<vector<int>> expected98 = vector<vector<int>>{vector<int>{1, 100}};

    // Test Case 100
    vector<vector<int>> intervals99 = vector<vector<int>>{vector<int>{1, 10}, vector<int>{15, 20}, vector<int>{25, 30}};
    vector<int> newInterval99 = vector<int>{11, 19};
    vector<vector<int>> expected99 = vector<vector<int>>{vector<int>{1, 10}, vector<int>{11, 20}, vector<int>{25, 30}};

    // Test Case 101
    vector<vector<int>> intervals100 = vector<vector<int>>{vector<int>{1, 3}, vector<int>{5, 7}, vector<int>{8, 10}, vector<int>{12, 14}, vector<int>{16, 18}};
    vector<int> newInterval100 = vector<int>{0, 1};
    vector<vector<int>> expected100 = vector<vector<int>>{vector<int>{0, 3}, vector<int>{5, 7}, vector<int>{8, 10}, vector<int>{12, 14}, vector<int>{16, 18}};

    // Test Case 102
    vector<vector<int>> intervals101 = vector<vector<int>>{vector<int>{1, 2}};
    vector<int> newInterval101 = vector<int>{0, 0};
    vector<vector<int>> expected101 = vector<vector<int>>{vector<int>{0, 0}, vector<int>{1, 2}};

    // Test Case 103
    vector<vector<int>> intervals102 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{3, 5}, vector<int>{6, 7}, vector<int>{8, 10}, vector<int>{12, 16}};
    vector<int> newInterval102 = vector<int>{0, 0};
    vector<vector<int>> expected102 = vector<vector<int>>{vector<int>{0, 0}, vector<int>{1, 2}, vector<int>{3, 5}, vector<int>{6, 7}, vector<int>{8, 10}, vector<int>{12, 16}};

    // Test Case 104
    vector<vector<int>> intervals103 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{3, 4}, vector<int>{5, 6}, vector<int>{7, 8}, vector<int>{9, 10}};
    vector<int> newInterval103 = vector<int>{0, 11};
    vector<vector<int>> expected103 = vector<vector<int>>{vector<int>{0, 11}};

    // Test Case 105
    vector<vector<int>> intervals104 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{4, 6}, vector<int>{8, 10}, vector<int>{12, 14}, vector<int>{16, 18}};
    vector<int> newInterval104 = vector<int>{5, 13};
    vector<vector<int>> expected104 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{4, 14}, vector<int>{16, 18}};

    // Test Case 106
    vector<vector<int>> intervals105 = vector<vector<int>>{vector<int>{1, 3}, vector<int>{6, 9}, vector<int>{11, 12}, vector<int>{15, 18}, vector<int>{20, 22}};
    vector<int> newInterval105 = vector<int>{13, 16};
    vector<vector<int>> expected105 = vector<vector<int>>{vector<int>{1, 3}, vector<int>{6, 9}, vector<int>{11, 12}, vector<int>{13, 18}, vector<int>{20, 22}};

    // Test Case 107
    vector<vector<int>> intervals106 = vector<vector<int>>{vector<int>{1, 5}, vector<int>{10, 15}, vector<int>{20, 25}};
    vector<int> newInterval106 = vector<int>{6, 19};
    vector<vector<int>> expected106 = vector<vector<int>>{vector<int>{1, 5}, vector<int>{6, 19}, vector<int>{20, 25}};

    // Test Case 108
    vector<vector<int>> intervals107 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{3, 5}, vector<int>{6, 7}, vector<int>{8, 10}, vector<int>{12, 16}};
    vector<int> newInterval107 = vector<int>{15, 16};
    vector<vector<int>> expected107 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{3, 5}, vector<int>{6, 7}, vector<int>{8, 10}, vector<int>{12, 16}};

    // Test Case 109
    vector<vector<int>> intervals108 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{4, 5}, vector<int>{7, 8}, vector<int>{10, 11}, vector<int>{13, 14}};
    vector<int> newInterval108 = vector<int>{3, 12};
    vector<vector<int>> expected108 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{3, 12}, vector<int>{13, 14}};

    // Test Case 110
    vector<vector<int>> intervals109 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{3, 5}, vector<int>{6, 7}, vector<int>{8, 10}, vector<int>{12, 16}};
    vector<int> newInterval109 = vector<int>{0, 1};
    vector<vector<int>> expected109 = vector<vector<int>>{vector<int>{0, 2}, vector<int>{3, 5}, vector<int>{6, 7}, vector<int>{8, 10}, vector<int>{12, 16}};

    // Test Case 111
    vector<vector<int>> intervals110 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{3, 5}, vector<int>{6, 7}, vector<int>{8, 10}, vector<int>{12, 16}};
    vector<int> newInterval110 = vector<int>{10, 11};
    vector<vector<int>> expected110 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{3, 5}, vector<int>{6, 7}, vector<int>{8, 11}, vector<int>{12, 16}};

    // Test Case 112
    vector<vector<int>> intervals111 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{3, 4}, vector<int>{5, 6}, vector<int>{7, 8}, vector<int>{9, 10}};
    vector<int> newInterval111 = vector<int>{10, 10};
    vector<vector<int>> expected111 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{3, 4}, vector<int>{5, 6}, vector<int>{7, 8}, vector<int>{9, 10}};

    // Test Case 113
    vector<vector<int>> intervals112 = vector<vector<int>>{vector<int>{1, 3}, vector<int>{5, 7}, vector<int>{8, 10}, vector<int>{12, 14}, vector<int>{16, 18}};
    vector<int> newInterval112 = vector<int>{11, 12};
    vector<vector<int>> expected112 = vector<vector<int>>{vector<int>{1, 3}, vector<int>{5, 7}, vector<int>{8, 10}, vector<int>{11, 14}, vector<int>{16, 18}};

    // Test Case 114
    vector<vector<int>> intervals113 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{3, 4}, vector<int>{5, 6}, vector<int>{7, 8}, vector<int>{9, 10}};
    vector<int> newInterval113 = vector<int>{11, 12};
    vector<vector<int>> expected113 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{3, 4}, vector<int>{5, 6}, vector<int>{7, 8}, vector<int>{9, 10}, vector<int>{11, 12}};

    // Test Case 115
    vector<vector<int>> intervals114 = vector<vector<int>>{vector<int>{1, 3}, vector<int>{5, 7}, vector<int>{10, 12}, vector<int>{15, 18}};
    vector<int> newInterval114 = vector<int>{6, 11};
    vector<vector<int>> expected114 = vector<vector<int>>{vector<int>{1, 3}, vector<int>{5, 12}, vector<int>{15, 18}};

    // Test Case 116
    vector<vector<int>> intervals115 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{4, 5}, vector<int>{6, 7}, vector<int>{9, 10}, vector<int>{12, 13}};
    vector<int> newInterval115 = vector<int>{3, 11};
    vector<vector<int>> expected115 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{3, 11}, vector<int>{12, 13}};

    // Test Case 117
    vector<vector<int>> intervals116 = vector<vector<int>>{vector<int>{1, 2}};
    vector<int> newInterval116 = vector<int>{2, 2};
    vector<vector<int>> expected116 = vector<vector<int>>{vector<int>{1, 2}};

    // Test Case 118
    vector<vector<int>> intervals117 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{3, 5}, vector<int>{6, 7}, vector<int>{8, 10}, vector<int>{12, 16}};
    vector<int> newInterval117 = vector<int>{15, 18};
    vector<vector<int>> expected117 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{3, 5}, vector<int>{6, 7}, vector<int>{8, 10}, vector<int>{12, 18}};

    // Test Case 119
    vector<vector<int>> intervals118 = vector<vector<int>>{vector<int>{1, 3}, vector<int>{5, 7}, vector<int>{8, 12}, vector<int>{15, 18}};
    vector<int> newInterval118 = vector<int>{4, 11};
    vector<vector<int>> expected118 = vector<vector<int>>{vector<int>{1, 3}, vector<int>{4, 12}, vector<int>{15, 18}};

    // Test Case 120
    vector<vector<int>> intervals119 = vector<vector<int>>{vector<int>{1, 10}, vector<int>{14, 20}, vector<int>{22, 30}, vector<int>{32, 40}};
    vector<int> newInterval119 = vector<int>{12, 28};
    vector<vector<int>> expected119 = vector<vector<int>>{vector<int>{1, 10}, vector<int>{12, 30}, vector<int>{32, 40}};

    // Test Case 121
    vector<vector<int>> intervals120 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{10, 15}, vector<int>{20, 25}, vector<int>{30, 35}};
    vector<int> newInterval120 = vector<int>{5, 19};
    vector<vector<int>> expected120 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{5, 19}, vector<int>{20, 25}, vector<int>{30, 35}};

    // Test Case 122
    vector<vector<int>> intervals121 = vector<vector<int>>{vector<int>{1, 50}};
    vector<int> newInterval121 = vector<int>{25, 75};
    vector<vector<int>> expected121 = vector<vector<int>>{vector<int>{1, 75}};

    // Test Case 123
    vector<vector<int>> intervals122 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{4, 10}, vector<int>{15, 20}, vector<int>{25, 30}};
    vector<int> newInterval122 = vector<int>{5, 18};
    vector<vector<int>> expected122 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{4, 20}, vector<int>{25, 30}};

    // Test Case 124
    vector<vector<int>> intervals123 = vector<vector<int>>{vector<int>{1, 3}, vector<int>{5, 7}, vector<int>{8, 10}, vector<int>{12, 14}, vector<int>{16, 18}};
    vector<int> newInterval123 = vector<int>{19, 20};
    vector<vector<int>> expected123 = vector<vector<int>>{vector<int>{1, 3}, vector<int>{5, 7}, vector<int>{8, 10}, vector<int>{12, 14}, vector<int>{16, 18}, vector<int>{19, 20}};

    // Test Case 125
    vector<vector<int>> intervals124 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{4, 5}, vector<int>{8, 9}, vector<int>{12, 13}, vector<int>{16, 17}, vector<int>{20, 21}};
    vector<int> newInterval124 = vector<int>{6, 14};
    vector<vector<int>> expected124 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{4, 5}, vector<int>{6, 14}, vector<int>{16, 17}, vector<int>{20, 21}};

    // Test Case 126
    vector<vector<int>> intervals125 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{3, 5}, vector<int>{6, 7}, vector<int>{8, 10}, vector<int>{12, 16}};
    vector<int> newInterval125 = vector<int>{5, 15};
    vector<vector<int>> expected125 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{3, 16}};

    // Test Case 127
    vector<vector<int>> intervals126 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{4, 5}, vector<int>{6, 7}, vector<int>{9, 10}, vector<int>{12, 13}};
    vector<int> newInterval126 = vector<int>{5, 9};
    vector<vector<int>> expected126 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{4, 10}, vector<int>{12, 13}};

    // Test Case 128
    vector<vector<int>> intervals127 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{3, 4}, vector<int>{5, 6}, vector<int>{7, 8}, vector<int>{9, 10}};
    vector<int> newInterval127 = vector<int>{11, 11};
    vector<vector<int>> expected127 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{3, 4}, vector<int>{5, 6}, vector<int>{7, 8}, vector<int>{9, 10}, vector<int>{11, 11}};

    // Test Case 129
    vector<vector<int>> intervals128 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{4, 5}, vector<int>{6, 7}, vector<int>{8, 9}, vector<int>{10, 11}};
    vector<int> newInterval128 = vector<int>{5, 6};
    vector<vector<int>> expected128 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{4, 7}, vector<int>{8, 9}, vector<int>{10, 11}};

    // Test Case 130
    vector<vector<int>> intervals129 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{4, 6}, vector<int>{8, 10}, vector<int>{12, 14}, vector<int>{16, 18}};
    vector<int> newInterval129 = vector<int>{17, 20};
    vector<vector<int>> expected129 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{4, 6}, vector<int>{8, 10}, vector<int>{12, 14}, vector<int>{16, 20}};

    // Test Case 131
    vector<vector<int>> intervals130 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{3, 5}, vector<int>{6, 7}, vector<int>{8, 10}, vector<int>{12, 16}};
    vector<int> newInterval130 = vector<int>{12, 13};
    vector<vector<int>> expected130 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{3, 5}, vector<int>{6, 7}, vector<int>{8, 10}, vector<int>{12, 16}};

    // Test Case 132
    vector<vector<int>> intervals131 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{3, 4}, vector<int>{5, 6}, vector<int>{7, 8}, vector<int>{9, 10}};
    vector<int> newInterval131 = vector<int>{0, 1};
    vector<vector<int>> expected131 = vector<vector<int>>{vector<int>{0, 2}, vector<int>{3, 4}, vector<int>{5, 6}, vector<int>{7, 8}, vector<int>{9, 10}};

    // Test Case 133
    vector<vector<int>> intervals132 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{3, 4}, vector<int>{5, 6}, vector<int>{7, 8}, vector<int>{9, 10}, vector<int>{11, 12}, vector<int>{13, 14}, vector<int>{15, 16}, vector<int>{17, 18}, vector<int>{19, 20}};
    vector<int> newInterval132 = vector<int>{9, 11};
    vector<vector<int>> expected132 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{3, 4}, vector<int>{5, 6}, vector<int>{7, 8}, vector<int>{9, 12}, vector<int>{13, 14}, vector<int>{15, 16}, vector<int>{17, 18}, vector<int>{19, 20}};

    // Test Case 134
    vector<vector<int>> intervals133 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{3, 5}, vector<int>{6, 7}, vector<int>{8, 10}, vector<int>{12, 16}};
    vector<int> newInterval133 = vector<int>{10, 18};
    vector<vector<int>> expected133 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{3, 5}, vector<int>{6, 7}, vector<int>{8, 18}};

    // Test Case 135
    vector<vector<int>> intervals134 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{4, 5}, vector<int>{7, 8}, vector<int>{11, 12}};
    vector<int> newInterval134 = vector<int>{3, 10};
    vector<vector<int>> expected134 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{3, 10}, vector<int>{11, 12}};

    // Test Case 136
    vector<vector<int>> intervals135 = vector<vector<int>>{vector<int>{1, 3}, vector<int>{5, 7}, vector<int>{8, 10}, vector<int>{12, 14}, vector<int>{16, 18}};
    vector<int> newInterval135 = vector<int>{14, 15};
    vector<vector<int>> expected135 = vector<vector<int>>{vector<int>{1, 3}, vector<int>{5, 7}, vector<int>{8, 10}, vector<int>{12, 15}, vector<int>{16, 18}};

    // Test Case 137
    vector<vector<int>> intervals136 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{6, 7}, vector<int>{11, 12}};
    vector<int> newInterval136 = vector<int>{3, 5};
    vector<vector<int>> expected136 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{3, 5}, vector<int>{6, 7}, vector<int>{11, 12}};

    // Test Case 138
    vector<vector<int>> intervals137 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{5, 10}, vector<int>{15, 20}, vector<int>{25, 30}, vector<int>{35, 40}};
    vector<int> newInterval137 = vector<int>{0, 45};
    vector<vector<int>> expected137 = vector<vector<int>>{vector<int>{0, 45}};

    // Test Case 139
    vector<vector<int>> intervals138 = vector<vector<int>>{vector<int>{1, 3}, vector<int>{5, 7}, vector<int>{9, 11}, vector<int>{13, 15}, vector<int>{17, 19}};
    vector<int> newInterval138 = vector<int>{0, 20};
    vector<vector<int>> expected138 = vector<vector<int>>{vector<int>{0, 20}};

    // Test Case 140
    vector<vector<int>> intervals139 = vector<vector<int>>{vector<int>{1, 3}, vector<int>{6, 10}, vector<int>{14, 16}, vector<int>{19, 22}, vector<int>{24, 26}};
    vector<int> newInterval139 = vector<int>{11, 15};
    vector<vector<int>> expected139 = vector<vector<int>>{vector<int>{1, 3}, vector<int>{6, 10}, vector<int>{11, 16}, vector<int>{19, 22}, vector<int>{24, 26}};

    // Test Case 141
    vector<vector<int>> intervals140 = vector<vector<int>>{};
    vector<int> newInterval140 = vector<int>{1, 2};
    vector<vector<int>> expected140 = vector<vector<int>>{vector<int>{1, 2}};

    // Test Case 142
    vector<vector<int>> intervals141 = vector<vector<int>>{vector<int>{1, 3}, vector<int>{5, 6}, vector<int>{8, 10}, vector<int>{12, 14}, vector<int>{16, 18}};
    vector<int> newInterval141 = vector<int>{7, 13};
    vector<vector<int>> expected141 = vector<vector<int>>{vector<int>{1, 3}, vector<int>{5, 6}, vector<int>{7, 14}, vector<int>{16, 18}};

    // Test Case 143
    vector<vector<int>> intervals142 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{6, 7}, vector<int>{11, 12}};
    vector<int> newInterval142 = vector<int>{1, 17};
    vector<vector<int>> expected142 = vector<vector<int>>{vector<int>{1, 17}};

    // Test Case 144
    vector<vector<int>> intervals143 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{4, 5}, vector<int>{7, 8}, vector<int>{10, 12}, vector<int>{14, 16}, vector<int>{18, 20}};
    vector<int> newInterval143 = vector<int>{3, 17};
    vector<vector<int>> expected143 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{3, 17}, vector<int>{18, 20}};

    // Test Case 145
    vector<vector<int>> intervals144 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{4, 6}, vector<int>{8, 10}, vector<int>{12, 14}};
    vector<int> newInterval144 = vector<int>{3, 7};
    vector<vector<int>> expected144 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{3, 7}, vector<int>{8, 10}, vector<int>{12, 14}};

    // Test Case 146
    vector<vector<int>> intervals145 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{4, 5}, vector<int>{8, 10}, vector<int>{12, 14}, vector<int>{16, 18}};
    vector<int> newInterval145 = vector<int>{6, 11};
    vector<vector<int>> expected145 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{4, 5}, vector<int>{6, 11}, vector<int>{12, 14}, vector<int>{16, 18}};

    // Test Case 147
    vector<vector<int>> intervals146 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{3, 5}, vector<int>{6, 7}, vector<int>{8, 10}, vector<int>{12, 16}};
    vector<int> newInterval146 = vector<int>{1, 20};
    vector<vector<int>> expected146 = vector<vector<int>>{vector<int>{1, 20}};

    // Test Case 148
    vector<vector<int>> intervals147 = vector<vector<int>>{vector<int>{1, 3}, vector<int>{5, 7}, vector<int>{9, 11}, vector<int>{13, 15}, vector<int>{17, 19}, vector<int>{21, 23}, vector<int>{25, 27}, vector<int>{29, 31}};
    vector<int> newInterval147 = vector<int>{4, 29};
    vector<vector<int>> expected147 = vector<vector<int>>{vector<int>{1, 3}, vector<int>{4, 31}};

    // Test Case 149
    vector<vector<int>> intervals148 = vector<vector<int>>{vector<int>{1, 5}, vector<int>{10, 15}, vector<int>{20, 25}, vector<int>{30, 35}, vector<int>{40, 45}};
    vector<int> newInterval148 = vector<int>{26, 34};
    vector<vector<int>> expected148 = vector<vector<int>>{vector<int>{1, 5}, vector<int>{10, 15}, vector<int>{20, 25}, vector<int>{26, 35}, vector<int>{40, 45}};

    // Test Case 150
    vector<vector<int>> intervals149 = vector<vector<int>>{vector<int>{0, 2}, vector<int>{4, 6}, vector<int>{8, 10}, vector<int>{12, 14}, vector<int>{16, 18}};
    vector<int> newInterval149 = vector<int>{3, 15};
    vector<vector<int>> expected149 = vector<vector<int>>{vector<int>{0, 2}, vector<int>{3, 15}, vector<int>{16, 18}};

    // Test Case 151
    vector<vector<int>> intervals150 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{4, 6}, vector<int>{8, 10}, vector<int>{12, 14}, vector<int>{16, 18}};
    vector<int> newInterval150 = vector<int>{9, 15};
    vector<vector<int>> expected150 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{4, 6}, vector<int>{8, 15}, vector<int>{16, 18}};

    // Test Case 152
    vector<vector<int>> intervals151 = vector<vector<int>>{vector<int>{1, 3}, vector<int>{6, 9}, vector<int>{13, 17}, vector<int>{20, 24}, vector<int>{27, 30}};
    vector<int> newInterval151 = vector<int>{11, 22};
    vector<vector<int>> expected151 = vector<vector<int>>{vector<int>{1, 3}, vector<int>{6, 9}, vector<int>{11, 24}, vector<int>{27, 30}};

    // Test Case 153
    vector<vector<int>> intervals152 = vector<vector<int>>{vector<int>{1, 3}, vector<int>{4, 6}, vector<int>{8, 10}, vector<int>{12, 14}, vector<int>{16, 18}};
    vector<int> newInterval152 = vector<int>{2, 4};
    vector<vector<int>> expected152 = vector<vector<int>>{vector<int>{1, 6}, vector<int>{8, 10}, vector<int>{12, 14}, vector<int>{16, 18}};

    // Test Case 154
    vector<vector<int>> intervals153 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{4, 5}, vector<int>{7, 8}};
    vector<int> newInterval153 = vector<int>{0, 1};
    vector<vector<int>> expected153 = vector<vector<int>>{vector<int>{0, 2}, vector<int>{4, 5}, vector<int>{7, 8}};

    // Test Case 155
    vector<vector<int>> intervals154 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{5, 8}, vector<int>{10, 15}, vector<int>{20, 25}};
    vector<int> newInterval154 = vector<int>{3, 23};
    vector<vector<int>> expected154 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{3, 25}};

    // Test Case 156
    vector<vector<int>> intervals155 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{4, 5}, vector<int>{7, 8}, vector<int>{10, 11}, vector<int>{13, 14}, vector<int>{16, 17}};
    vector<int> newInterval155 = vector<int>{3, 12};
    vector<vector<int>> expected155 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{3, 12}, vector<int>{13, 14}, vector<int>{16, 17}};

    // Test Case 157
    vector<vector<int>> intervals156 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{4, 5}, vector<int>{6, 10}, vector<int>{12, 18}, vector<int>{20, 25}};
    vector<int> newInterval156 = vector<int>{3, 11};
    vector<vector<int>> expected156 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{3, 11}, vector<int>{12, 18}, vector<int>{20, 25}};

    // Test Case 158
    vector<vector<int>> intervals157 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{3, 5}, vector<int>{6, 7}, vector<int>{8, 10}, vector<int>{12, 16}};
    vector<int> newInterval157 = vector<int>{16, 16};
    vector<vector<int>> expected157 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{3, 5}, vector<int>{6, 7}, vector<int>{8, 10}, vector<int>{12, 16}};

    // Test Case 159
    vector<vector<int>> intervals158 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{4, 6}, vector<int>{8, 10}, vector<int>{12, 14}, vector<int>{16, 18}};
    vector<int> newInterval158 = vector<int>{15, 17};
    vector<vector<int>> expected158 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{4, 6}, vector<int>{8, 10}, vector<int>{12, 14}, vector<int>{15, 18}};

    // Test Case 160
    vector<vector<int>> intervals159 = vector<vector<int>>{vector<int>{1, 3}, vector<int>{6, 9}, vector<int>{12, 15}, vector<int>{18, 21}, vector<int>{24, 27}};
    vector<int> newInterval159 = vector<int>{10, 25};
    vector<vector<int>> expected159 = vector<vector<int>>{vector<int>{1, 3}, vector<int>{6, 9}, vector<int>{10, 27}};

    // Test Case 161
    vector<vector<int>> intervals160 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{3, 4}, vector<int>{5, 6}, vector<int>{7, 8}, vector<int>{9, 10}};
    vector<int> newInterval160 = vector<int>{8, 10};
    vector<vector<int>> expected160 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{3, 4}, vector<int>{5, 6}, vector<int>{7, 10}};

    // Test Case 162
    vector<vector<int>> intervals161 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{3, 4}, vector<int>{5, 6}, vector<int>{7, 8}, vector<int>{9, 10}, vector<int>{11, 12}, vector<int>{13, 14}, vector<int>{15, 16}};
    vector<int> newInterval161 = vector<int>{0, 16};
    vector<vector<int>> expected161 = vector<vector<int>>{vector<int>{0, 16}};

    // Test Case 163
    vector<vector<int>> intervals162 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{3, 4}, vector<int>{5, 6}, vector<int>{7, 8}, vector<int>{9, 10}, vector<int>{11, 12}, vector<int>{13, 14}, vector<int>{15, 16}, vector<int>{17, 18}, vector<int>{19, 20}};
    vector<int> newInterval162 = vector<int>{5, 15};
    vector<vector<int>> expected162 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{3, 4}, vector<int>{5, 16}, vector<int>{17, 18}, vector<int>{19, 20}};

    // Test Case 164
    vector<vector<int>> intervals163 = vector<vector<int>>{vector<int>{1, 3}, vector<int>{6, 9}, vector<int>{13, 17}, vector<int>{20, 24}, vector<int>{27, 30}, vector<int>{33, 37}, vector<int>{40, 45}};
    vector<int> newInterval163 = vector<int>{11, 34};
    vector<vector<int>> expected163 = vector<vector<int>>{vector<int>{1, 3}, vector<int>{6, 9}, vector<int>{11, 37}, vector<int>{40, 45}};

    // Test Case 165
    vector<vector<int>> intervals164 = vector<vector<int>>{vector<int>{1, 2}, vector<int>{3, 4}, vector<int>{5, 6}, vector<int>{7, 8}, vector<int>{9, 10}, vector<int>{11, 12}, vector<int>{13, 14}, vector<int>{15, 16}};
    vector<int> newInterval164 = vector<int>{1, 16};
    vector<vector<int>> expected164 = vector<vector<int>>{vector<int>{1, 16}};

    // Test Case 166
    vector<vector<int>> intervals165 = vector<vector<int>>{vector<int>{1, 2}};
    vector<int> newInterval165 = vector<int>{0, 3};
    vector<vector<int>> expected165 = vector<vector<int>>{vector<int>{0, 3}};
    // Auto-generated test cases:
    LeetCodeTestHarness::assertEqual(expected0, solution.insert(intervals0, newInterval0), 0);

    LeetCodeTestHarness::assertEqual(expected1, solution.insert(intervals1, newInterval1), 1);

    LeetCodeTestHarness::assertEqual(expected2, solution.insert(intervals2, newInterval2), 2);

    LeetCodeTestHarness::assertEqual(expected3, solution.insert(intervals3, newInterval3), 3);

    LeetCodeTestHarness::assertEqual(expected4, solution.insert(intervals4, newInterval4), 4);

    LeetCodeTestHarness::assertEqual(expected5, solution.insert(intervals5, newInterval5), 5);

    LeetCodeTestHarness::assertEqual(expected6, solution.insert(intervals6, newInterval6), 6);

    LeetCodeTestHarness::assertEqual(expected7, solution.insert(intervals7, newInterval7), 7);

    LeetCodeTestHarness::assertEqual(expected8, solution.insert(intervals8, newInterval8), 8);

    LeetCodeTestHarness::assertEqual(expected9, solution.insert(intervals9, newInterval9), 9);

    LeetCodeTestHarness::assertEqual(expected10, solution.insert(intervals10, newInterval10), 10);

    LeetCodeTestHarness::assertEqual(expected11, solution.insert(intervals11, newInterval11), 11);

    LeetCodeTestHarness::assertEqual(expected12, solution.insert(intervals12, newInterval12), 12);

    LeetCodeTestHarness::assertEqual(expected13, solution.insert(intervals13, newInterval13), 13);

    LeetCodeTestHarness::assertEqual(expected14, solution.insert(intervals14, newInterval14), 14);

    LeetCodeTestHarness::assertEqual(expected15, solution.insert(intervals15, newInterval15), 15);

    LeetCodeTestHarness::assertEqual(expected16, solution.insert(intervals16, newInterval16), 16);

    LeetCodeTestHarness::assertEqual(expected17, solution.insert(intervals17, newInterval17), 17);

    LeetCodeTestHarness::assertEqual(expected18, solution.insert(intervals18, newInterval18), 18);

    LeetCodeTestHarness::assertEqual(expected19, solution.insert(intervals19, newInterval19), 19);

    LeetCodeTestHarness::assertEqual(expected20, solution.insert(intervals20, newInterval20), 20);

    LeetCodeTestHarness::assertEqual(expected21, solution.insert(intervals21, newInterval21), 21);

    LeetCodeTestHarness::assertEqual(expected22, solution.insert(intervals22, newInterval22), 22);

    LeetCodeTestHarness::assertEqual(expected23, solution.insert(intervals23, newInterval23), 23);

    LeetCodeTestHarness::assertEqual(expected24, solution.insert(intervals24, newInterval24), 24);

    LeetCodeTestHarness::assertEqual(expected25, solution.insert(intervals25, newInterval25), 25);

    LeetCodeTestHarness::assertEqual(expected26, solution.insert(intervals26, newInterval26), 26);

    LeetCodeTestHarness::assertEqual(expected27, solution.insert(intervals27, newInterval27), 27);

    LeetCodeTestHarness::assertEqual(expected28, solution.insert(intervals28, newInterval28), 28);

    LeetCodeTestHarness::assertEqual(expected29, solution.insert(intervals29, newInterval29), 29);

    LeetCodeTestHarness::assertEqual(expected30, solution.insert(intervals30, newInterval30), 30);

    LeetCodeTestHarness::assertEqual(expected31, solution.insert(intervals31, newInterval31), 31);

    LeetCodeTestHarness::assertEqual(expected32, solution.insert(intervals32, newInterval32), 32);

    LeetCodeTestHarness::assertEqual(expected33, solution.insert(intervals33, newInterval33), 33);

    LeetCodeTestHarness::assertEqual(expected34, solution.insert(intervals34, newInterval34), 34);

    LeetCodeTestHarness::assertEqual(expected35, solution.insert(intervals35, newInterval35), 35);

    LeetCodeTestHarness::assertEqual(expected36, solution.insert(intervals36, newInterval36), 36);

    LeetCodeTestHarness::assertEqual(expected37, solution.insert(intervals37, newInterval37), 37);

    LeetCodeTestHarness::assertEqual(expected38, solution.insert(intervals38, newInterval38), 38);

    LeetCodeTestHarness::assertEqual(expected39, solution.insert(intervals39, newInterval39), 39);

    LeetCodeTestHarness::assertEqual(expected40, solution.insert(intervals40, newInterval40), 40);

    LeetCodeTestHarness::assertEqual(expected41, solution.insert(intervals41, newInterval41), 41);

    LeetCodeTestHarness::assertEqual(expected42, solution.insert(intervals42, newInterval42), 42);

    LeetCodeTestHarness::assertEqual(expected43, solution.insert(intervals43, newInterval43), 43);

    LeetCodeTestHarness::assertEqual(expected44, solution.insert(intervals44, newInterval44), 44);

    LeetCodeTestHarness::assertEqual(expected45, solution.insert(intervals45, newInterval45), 45);

    LeetCodeTestHarness::assertEqual(expected46, solution.insert(intervals46, newInterval46), 46);

    LeetCodeTestHarness::assertEqual(expected47, solution.insert(intervals47, newInterval47), 47);

    LeetCodeTestHarness::assertEqual(expected48, solution.insert(intervals48, newInterval48), 48);

    LeetCodeTestHarness::assertEqual(expected49, solution.insert(intervals49, newInterval49), 49);

    LeetCodeTestHarness::assertEqual(expected50, solution.insert(intervals50, newInterval50), 50);

    LeetCodeTestHarness::assertEqual(expected51, solution.insert(intervals51, newInterval51), 51);

    LeetCodeTestHarness::assertEqual(expected52, solution.insert(intervals52, newInterval52), 52);

    LeetCodeTestHarness::assertEqual(expected53, solution.insert(intervals53, newInterval53), 53);

    LeetCodeTestHarness::assertEqual(expected54, solution.insert(intervals54, newInterval54), 54);

    LeetCodeTestHarness::assertEqual(expected55, solution.insert(intervals55, newInterval55), 55);

    LeetCodeTestHarness::assertEqual(expected56, solution.insert(intervals56, newInterval56), 56);

    LeetCodeTestHarness::assertEqual(expected57, solution.insert(intervals57, newInterval57), 57);

    LeetCodeTestHarness::assertEqual(expected58, solution.insert(intervals58, newInterval58), 58);

    LeetCodeTestHarness::assertEqual(expected59, solution.insert(intervals59, newInterval59), 59);

    LeetCodeTestHarness::assertEqual(expected60, solution.insert(intervals60, newInterval60), 60);

    LeetCodeTestHarness::assertEqual(expected61, solution.insert(intervals61, newInterval61), 61);

    LeetCodeTestHarness::assertEqual(expected62, solution.insert(intervals62, newInterval62), 62);

    LeetCodeTestHarness::assertEqual(expected63, solution.insert(intervals63, newInterval63), 63);

    LeetCodeTestHarness::assertEqual(expected64, solution.insert(intervals64, newInterval64), 64);

    LeetCodeTestHarness::assertEqual(expected65, solution.insert(intervals65, newInterval65), 65);

    LeetCodeTestHarness::assertEqual(expected66, solution.insert(intervals66, newInterval66), 66);

    LeetCodeTestHarness::assertEqual(expected67, solution.insert(intervals67, newInterval67), 67);

    LeetCodeTestHarness::assertEqual(expected68, solution.insert(intervals68, newInterval68), 68);

    LeetCodeTestHarness::assertEqual(expected69, solution.insert(intervals69, newInterval69), 69);

    LeetCodeTestHarness::assertEqual(expected70, solution.insert(intervals70, newInterval70), 70);

    LeetCodeTestHarness::assertEqual(expected71, solution.insert(intervals71, newInterval71), 71);

    LeetCodeTestHarness::assertEqual(expected72, solution.insert(intervals72, newInterval72), 72);

    LeetCodeTestHarness::assertEqual(expected73, solution.insert(intervals73, newInterval73), 73);

    LeetCodeTestHarness::assertEqual(expected74, solution.insert(intervals74, newInterval74), 74);

    LeetCodeTestHarness::assertEqual(expected75, solution.insert(intervals75, newInterval75), 75);

    LeetCodeTestHarness::assertEqual(expected76, solution.insert(intervals76, newInterval76), 76);

    LeetCodeTestHarness::assertEqual(expected77, solution.insert(intervals77, newInterval77), 77);

    LeetCodeTestHarness::assertEqual(expected78, solution.insert(intervals78, newInterval78), 78);

    LeetCodeTestHarness::assertEqual(expected79, solution.insert(intervals79, newInterval79), 79);

    LeetCodeTestHarness::assertEqual(expected80, solution.insert(intervals80, newInterval80), 80);

    LeetCodeTestHarness::assertEqual(expected81, solution.insert(intervals81, newInterval81), 81);

    LeetCodeTestHarness::assertEqual(expected82, solution.insert(intervals82, newInterval82), 82);

    LeetCodeTestHarness::assertEqual(expected83, solution.insert(intervals83, newInterval83), 83);

    LeetCodeTestHarness::assertEqual(expected84, solution.insert(intervals84, newInterval84), 84);

    LeetCodeTestHarness::assertEqual(expected85, solution.insert(intervals85, newInterval85), 85);

    LeetCodeTestHarness::assertEqual(expected86, solution.insert(intervals86, newInterval86), 86);

    LeetCodeTestHarness::assertEqual(expected87, solution.insert(intervals87, newInterval87), 87);

    LeetCodeTestHarness::assertEqual(expected88, solution.insert(intervals88, newInterval88), 88);

    LeetCodeTestHarness::assertEqual(expected89, solution.insert(intervals89, newInterval89), 89);

    LeetCodeTestHarness::assertEqual(expected90, solution.insert(intervals90, newInterval90), 90);

    LeetCodeTestHarness::assertEqual(expected91, solution.insert(intervals91, newInterval91), 91);

    LeetCodeTestHarness::assertEqual(expected92, solution.insert(intervals92, newInterval92), 92);

    LeetCodeTestHarness::assertEqual(expected93, solution.insert(intervals93, newInterval93), 93);

    LeetCodeTestHarness::assertEqual(expected94, solution.insert(intervals94, newInterval94), 94);

    LeetCodeTestHarness::assertEqual(expected95, solution.insert(intervals95, newInterval95), 95);

    LeetCodeTestHarness::assertEqual(expected96, solution.insert(intervals96, newInterval96), 96);

    LeetCodeTestHarness::assertEqual(expected97, solution.insert(intervals97, newInterval97), 97);

    LeetCodeTestHarness::assertEqual(expected98, solution.insert(intervals98, newInterval98), 98);

    LeetCodeTestHarness::assertEqual(expected99, solution.insert(intervals99, newInterval99), 99);

    LeetCodeTestHarness::assertEqual(expected100, solution.insert(intervals100, newInterval100), 100);

    LeetCodeTestHarness::assertEqual(expected101, solution.insert(intervals101, newInterval101), 101);

    LeetCodeTestHarness::assertEqual(expected102, solution.insert(intervals102, newInterval102), 102);

    LeetCodeTestHarness::assertEqual(expected103, solution.insert(intervals103, newInterval103), 103);

    LeetCodeTestHarness::assertEqual(expected104, solution.insert(intervals104, newInterval104), 104);

    LeetCodeTestHarness::assertEqual(expected105, solution.insert(intervals105, newInterval105), 105);

    LeetCodeTestHarness::assertEqual(expected106, solution.insert(intervals106, newInterval106), 106);

    LeetCodeTestHarness::assertEqual(expected107, solution.insert(intervals107, newInterval107), 107);

    LeetCodeTestHarness::assertEqual(expected108, solution.insert(intervals108, newInterval108), 108);

    LeetCodeTestHarness::assertEqual(expected109, solution.insert(intervals109, newInterval109), 109);

    LeetCodeTestHarness::assertEqual(expected110, solution.insert(intervals110, newInterval110), 110);

    LeetCodeTestHarness::assertEqual(expected111, solution.insert(intervals111, newInterval111), 111);

    LeetCodeTestHarness::assertEqual(expected112, solution.insert(intervals112, newInterval112), 112);

    LeetCodeTestHarness::assertEqual(expected113, solution.insert(intervals113, newInterval113), 113);

    LeetCodeTestHarness::assertEqual(expected114, solution.insert(intervals114, newInterval114), 114);

    LeetCodeTestHarness::assertEqual(expected115, solution.insert(intervals115, newInterval115), 115);

    LeetCodeTestHarness::assertEqual(expected116, solution.insert(intervals116, newInterval116), 116);

    LeetCodeTestHarness::assertEqual(expected117, solution.insert(intervals117, newInterval117), 117);

    LeetCodeTestHarness::assertEqual(expected118, solution.insert(intervals118, newInterval118), 118);

    LeetCodeTestHarness::assertEqual(expected119, solution.insert(intervals119, newInterval119), 119);

    LeetCodeTestHarness::assertEqual(expected120, solution.insert(intervals120, newInterval120), 120);

    LeetCodeTestHarness::assertEqual(expected121, solution.insert(intervals121, newInterval121), 121);

    LeetCodeTestHarness::assertEqual(expected122, solution.insert(intervals122, newInterval122), 122);

    LeetCodeTestHarness::assertEqual(expected123, solution.insert(intervals123, newInterval123), 123);

    LeetCodeTestHarness::assertEqual(expected124, solution.insert(intervals124, newInterval124), 124);

    LeetCodeTestHarness::assertEqual(expected125, solution.insert(intervals125, newInterval125), 125);

    LeetCodeTestHarness::assertEqual(expected126, solution.insert(intervals126, newInterval126), 126);

    LeetCodeTestHarness::assertEqual(expected127, solution.insert(intervals127, newInterval127), 127);

    LeetCodeTestHarness::assertEqual(expected128, solution.insert(intervals128, newInterval128), 128);

    LeetCodeTestHarness::assertEqual(expected129, solution.insert(intervals129, newInterval129), 129);

    LeetCodeTestHarness::assertEqual(expected130, solution.insert(intervals130, newInterval130), 130);

    LeetCodeTestHarness::assertEqual(expected131, solution.insert(intervals131, newInterval131), 131);

    LeetCodeTestHarness::assertEqual(expected132, solution.insert(intervals132, newInterval132), 132);

    LeetCodeTestHarness::assertEqual(expected133, solution.insert(intervals133, newInterval133), 133);

    LeetCodeTestHarness::assertEqual(expected134, solution.insert(intervals134, newInterval134), 134);

    LeetCodeTestHarness::assertEqual(expected135, solution.insert(intervals135, newInterval135), 135);

    LeetCodeTestHarness::assertEqual(expected136, solution.insert(intervals136, newInterval136), 136);

    LeetCodeTestHarness::assertEqual(expected137, solution.insert(intervals137, newInterval137), 137);

    LeetCodeTestHarness::assertEqual(expected138, solution.insert(intervals138, newInterval138), 138);

    LeetCodeTestHarness::assertEqual(expected139, solution.insert(intervals139, newInterval139), 139);

    LeetCodeTestHarness::assertEqual(expected140, solution.insert(intervals140, newInterval140), 140);

    LeetCodeTestHarness::assertEqual(expected141, solution.insert(intervals141, newInterval141), 141);

    LeetCodeTestHarness::assertEqual(expected142, solution.insert(intervals142, newInterval142), 142);

    LeetCodeTestHarness::assertEqual(expected143, solution.insert(intervals143, newInterval143), 143);

    LeetCodeTestHarness::assertEqual(expected144, solution.insert(intervals144, newInterval144), 144);

    LeetCodeTestHarness::assertEqual(expected145, solution.insert(intervals145, newInterval145), 145);

    LeetCodeTestHarness::assertEqual(expected146, solution.insert(intervals146, newInterval146), 146);

    LeetCodeTestHarness::assertEqual(expected147, solution.insert(intervals147, newInterval147), 147);

    LeetCodeTestHarness::assertEqual(expected148, solution.insert(intervals148, newInterval148), 148);

    LeetCodeTestHarness::assertEqual(expected149, solution.insert(intervals149, newInterval149), 149);

    LeetCodeTestHarness::assertEqual(expected150, solution.insert(intervals150, newInterval150), 150);

    LeetCodeTestHarness::assertEqual(expected151, solution.insert(intervals151, newInterval151), 151);

    LeetCodeTestHarness::assertEqual(expected152, solution.insert(intervals152, newInterval152), 152);

    LeetCodeTestHarness::assertEqual(expected153, solution.insert(intervals153, newInterval153), 153);

    LeetCodeTestHarness::assertEqual(expected154, solution.insert(intervals154, newInterval154), 154);

    LeetCodeTestHarness::assertEqual(expected155, solution.insert(intervals155, newInterval155), 155);

    LeetCodeTestHarness::assertEqual(expected156, solution.insert(intervals156, newInterval156), 156);

    LeetCodeTestHarness::assertEqual(expected157, solution.insert(intervals157, newInterval157), 157);

    LeetCodeTestHarness::assertEqual(expected158, solution.insert(intervals158, newInterval158), 158);

    LeetCodeTestHarness::assertEqual(expected159, solution.insert(intervals159, newInterval159), 159);

    LeetCodeTestHarness::assertEqual(expected160, solution.insert(intervals160, newInterval160), 160);

    LeetCodeTestHarness::assertEqual(expected161, solution.insert(intervals161, newInterval161), 161);

    LeetCodeTestHarness::assertEqual(expected162, solution.insert(intervals162, newInterval162), 162);

    LeetCodeTestHarness::assertEqual(expected163, solution.insert(intervals163, newInterval163), 163);

    LeetCodeTestHarness::assertEqual(expected164, solution.insert(intervals164, newInterval164), 164);

    LeetCodeTestHarness::assertEqual(expected165, solution.insert(intervals165, newInterval165), 165);

    std::cout << "All tests for Insert Interval passed!" << std::endl;
    return 0;
}
