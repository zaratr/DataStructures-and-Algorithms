#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <assert.h>
#include "c:/Users/zarat/IdeaProjects/DataStructures-and-Algorithms/leetcode-questions/c/src/main/c/com/leetcode/questions/leetcode/editor/en/ReverseInteger.c"

int main() {
    // Auto-generated test cases:
    // Test Case 1
    int x0 = 123;
    int expected0 = 321;
    assert(reverse(x0) == expected0);

    // Test Case 2
    int x1 = -123;
    int expected1 = -321;
    assert(reverse(x1) == expected1);

    // Test Case 3
    int x2 = 120;
    int expected2 = 21;
    assert(reverse(x2) == expected2);
    
    printf("All tests for Reverse Integer passed!\n");
    return 0;
}
