class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0 , j=0 , maxLength=0 ;
        unordered_map<char,int> m;
        while(j<s.length()){
            m[s[j]]++;
            if(m.size() == j-i+1)
                maxLength=max(maxLength,j-i+1);
            else{
                while( m.size() < j-i+1 ){
                m[s[i]]--;
                if(m[s[i]]==0)  m.erase(s[i]);
                i++;
                }
            }
            j++;

        }
        return maxLength;
    }
};