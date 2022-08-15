class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ans = nums.size();
        int j=0;
        for(auto it:nums){
            ans ^= it;
            ans ^=j;
            j++;
        }
       
        return ans;
    }
};