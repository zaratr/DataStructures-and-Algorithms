package com.leetcode.questions.leetcode.editor.en;

import java.util.*;


/**
 * Perfect, that gives me a clear picture. Thanks for sharing.
*
* Here’s what I suggest for us:

* Pick a category to start with. Arrays/strings are the most common and also form the basis of many interview problems. Once you’re strong there, we can move on to hash maps, two pointers, recursion/DFS/BFS, dynamic programming, etc.

* Work through problems step by step. I’ll guide you with hints and structure (not just the answer) so you get back into the problem-solving rhythm.

* Mix in review. After a few problems, I’ll throw a quick recap or a variation at you to check mastery.

* -  Let’s start with arrays, since they show up everywhere.

* Here’s a warm-up problem (very common in interviews):

* Problem:
* Given an array of integers nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

* Example:

* Input: nums = [1,2,3,1] → Output: true

* Input: nums = [1,2,3,4] → Output: false
* Time Complexity is O(N) from iterations on arr length and O(1) from insert and lookup.
* Space Complexity is O(N) because adding memory O(1) each time while iterating through arr. So O(N) for each element in array.worst case is O(N2) on hash collisions but rare  and on worst case O(N) when numbers in array are unique.
* 
*/

public class DuplicateIntArr{
	public void main(String[] args){
		Solution solution = new DuplicateIntArr().new Solution();

		Boolean isDup = solution.duplicateIntArr(new int[]{1,2,3,4,5,6});

	}

  public Boolean getMethod(int[] arr){
    Solution solution  = new DuplicateIntArr(). new Solution();
    return solution.duplicateIntArr(arr);
  }

	class Solution {
		public Boolean duplicateIntArr(int[] arr){
			if(arr == null || arr.length < 2){ return false;}

			int counter = 0;
			HashMap<Integer, Integer> map = new HashMap<>();
/*
			for (int i = 0; i < arr.length; i++){
				if(map.containsKey(arr[i])){
					counter = map.get(arr[i]);
          counter = counter + 1;
          map.put(arr[i], counter);
          return true;
				}
        else{
          map.put(arr[i], 0);
        }
			}
      */
      for( int i : arr){
        if(map.containsKey(i))
          return true;
        else
          map.put(i, 0);
      }

			return false;
		}
	}
}

