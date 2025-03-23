package com.leetcode.questions.leetcode.editor.en;

import java.util.*;

public class DivideAnArrayIntoSubarraysWithMinimumCostI{
    public static void main(String[] args){
        Solution solution = new DivideAnArrayIntoSubarraysWithMinimumCostI ().new Solution();
        System.out.println(
          solution.minimumCost(new int[] {10,3,1,1}) + " : " + "expected: 12"
        );
    }
  /*
  C(N_r) = n!/(r!(n-r)!)
  10,3,1,1, 5, 4
  10 - 3 - 1,1,5,4
  10 - 3,1 - 1,5,4
  10,3 - 1 - 1,5,4
  10 - 3,1,1 - 5,4
  10 - 3,1,1,5 - 4
  10,3 - 1,1,5 - 4
  10,3,1 - 1,5 - 4
  10,3,1 - 1 - 5,4
  10,3,1,1 - 5 - 4
  10,3 - 1,1 - 5,4
   */

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
  public int minimumCost(int[] nums) {
    int sum=nums[0],min1=Integer.MAX_VALUE,min2=Integer.MAX_VALUE;
    for(int i=1;i<nums.length;i++)
    {
      if(nums[i]<min1)
      {
        min2=min1;
        min1=nums[i];
      }
      else if(nums[i]<min2)
      {
        min2=nums[i];
      }
    }
    return sum+min1+min2;
  }
}
//leetcode submit region end(Prohibit modification and deletion)

}
