class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans(n+1);
        ans[0]=0;
        //EVEN  -  n/2
        //ODD   -  1 + n/2
        for(int i=1; i<=n;i++){
           ans[i] = ans[i/2] + i%2 ;
        }
        return ans;
    }
};