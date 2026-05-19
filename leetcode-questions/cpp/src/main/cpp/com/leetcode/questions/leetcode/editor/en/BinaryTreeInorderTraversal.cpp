/**
 * 94. Binary Tree Inorder Traversal
 * 
 * Given the root of a binary tree, return the inorder traversal of its nodes&#39; values.
&nbsp;
Example 1:

Input: root = [1,null,2,3]
Output: [1,3,2]
Explanation:


Example 2:

Input: root = [1,2,3,4,5,null,8,null,null,6,7,9]
Output: [4,2,6,5,7,1,3,9,8]
Explanation:


Example 3:

Input: root = []
Output: []

Example 4:

Input: root = [1]
Output: [1]

&nbsp;
Constraints:

	The number of nodes in the tree is in the range [0, 100].
	-100 &lt;= Node.val &lt;= 100

&nbsp;
Follow up: Recursive solution is trivial, could you do it iteratively?
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
    vector<int> inorderTraversal(TreeNode* root) { return {}; }
};
//leetcode submit region end(Prohibit modification and deletion)
