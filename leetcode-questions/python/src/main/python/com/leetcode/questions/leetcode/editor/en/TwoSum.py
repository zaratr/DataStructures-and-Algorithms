"""
1. Two Sum

Given an array of integers nums&nbsp;and an integer target, return indices of the two numbers such that they add up to target.
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
"""

class Solution(object):

    """
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
    """
    def twoSum(self, nums:list, target):
        if(nums == None or len(nums) < 2):
            return nums
        
        myDict:dict = {}
        
        for i, num in enumerate(nums):
            if target - num in myDict:
                return [myDict.get(target - num), i]
            myDict [num] = i
        return None

