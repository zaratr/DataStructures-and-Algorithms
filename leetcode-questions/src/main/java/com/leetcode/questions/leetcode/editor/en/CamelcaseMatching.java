package com.leetcode.questions.leetcode.editor.en;

import java.util.*;

public class CamelcaseMatching{
    public static void main(String[] args){
        Solution solution = new CamelcaseMatching ().new Solution();
        System.out.println(
          solution.camelMatch (new String[]{"FooBar","FooBarTest","FootBall","FrameBuffer","ForceFeedBack"}, "FoBa")
          );
    }

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
    public List<Boolean> camelMatch(String[] queries, String pattern) {
      List<Boolean> list = new ArrayList<>();
      boolean match = false;

      for (String query : queries)
        list.add(isMatch(query, pattern));

      return list;
    }

    public Boolean isMatch(String query, String pattern){
      int queryLen = query.length(), patternLen = pattern.length();
      int i = 0, j = 0 ;

      while(i < queryLen && j < patternLen){
        if(query.charAt(i) == pattern.charAt(j)){
          i++;
          j++;
        }
        else if(Character.isLowerCase(query.charAt(i))){
          ++i;
        }
        else
          return false;
      }
      while(i < queryLen){
        if(!Character.isLowerCase(query.charAt(i))){
          return false;
        }
        ++i;
      }

      return j == pattern.length();
    }
}
//leetcode submit region end(Prohibit modification and deletion)

}
