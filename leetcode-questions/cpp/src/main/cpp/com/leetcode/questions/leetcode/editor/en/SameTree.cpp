/**
 * 100. Same Tree
 * 
 * Given the roots of two binary trees p and q, write a function to check if they are the same or not.
Two binary trees are considered the same if they are structurally identical, and the nodes have the same value.
&nbsp;
Example 1:

Input: p = [1,2,3], q = [1,2,3]
Output: true

Example 2:

Input: p = [1,2], q = [1,null,2]
Output: false

Example 3:

Input: p = [1,2,1], q = [1,1,2]
Output: false

&nbsp;
Constraints:

	The number of nodes in both trees is in the range [0, 100].
	-104 &lt;= Node.val &lt;= 104
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
    bool isSameTree(TreeNode* p, TreeNode* q) { return false; }
};
//leetcode submit region end(Prohibit modification and deletion)
