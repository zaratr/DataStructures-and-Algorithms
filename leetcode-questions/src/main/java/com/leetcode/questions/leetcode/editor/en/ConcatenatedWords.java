package com.leetcode.questions.leetcode.editor.en;
/**
 * Using intellij plugin: leetcode-editor to run code. Problem Domain below Implementation code.
 * @see #main
 * @see Solution#concatenatedWords
 * @link <a href="https://github.com/zaratr/leetcode-qustions/src/main/java/com/leetcode/questions/leetcode/editor/en/doc/content">ConcatenatedWords markdown</a>
 **/
import java.util.List;
 public class ConcatenatedWords{
    public void main(){
    var solution = new Solution().
    findAllConcatenatedWordsInADict(null);
    }


    //leetcode submit region begin(Prohibit modification and deletion)
class Solution {
    public List<String> findAllConcatenatedWordsInADict(String[] words) {

      return null;
    }
}
//leetcode submit region end(Prohibit modification and deletion)

}

/**
Given an array of strings words (without duplicates), return all the
concatenated words in the given list of words.

 A concatenated word is defined as a string that is comprised entirely of at
least two shorter words in the given array.


 Example 1:


Input: words = ["cat","cats","catsdogcats","dog","dogcatsdog","hippopotamuses",
"rat","ratcatdogcat"]
Output: ["catsdogcats","dogcatsdog","ratcatdogcat"]
Explanation: "catsdogcats" can be concatenated by "cats", "dog" and "cats";
"dogcatsdog" can be concatenated by "dog", "cats" and "dog";
"ratcatdogcat" can be concatenated by "rat", "cat", "dog" and "cat".

 Example 2:


Input: words = ["cat","dog","catdog"]
Output: ["catdog"]



 Constraints:


 1 <= words.length <= 10^4
 1 <= words[i].length <= 30
 words[i] consists of only lowercase English letters.
 All the strings of words are unique.
 1 <= sum(words[i].length) <= 10^5



*/
