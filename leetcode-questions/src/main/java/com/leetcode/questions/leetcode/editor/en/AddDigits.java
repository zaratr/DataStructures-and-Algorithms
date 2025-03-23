package com.leetcode.questions.leetcode.editor.en;

import java.lang.reflect.Array;
import java.util.*;

public class AddDigits{
    public static void main(String[] args){
        Solution solution = new AddDigits ().new Solution();
        System.out.println(
          solution.addDigits(111111)
        );
    }

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {

  public int addDigits(int num){
    if(num < 10) return num;
    int sum =num;
    int remainder = 0, divided= num, sumit =0;

    while(sum >= 10){
      if(divided != 0){
        remainder = divided % 10;
        divided /= 10;
        sumit += remainder;
      }
      else if(divided == 0){
        divided = sum = sumit;
        remainder = sumit = 0;
      }
    }


    return sum;
  }
}
//leetcode submit region end(Prohibit modification and deletion)

}
