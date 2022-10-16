
package com.leetcode.questions.leetcode.editor.en;
/**
 * Using intellij plugin: leetcode-editor to run code. Problem Domain below Implementation code.
 * @see #main
 * @see Solution#largestVariance
 * @link <a href="https://github.com/zaratr/leetcode-qustions/src/main/java/com/leetcode/questions/leetcode/editor/en/doc/content">SubstringWithLargestVariance markdown</a>
 **/

 public class SubstringWithLargestVariance{
   String str;
   public SubstringWithLargestVariance(String str){this.str = str;}
    public void main(){
    var solution = new Solution().
      largestVariance(str);
    }


    //leetcode submit region begin(Prohibit modification and deletion)
class Solution {
    public int largestVariance(String s) {
        return 0;
    }
}
//leetcode submit region end(Prohibit modification and deletion)

}

//The variance of a string is defined as the largest difference between the
//number of occurrences of any 2 characters present in the string. Note the two
//characters may or may not be the same.
//
// Given a string s consisting of lowercase English letters only, return the
//largest variance possible among all substrings of s.
//
// A substring is a contiguous sequence of characters within a string.
//
//
// Example 1:
//
//
//Input: s = "aababbb"
//Output: 3
//Explanation:
//All possible variances along with their respective substrings are listed
//below:
//- Variance 0 for substrings "a", "aa", "ab", "abab", "aababb", "ba", "b",
//"bb", and "bbb".
//- Variance 1 for substrings "aab", "aba", "abb", "aabab", "ababb", "aababbb",
//and "bab".
//- Variance 2 for substrings "aaba", "ababbb", "abbb", and "babb".
//- Variance 3 for substring "babbb".
//Since the largest possible variance is 3, we return it.
//
//
// Example 2:
//
//
//Input: s = "abcde"
//Output: 0
//Explanation:
//No letter occurs more than once in s, so the variance of every substring is 0.
//
//
//
//

