package com.leetcode.questions.leetcode.editor.en;
/**
 * Using intellij plugin: leetcode-editor to run code. Problem Domain below Implementation code.
 * @see #main
 * @see Solution#longestDuplicateSubstring
 * @link <a href="https://github.com/zaratr/leetcode-qustions/src/main/java/com/leetcode/questions/leetcode/editor/en/doc/content">LongestDuplicateSubstring markdown</a>
 **/

 public class LongestDuplicateSubstring{
    public void main(){
    var solution = new Solution().
      longestDupSubstring(null);
    }


    //leetcode submit region begin(Prohibit modification and deletion)
class Solution {
    public String longestDupSubstring(String s) {
      return null;
    }
}
//leetcode submit region end(Prohibit modification and deletion)

}

/**
Given a string s, consider all duplicated substrings: (contiguous) substrings
of s that occur 2 or more times. The occurrences may overlap.

 Return any duplicated substring that has the longest possible length. If s
does not have a duplicated substring, the answer is "".


 Example 1:
 Input: s = "banana"
Output: "ana"

 Example 2:
 Input: s = "abcd"
Output: ""


 Constraints:


 2 <= s.length <= 3 * 10^4
 s consists of lowercase English letters.


 Related Topics String Binary Search Sliding Window Rolling Hash Suffix Array

*/
