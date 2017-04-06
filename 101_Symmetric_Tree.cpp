//   https://leetcode.com/problems/symmetric-tree/#/description
//   Given a binary tree, check whether it is a mirror of itself (ie, symmetric around its center).
//   For example, this binary tree [1,2,2,3,4,4,3] is symmetric.
//   But the following [1,2,2,null,3,null,3] is not.


/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        
        if(!root)
            return true;
            
        return isSymmetricHelp(root->left, root->right);
    }
    
    bool isSymmetricHelp(TreeNode* left, TreeNode* right) {
        if(!left || !right)
            return left == right;
            
        if(left->val != right->val)
            return false;
            
        return isSymmetricHelp(left->left, right->right) && isSymmetricHelp(left->right, right->left);
    }
};


/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if(!root)
            return true;
            
        stack<TreeNode*> s;
        
        if(!(root->left) || !(root->right))
            return root->left == root->right;
    
        s.push(root->left);
        s.push(root->right);
        
        while(!s.empty()) {
            TreeNode* right = s.top();
            s.pop();
            TreeNode* left  = s.top();
            s.pop();
            
            if(!right && !left)
                continue;
                
            if(!left || !right)
                return false;
                
            if(right->val != left->val)
                return false;
            
            s.push(left->left);
            s.push(right->right);
            s.push(left->right);
            s.push(right->left);
        }
        return true;
    }
};
