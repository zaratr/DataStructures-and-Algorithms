package com.leetcode.questions.leetcode.editor.en;


import java.util.HashMap;
import java.util.Map;

/**
   * Longest palindrome in string
   * Palindrome is a word or phrase or other sequences of characters that reads forwards as it does baskwords
   * Edge Cases:
   * 1. if one letter
   * 2. if two letters or more
   * 3. if uppercase and lowercase
   * 4. if odd or even length. if odd then handle the shared character
   */
  public class LongestPalindromicSubstring_5{
    public String main(String arg){
      var solution = new Solution().longestPalindrome(arg);

      return solution;
    }


    //leetcode submit region begin(Prohibit modification and deletion)
    class Solution {
      public String longestPalindrome(String s) {
        String tempS = s;
        s = tempS.toLowerCase();
        int lenLongest = 0, start = 0, end = 0;
        int odd = 0 , even = 0;

        if(s == null || s.length() == 1) return s;



        for(int i = 0; i < s.length(); i++){

          odd = longestPalindrome(i, i, s) ;
          even = longestPalindrome(i, i+1,s);

        lenLongest = Integer.max(odd, even);
        if(lenLongest > end - start){
          start = i - (lenLongest - 1)/2;
          end  = i + lenLongest/2;
        }

        }
        return tempS.substring(start, end + 1);
      }

      public int longestPalindrome(int left, int right, String s ) {
        while(left >= 0
              && right < s.length()
              &&  s.charAt(left) == s.charAt(right)
        ){
          left --;
          right ++;

        }


        return right - left - 1;
      }
    }

//leetcode submit region end(Prohibit modification and deletion)



  }
