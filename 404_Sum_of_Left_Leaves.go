/*
 * https://leetcode.com/problems/sum-of-left-leaves/
 * Find the sum of all left leaves in a given binary tree.
   Example:

    3
   / \
  9  20
    /  \
   15   7

 * There are two left leaves in the binary tree, with values 9 and 15 respectively. Return 24.
 *
 */
 
 
/**
 * Definition for a binary tree node.
 * type TreeNode struct {
 *     Val int
 *     Left *TreeNode
 *     Right *TreeNode
 * }
 */
 func isLeaf(node *TreeNode) bool {
     return (node.Left == nil && node.Right == nil)
 }
func sumOfLeftLeaves(root *TreeNode) int {
    if root == nil {
        return 0
    }
    res := 0
    if root.Left != nil && isLeaf(root.Left){
        res = root.Left.Val
    }
    
    return res + sumOfLeftLeaves(root.Left) + sumOfLeftLeaves(root.Right)
    
}
