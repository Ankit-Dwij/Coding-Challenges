class Solution {
public:
    bool isValid(string s) {
        stack<int> st;
        int i=0;
        while(i<s.size()){
            st.push(i); i++;
            while(!st.empty() && ( (s[st.top()]=='(' && s[i]==')') || (s[st.top()]=='{' && s[i]=='}') ||(s[st.top()]=='[' && s[i]==']') )){
                st.pop();i++;
            }
        }
        return (st.empty()) ? true : false;
        
        
    }
};