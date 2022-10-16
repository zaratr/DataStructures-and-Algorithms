
package com.leetcode.questions.leetcode.editor.en;

import java.util.*;

/**
 * Using intellij plugin: leetcode-editor to run code. Problem Domain below Implementation code.
 * @see #main
 * @see Solution#plusOne
 * @link <a href="https://github.com/zaratr/leetcode-qustions/src/main/java/com/leetcode/questions/leetcode/editor/en/doc/content">PlusOne markdown</a>
 **/

 public class PlusOne{

   public int[] digits;
   public PlusOne(int[] digitsArray){this.digits = digitsArray;}
    public void main(){
    var solution = new Solution().plusOne(digits);
      this.digits = solution;
    }
    public int[] getResult()
    {
      return digits;
    }


    //leetcode submit region begin(Prohibit modification and deletion)
class Solution {
    public int[] plusOne(int[] digits) {

      List<Integer> list = new ArrayList<>();
      for(Integer element : digits)
      {
        list.add(element);
      }
      //Arrays.setAll(list, i -> digits[i]);
      for (int i = 0; i < digits.length; i++)
      {
        if(i==0 && digits[0] == 9)
        {
          list.set(i, 0);
          list.add(i, 1);
        }
      }
      Arrays.setAll(digits = new int[list.size()], list::get);
      return digits;
    }
}
//leetcode submit region end(Prohibit modification and deletion)

}

//You are given a large integer represented as an integer array digits, where
//each digits[i] is the iᵗʰ digit of the integer. The digits are ordered from most
//significant to least significant in left-to-right order. The large integer does
//not contain any leading 0's.
//
// Increment the large integer by one and return the resulting array of digits.
//
//
//
// Example 1:
//
//
//Input: digits = [1,2,3]
//Output: [1,2,4]
//Explanation: The array represents the integer 123.
//Incrementing by one gives 123 + 1 = 124.
//Thus, the result should be [1,2,4].
//
// // Example 2: //
//
//Input: digits = [4,3,2,1]
//Output: [4,3,2,2]
//Explanation: The array represents the integer 4321.
//Incrementing by one gives 4321 + 1 = 4322.
//Thus, the result should be [4,3,2,2].
//
//
// Example 3:
//
//
//Input: digits = [9]
//Output: [1,0]
//Explanation: The array represents the integer 9.
//Incrementing by one gives 9 + 1 = 10.
//Thus, the result should be [1,0].
//
//
//
// Constraints:
//
//
// 1 <= digits.length <= 100
// 0 <= digits[i] <= 9
// digits does not contain any leading 0's.
//
//

