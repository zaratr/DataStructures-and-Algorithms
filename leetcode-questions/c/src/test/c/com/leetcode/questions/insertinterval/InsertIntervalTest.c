#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <assert.h>
#include "c:/Users/zarat/IdeaProjects/DataStructures-and-Algorithms/leetcode-questions/c/src/main/c/com/leetcode/questions/leetcode/editor/en/InsertInterval.c"

int main() {
    // Auto-generated test cases:
    // Test Case 1
    int intervals0Row0[] = {1, 3};
    int intervals0Row1[] = {6, 9};
    int* intervals0[] = {intervals0Row0, intervals0Row1};
    int intervals0ColSize[] = {2, 2};
    int intervals0Size = 2;
    int newInterval0[] = {2, 5};
    int newInterval0Size = 2;
    int expected0Size = 2;
    int expected0Row0[] = {1, 5};
    int expected0Row0Size = 2;
    int expected0Row1[] = {6, 9};
    int expected0Row1Size = 2;
    int returnSize0 = 0;
    int* returnColumnSizes0 = NULL;
    int** actual0 = insert(intervals0, intervals0Size, intervals0ColSize, newInterval0, newInterval0Size, &returnSize0, &returnColumnSizes0);
    assert(actual0 != NULL);
    assert(returnSize0 == expected0Size);
    assert(returnColumnSizes0[0] == expected0Row0Size);
    for (int j = 0; j < expected0Row0Size; ++j) assert(actual0[0][j] == expected0Row0[j]);
    assert(returnColumnSizes0[1] == expected0Row1Size);
    for (int j = 0; j < expected0Row1Size; ++j) assert(actual0[1][j] == expected0Row1[j]);

    // Test Case 2
    int intervals1Row0[] = {1, 2};
    int intervals1Row1[] = {3, 5};
    int intervals1Row2[] = {6, 7};
    int intervals1Row3[] = {8, 10};
    int intervals1Row4[] = {12, 16};
    int* intervals1[] = {intervals1Row0, intervals1Row1, intervals1Row2, intervals1Row3, intervals1Row4};
    int intervals1ColSize[] = {2, 2, 2, 2, 2};
    int intervals1Size = 5;
    int newInterval1[] = {4, 8};
    int newInterval1Size = 2;
    int expected1Size = 3;
    int expected1Row0[] = {1, 2};
    int expected1Row0Size = 2;
    int expected1Row1[] = {3, 10};
    int expected1Row1Size = 2;
    int expected1Row2[] = {12, 16};
    int expected1Row2Size = 2;
    int returnSize1 = 0;
    int* returnColumnSizes1 = NULL;
    int** actual1 = insert(intervals1, intervals1Size, intervals1ColSize, newInterval1, newInterval1Size, &returnSize1, &returnColumnSizes1);
    assert(actual1 != NULL);
    assert(returnSize1 == expected1Size);
    assert(returnColumnSizes1[0] == expected1Row0Size);
    for (int j = 0; j < expected1Row0Size; ++j) assert(actual1[0][j] == expected1Row0[j]);
    assert(returnColumnSizes1[1] == expected1Row1Size);
    for (int j = 0; j < expected1Row1Size; ++j) assert(actual1[1][j] == expected1Row1[j]);
    assert(returnColumnSizes1[2] == expected1Row2Size);
    for (int j = 0; j < expected1Row2Size; ++j) assert(actual1[2][j] == expected1Row2[j]);
    
    printf("All tests for Insert Interval passed!\n");
    return 0;
}
