package com.leetcode.questions.leetcode.editor.en;

import java.util.*;

/**
 * Using intellij plugin: leetcode-editor to run code. Problem Domain below Implementation
 * @see #main
 * @see Solution#threeSumClosest(int[], int)
 * @link <a href="https://github.com/zaratr/leetcode-qustions/src/main/java/com/leetcode/questions/leetcode/editor/en/doc/content">ThreeSumClosest markdown</a>
 **/


 public class ThreeSumClosest{
   private int[] t1;
   private int t2;

   public ThreeSumClosest(){}
  public ThreeSumClosest(int[] t1, int t2){
     this.t1 = t1; this.t2 = t2;
  }
    public void main(){
    var solution = new Solution().
    threeSumClosest(t1, t2);
    int x = Integer.compare(solution, 2924);
    return;
    }

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
    public int threeSumClosest(int[] nums, int target)
    {
      if(nums.length == 0 ) return 0;
      int closest = Integer.MAX_VALUE, sum = 0, savedSum = 0, size = nums.length;
      Arrays.sort(nums);
      for(int i = 0; i <  size; i++)
      {
        int j = i+1, k = size - 1;
        while(j < k)
        {
            sum = nums[i] + nums[j] + nums[k];

            if(Math.abs(sum - target) <= closest)
            {
              closest = Math.abs(sum - target);
              savedSum = sum;
            }
            if(sum < target)
              ++j;
            else
              --k;
        }
      }
      //return map.get(closest);
      return savedSum;
    }
}


//leetcode submit region end(Prohibit modification and deletion)

}


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



*/
