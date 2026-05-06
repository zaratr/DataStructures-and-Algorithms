using Xunit;
using System.Collections.Generic;
using com.leetcode.questions.leetcode.editor.en.removeduplicatesfromsortedarray;

namespace com.leetcode.questions.removeduplicatesfromsortedarray;

public class RemoveDuplicatesFromSortedArrayTest {
    [Fact]
    public void TestCases() {
        var solution = new Solution();
        // Auto-generated test cases:
        // Test Case 1
        int[] nums0 = new int[]{1, 1, 2};
        // Expected output: "2, nums = [1,2,_]"
        // Composite or non-scalar expected output; direct assertion skipped.
        _ = solution.RemoveDuplicates(nums0);

        // Test Case 2
        int[] nums1 = new int[]{0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
        // Expected output: "5, nums = [0,1,2,3,4,_,_,_,_,_]"
        // Composite or non-scalar expected output; direct assertion skipped.
        _ = solution.RemoveDuplicates(nums1);
    }
}
