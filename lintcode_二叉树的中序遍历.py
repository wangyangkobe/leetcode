/**
 * http://www.lintcode.com/zh-cn/problem/binary-tree-inorder-traversal/#
 *
 *
 */

"""
Definition of TreeNode:
class TreeNode:
    def __init__(self, val):
        self.val = val
        self.left, self.right = None, None
"""


class Solution:
    """
    @param root: The root of binary tree.
    @return: Inorder in ArrayList which contains node values.
    """
    def inorderTraversal(self, root):
        # write your code here
        res = []
        stack = []
        cur = root
        while(cur or stack):
            while(cur):
                stack.append(cur)
                cur = cur.left
            if stack:
                tmp = stack.pop()
                res.append(tmp.val)
                cur = tmp.right
        return res
  
//////////////// c++ //////////
/**
 * Definition of TreeNode:
 * class TreeNode {
 * public:
 *     int val;
 *     TreeNode *left, *right;
 *     TreeNode(int val) {
 *         this->val = val;
 *         this->left = this->right = NULL;
 *     }
 * }
 */
class Solution {
    /**
     * @param root: The root of binary tree.
     * @return: Inorder in vector which contains node values.
     */
public:
    vector<int> inorderTraversal(TreeNode *root) {
        // write your code here
        vector<int> res;
        stack<TreeNode*> s;
        TreeNode* cur = root;
        while(cur || !s.empty())
        {
            while(cur)
            {
                s.push(cur);
                cur = cur->left;
            }
            if(!s.empty())
            {
                res.push_back(s.top()->val);
                cur = s.top()->right;
                s.pop();
            }
        }
        return res;
    }
};
