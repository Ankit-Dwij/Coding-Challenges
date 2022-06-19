class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int mx = INT_MIN;
        int currMax =0;
        for(int i=0;i<nums.size();i++){
            currMax+=nums[i];
            mx = max(currMax,mx);
            if(currMax< 0){ currMax =0;}
        }
        return mx;
        
    }
};