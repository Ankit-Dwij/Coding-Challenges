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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return helper(nums,0,nums.size());        
    }
    
    TreeNode* helper(vector<int>& nums, int l, int r){
        if(r<=l) return  NULL;
        int m = (l+r)/2;
        TreeNode* t= new TreeNode(nums[m]);
        t->left = helper(nums,l,m);
        t->right = helper(nums,m+1,r);
        return t;
    }
};