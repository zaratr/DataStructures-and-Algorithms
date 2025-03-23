package com.leetcode.questions.leetcode.editor.en;

import java.util.*;

public class MaximumEqualFrequency{
    public static void main(String[] args){
        Solution solution = new MaximumEqualFrequency ().new Solution();
        solution. maxEqualFreq (new int[] {2,1,2,1,5,3,3,5});
    }

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
    public int maxEqualFreq(int[] nums) {
      int len = nums.length;
      int min = 0, max = 0, occurrences = 0, average = 0;
      Map<Integer, Integer> map = new HashMap<>();

      for(int i = 0; i < len; i++){
        occurrences = map.getOrDefault(nums[i], 0);
        average = average + nums[i];
        min = Math.min(min, occurrences);
        max = Math.min(max, occurrences);
        map.put(nums[i], occurrences + 1);
      }

      average /= len;

      if (max == min)

      for(int value : map.values()){
        if(value == max){}
        if(value == min){}

      }






        return 0;
    }
}
//leetcode submit region end(Prohibit modification and deletion)

}
