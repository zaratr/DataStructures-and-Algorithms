package com.leetcode.questions.leetcode.editor.en;
/**
 * Using intellij plugin: leetcode-editor to run code. Problem Domain below Implementation
 * @see #main
 * @see Solution#threeSumClosest(int[], int)
 * @link <a href="https://github.com/zaratr/leetcode-qustions/src/main/java/com/leetcode/questions/leetcode/editor/en/doc/content">ThreeSumClosest markdown</a>
 **/

 public class ThreeSumClosest{
    public static void main(){
    var solution = new Solution().
    threeSumClosest( new int[]{1,2,3}, 2);
    }
}

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
    public int threeSumClosest(int[] nums, int target) {
        return 0;
    }
}
//leetcode submit region end(Prohibit modification and deletion)



/**
Given an integer array nums of length n and an integer target, find three
integers in nums such that the sum is closest to target.

 Return the sum of the three integers.

 You may assume that each input would have exactly one solution.


 Example 1:


Input: nums = [-1,2,1,-4], target = 1
Output: 2
Explanation: The sum that is closest to the target is 2. (-1 + 2 + 1 = 2).


 Example 2:


Input: nums = [0,0,0], target = 1
Output: 0
Explanation: The sum that is closest to the target is 0. (0 + 0 + 0 = 0).



 Constraints:


* 3 <= nums.length <= 1000
* -1000 <= nums[i] <= 1000
* -10⁴ <= target <= 10⁴


 Related Topics Array Two Pointers Sorting 👍 7072 👎 385

*/
