/**
 * 95. Unique Binary Search Trees II
 * 
 * Given an integer n, return all the structurally unique BST&#39;s (binary search trees), which has exactly n nodes of unique values from 1 to n. Return the answer in any order.
&nbsp;
Example 1:

Input: n = 3
Output: [[1,null,2,null,3],[1,null,3,2],[2,1,3],[3,1,null,null,2],[3,2,null,1]]

Example 2:

Input: n = 1
Output: [[1]]

&nbsp;
Constraints:

	1 &lt;= n &lt;= 8
 */

#include <vector>
#include <string>
#include <algorithm>
#include <iostream>

using namespace std;

struct TreeNode { int val; TreeNode* left; TreeNode* right; TreeNode(int x = 0, TreeNode* left = nullptr, TreeNode* right = nullptr) : val(x), left(left), right(right) {} };

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<TreeNode*> generateTrees(int n) { return {}; }
};
//leetcode submit region end(Prohibit modification and deletion)
