using Xunit;
using System.Collections.Generic;
using com.leetcode.questions.leetcode.editor.en._3sum;

namespace com.leetcode.questions._3sum;

public class _3sumTest {
    [Fact]
    public void TestCases() {
        var solution = new Solution();
        // Auto-generated test cases:
        // Test Case 1
        int[] nums0 = new int[]{-1, 0, 1, 2, -1, -4};
        IList<IList<int>> expected0 = new List<IList<int>>(){new List<int>(){-1, -1, 2}, new List<int>(){-1, 0, 1}};
        Assert.Equal(expected0, solution.ThreeSum(nums0));

        // Test Case 2
        int[] nums1 = new int[]{0, 1, 1};
        IList<IList<int>> expected1 = new List<IList<int>>(){};
        Assert.Equal(expected1, solution.ThreeSum(nums1));

        // Test Case 3
        int[] nums2 = new int[]{0, 0, 0};
        IList<IList<int>> expected2 = new List<IList<int>>(){new List<int>(){0, 0, 0}};
        Assert.Equal(expected2, solution.ThreeSum(nums2));
    }
}
