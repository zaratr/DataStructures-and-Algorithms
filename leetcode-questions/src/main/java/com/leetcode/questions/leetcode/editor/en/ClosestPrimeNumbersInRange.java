package com.leetcode.questions.leetcode.editor.en;

import java.util.ArrayList;

public class ClosestPrimeNumbersInRange{
    public static void main(String[] args){
        Solution solution = new ClosestPrimeNumbersInRange ().new Solution();
        int[] sol = solution. closestPrimes (19, 31);
        System.out.println("Expected: 29, 31\n Output: " + sol[0] +" - " + sol[1]);
    }

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
    public int[] closestPrimes(int left, int right) {

      int prime1=-1, prime2=-1;
      int min = Integer.MAX_VALUE;
      ArrayList<Integer> list = new ArrayList<>();

      for(int i = left; i <= right ; i++){
        if (isPrime(i) ){
          list.add(i);
        }
      }

      for(int i = 0; i < list.size() - 1; i++){
        if(min > list.get(i + 1) - list.get(i)){
          min = list.get(i + 1) - list.get(i);
          prime1 = list.get(i);
          prime2 = list.get(i + 1);
        }
      }
      return new int[] { prime1, prime2 };

    }
    public Boolean isPrime(int x){
      if(x < 2) return false;
      for(int i = 2; i < x; i++){
        if(x % i == 0) return false;
      }
      return true;
    }
}
//leetcode submit region end(Prohibit modification and deletion)

}
