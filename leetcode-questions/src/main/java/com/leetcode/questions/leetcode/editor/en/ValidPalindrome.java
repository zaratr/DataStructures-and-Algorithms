package com.leetcode.questions.leetcode.editor.en;

public class ValidPalindrome{
    public static void main(String[] args){
        Solution solution = new ValidPalindrome ().new Solution();
        System.out.println(
//          solution. isPalindrome ("A man, a plan, a canal: Panama")
          solution.isPalindrome("0P")
        );
    }

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
    public boolean isPalindrome(String s) {

//      s = s.replaceAll("[^a-zA-Z0-9]", "");
      int left = 0, right = s.length() - 1;

      while (left < right)
      {
        while (left < right && !isAlphaNumeric(s.charAt(left))){
          ++left;
        }
        while(left < right && !isAlphaNumeric(s.charAt(right))){
          --right;
        }
        if(Character.toLowerCase(s.charAt(left)) != Character.toLowerCase(s.charAt(right)))
        {
          return false;
        }
        ++left;
        --right;
      }

       return true;
    }

    public boolean isAlphaNumeric(char c) {

      return (c >= 'a' && c <= 'z')
        || (c >= 'A' && c <= 'Z')
        || (c >= '0' && c <= '9');
    }
}
//leetcode submit region end(Prohibit modification and deletion)

}
