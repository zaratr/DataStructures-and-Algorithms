package com.leetcode.questions.reverseinteger;

import com.leetcode.questions.leetcode.editor.en.ReverseInteger;
import org.junit.jupiter.api.Test;
import static org.junit.jupiter.api.Assertions.*;

public class ReverseIntegerTest {
    @Test
    public void testCases() {
        ReverseInteger.Solution solution = new ReverseInteger.Solution();
        // Auto-generated test cases:
        // Test Case 1
        int x0 = 123;
        int expected0 = 321;
        assertEquals(expected0, solution.reverse(x0));

        // Test Case 2
        int x1 = -123;
        int expected1 = -321;
        assertEquals(expected1, solution.reverse(x1));

        // Test Case 3
        int x2 = 120;
        int expected2 = 21;
        assertEquals(expected2, solution.reverse(x2));
    }
}
