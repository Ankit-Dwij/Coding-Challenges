class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = strs[0];
        
        for(int i =0 ;i<strs.size();i++){
            int j ;
            for (j=0;j<ans.size();j++){
                if(ans[j]!=strs[i][j])  break;
            }
                ans=ans.substr(0,j);
                if(ans=="") return ans;
            
        }
        return ans;
    }
};