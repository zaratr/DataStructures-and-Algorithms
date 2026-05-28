package com.leetcode.questions.leetcode.editor.en;

/**
 * 1. Two Sum
 *
 * Given an array of integers nums&nbsp;and an integer target, return indices of the two numbers such that they add up to target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.
You can return the answer in any order.
&nbsp;
Example 1:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

Example 2:

Input: nums = [3,2,4], target = 6
Output: [1,2]

Example 3:

Input: nums = [3,...
 */
import java.util.HashMap;
import java.util.Map;
public class TwoSum {
  //leetcode submit region begin(Prohibit modification and deletion)
  public static class Solution {
    public int[] twoSum(int[] nums, int target) {
      // 1. check base edge case - **however 2 <= nums.length <= 10^4**
      if (nums == null || nums.length < 2) return null;

      // 2. check for pairs to add into .
      // hash table method is the strongest here since it writes on its way to storing. so worst time, space complexity
      // will be O(N), O(N)

      /*
       * step through nums = [3,2,4] target = 6
       * i     , numsMap, nums[i], target - nums[i], target
       * i = 0, {{3, 0}}, 3      ,        , 6
       * i = 1, {{3, 0 }{2,1}}   , 6 - 2 = 4 , 6
       * i = 2, {{3, 0}{2,1}{3,4}}, 6 - 4 = 2, 6
       * 
          Big O Space, Time Complexity Induction
          Let n = |nums|. Use constants a,b,k > 0.

          Algebraic:
          T(n) ≤ a·n + b.
          Choose C = a + b and n0 = 1. Then for all n ≥ n0,
          T(n) ≤ a·n + b ≤ (a+b)·n = C·n.
          Hence ∃C>0,n0 such that T(n) ≤ C·n ∀n≥n0 ⇒ T(n) ∈ O(n).

          Induction:
          Property P(n): T(n) ≤ K·n for some K>0.
          Base: pick K ≥ T(1) so P(1) holds.
          Inductive step: assume P(n): T(n) ≤ K·n. For n+1,
          T(n+1) = T(n) + τ ≤ K·n + a (where τ ≤ a is work of one iteration).
          Choose K ≥ a. Then K·n + a ≤ K·n + K = K·(n+1).
          Thus P(n+1) holds. By induction P(n) holds ∀n ⇒ T(n) ∈ O(n).

          Space:
          S(n) ≤ n + s0 ≤ D·n for D = 1 + s0 and n ≥ 1.
          Thus ∃D>0,n0 such that S(n) ≤ D·n ∀n≥n0 ⇒ S(n) ∈ O(n).

          (Assumption: dict ops counted as O(1).)
       */
      Map <Integer, Integer> numsMap = new HashMap<>();
      for(int i = 0 ; i < nums.length; ++i){
        if (!numsMap.containsKey(target - nums[i]))
          numsMap.put(nums[i], i);
        else
          return new int[]{numsMap.get(target - nums[i]), i };
      }
      return null;
    }
  }
}
