class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> m;
        for(int i=0;i<s.length();++i){
            m[s[i]]++;
        }
        int ans=0, odd =0;
        for(auto it:m){
            if(it.second % 2 == 0) { 
                ans+=it.second;
            }
            else{
                ans += it.second-1;
                odd=1;
            }
        }
        return ans+odd;
    }
};