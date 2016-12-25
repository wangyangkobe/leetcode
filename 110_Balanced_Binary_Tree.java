/**
 * https://leetcode.com/problems/balanced-binary-tree/
 * Given a binary tree, determine if it is height-balanced.
 * For this problem, a height-balanced binary tree is defined as a binary tree in which the depth of the two subtrees of every node 
 * never differ by more than 1. 
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
    public int deepth(TreeNode root) {
        if(root == null)
            return 0;
        if (root.left == null && root.right == null)
            return 1;
        return Math.max(deepth(root.left), deepth(root.right)) + 1;
    }
    public boolean isBalanced(TreeNode root) {
        if(root == null)
            return true;
        return isBalanced(root.left) && isBalanced(root.right) && (Math.abs(deepth(root.left) - deepth(root.right)) > 1 ? false : true);
    }
}
