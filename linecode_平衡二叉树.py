/**
 * http://www.lintcode.com/zh-cn/problem/balanced-binary-tree/
 * 给定一个二叉树,确定它是高度平衡的。对于这个问题,一棵高度平衡的二叉树的定义是：一棵二叉树中每个节点的两个子树的深度相差不会超过1。 
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
    @return: True if this Binary tree is Balanced, or false.
    """
    def deepth(self, root):
        if not root:
            return 0
        if not root.left and not root.right:
            return 1
        return 1 + max(self.deepth(root.left), self.deepth(root.right))
        
    def isBalanced(self, root):
        # write your code here
        if not root:
            return True
        return (True if abs(self.deepth(root.left) - self.deepth(root.right)) <= 1 else False) and self.isBalanced(root.left) and self.isBalanced(root.right)
