#include <iostream>
#include <vector>
#include <string>
#include <cassert>
#include "c:/Users/zarat/IdeaProjects/DataStructures-and-Algorithms/leetcode-questions/cpp/src/main/cpp/com/leetcode/questions/leetcode/editor/en/ReverseInteger.cpp"

int main() {
    Solution solution;
    // Auto-generated test cases:
    // Test Case 1
    int x0 = 123;
    int expected0 = 321;
    assert(solution.reverse(x0) == expected0);

    // Test Case 2
    int x1 = -123;
    int expected1 = -321;
    assert(solution.reverse(x1) == expected1);

    // Test Case 3
    int x2 = 120;
    int expected2 = 21;
    assert(solution.reverse(x2) == expected2);
    
    std::cout << "All tests for Reverse Integer passed!" << std::endl;
    return 0;
}
