class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL) return 0;
        int value = root->val;
        if(value < p->val && value<q->val){
            return lowestCommonAncestor(root->right,p,q);
        }
        else if(value > p->val && value > q->val){
            return lowestCommonAncestor(root->left,p,q);
        }
        return root;
    }
};