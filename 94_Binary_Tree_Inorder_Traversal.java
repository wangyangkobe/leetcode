/**
 * https://leetcode.com/problems/binary-tree-inorder-traversal/
 *
 */



/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode(int x) { val = x; }
 * }
 */
public class Solution {
    public List<Integer> inorderTraversal(TreeNode root) {
        Stack<TreeNode> stack = new Stack<TreeNode>();
        TreeNode currNode = root;
        
        List<Integer> res = new ArrayList<Integer>();
        while(currNode != null || !stack.empty()) {
            while(currNode != null) {
                stack.push(currNode);
                currNode = currNode.left;
            }
            
            if(!stack.empty()) {
                TreeNode tmp = stack.pop();
                res.add(tmp.val);
                currNode = tmp.right;
            }
        }
        return res;
    }
}
