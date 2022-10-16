package com.leetcode.questions.leetcode.editor.en;

import java.util.Arrays;
import java.util.HashMap;
import java.util.*;

/**
 * Using intellij plugin: leetcode-editor to run code. Problem Domain below Implementation code. EXPERIMENT CODE BLOCKED COMMENTED OUT.
 * @see #main
 * @see Solution#twoSum
 * @link <a href="https://github.com/zaratr/leetcode-qustions/src/main/java/com/leetcode/questions/leetcode/editor/en/doc/content">TwoSum markdown</a>
 **/

 public class TwoSum{
    int[] t1;
    int t2;
    public TwoSum(int[] t1, int t2)
    {      this.t1 = t1; this.t2 = t2;    }
    public void main(){
    var solution = new Solution().
    twoSum(t1, t2);
      //System.out.println(solution + "[1,2]");
      System.out.println(solution + "[0,1]");
      return ;
    }


    //leetcode submit region begin(Prohibit modification and deletion)


  class Solution {
    public int[] twoSum(int[] nums, int target) {
      int[] tuple = new int[2];
      int size = nums.length;
      int i = 0, j = size -1;
      while(i < j)
      {
        if(nums[i] + nums[j] == target)
        {
          return new int[]{i,j};
        }
        if(j == i+1) {i++; j = size -1;}
        else j--;
      }
      return null;
    }
  }

/*
class Solution {
    public int[] twoSum(int[] nums, int target) {
      int size = nums.length, bij = (size -1)/2;
      int i = 0, j = size -1;
      List<Integer> list = new ArrayList<>();
      Map<Integer, Integer> map = new HashMap<>();
      int[] tuple = nums;
      for (int it = 0; it < size; ++it)
      {
        map.put(nums[it],it);
        list.add(nums[it]);
      }

      Arrays.sort(nums);
      while(i < j)
      {
        if(nums[i] + nums[j] == target)
        {
          //return new int[]{list.indexOf(nums[i]), list.indexOf(nums[j])};
          //return new int[]{ map.get(nums[i]), map.get(nums[j]) };
        }
        else if( (nums[i] + nums[j]) < target)
        {
          //move j down
          //bij = (i + j)/2;
          i++;
        }
        else if(nums[i] + nums[j] > target)
        {
          //move j up
          //bij = (j + (size -1))/2;
          j = (i + j)/2;
        }
        //if(j <= i) {i++;}
        //j = bij;
      }
        return null;
    }
}
 */
//leetcode submit region end(Prohibit modification and deletion)
}


/**
Given an array of integers nums and an integer target, return indices of the
two numbers such that they add up to target.

 You may assume that each input would have exactly one solution, and you may
not use the same element twice.

 You can return the answer in any order.


 Example 1:


Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].


 Example 2:


Input: nums = [3,2,4], target = 6
Output: [1,2]


 Example 3:


Input: nums = [3,3], target = 6
Output: [0,1]



 Constraints:


*/
