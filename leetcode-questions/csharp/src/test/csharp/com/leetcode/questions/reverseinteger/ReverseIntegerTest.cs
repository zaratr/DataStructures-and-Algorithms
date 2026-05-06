using Xunit;
using System.Collections.Generic;
using com.leetcode.questions.leetcode.editor.en.reverseinteger;

namespace com.leetcode.questions.reverseinteger;

public class ReverseIntegerTest {
    [Fact]
    public void TestCases() {
        var solution = new Solution();
        // Auto-generated test cases:
        // Test Case 1
        int x0 = 123;
        int expected0 = 321;
        Assert.Equal(expected0, solution.Reverse(x0));

        // Test Case 2
        int x1 = -123;
        int expected1 = -321;
        Assert.Equal(expected1, solution.Reverse(x1));

        // Test Case 3
        int x2 = 120;
        int expected2 = 21;
        Assert.Equal(expected2, solution.Reverse(x2));
    }
}
