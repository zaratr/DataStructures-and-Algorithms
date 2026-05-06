#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <assert.h>
#include "c:/Users/zarat/IdeaProjects/DataStructures-and-Algorithms/leetcode-questions/c/src/main/c/com/leetcode/questions/leetcode/editor/en/ProjectionAreaOf3dShapes.c"

int main() {
    // Auto-generated test cases:
    // Test Case 1
    int grid0Row0[] = {1, 2};
    int grid0Row1[] = {3, 4};
    int* grid0[] = {grid0Row0, grid0Row1};
    int grid0ColSize[] = {2, 2};
    int grid0Size = 2;
    int expected0 = 17;
    assert(projectionArea(grid0, grid0Size, grid0ColSize) == expected0);

    // Test Case 2
    int grid1Row0[] = {2};
    int* grid1[] = {grid1Row0};
    int grid1ColSize[] = {1};
    int grid1Size = 1;
    int expected1 = 5;
    assert(projectionArea(grid1, grid1Size, grid1ColSize) == expected1);

    // Test Case 3
    int grid2Row0[] = {1, 0};
    int grid2Row1[] = {0, 2};
    int* grid2[] = {grid2Row0, grid2Row1};
    int grid2ColSize[] = {2, 2};
    int grid2Size = 2;
    int expected2 = 8;
    assert(projectionArea(grid2, grid2Size, grid2ColSize) == expected2);
    
    printf("All tests for Projection Area of 3D Shapes passed!\n");
    return 0;
}
