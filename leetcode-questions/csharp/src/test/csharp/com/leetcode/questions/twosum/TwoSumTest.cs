using Xunit;
using System.Collections.Generic;
using com.leetcode.questions.leetcode.editor.en.twosum;

namespace com.leetcode.questions.twosum;

public class TwoSumTest {
    [Fact]
    public void TestCases() {
        var solution = new Solution();
        // Auto-generated test cases:
        // Test Case 1
        int[] nums0 = new int[]{2, 7, 11, 15};
        int target0 = 9;
        int[] expected0 = new int[]{0, 1};
        Assert.Equal(expected0, solution.TwoSum(nums0, target0));

        // Test Case 2
        int[] nums1 = new int[]{3, 2, 4};
        int target1 = 6;
        int[] expected1 = new int[]{1, 2};
        Assert.Equal(expected1, solution.TwoSum(nums1, target1));

        // Test Case 3
        int[] nums2 = new int[]{3, 3};
        int target2 = 6;
        int[] expected2 = new int[]{0, 1};
        Assert.Equal(expected2, solution.TwoSum(nums2, target2));
    }
}
