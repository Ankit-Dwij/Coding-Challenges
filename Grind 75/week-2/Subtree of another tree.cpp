/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        return areEqual(root,subRoot) || (root->left && isSubtree(root->left,subRoot)) || (root->right && isSubtree(root->right,subRoot));
    }
    
    bool areEqual(TreeNode* a, TreeNode* b){
        
        if(!a || !b)    return a==b;
        
        return (a->val == b->val) && areEqual(a->left,b->left) && areEqual(a->right,b->right);
    }
};