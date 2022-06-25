class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string a = "", b = "";
        
        for(auto it:s) it == '#' ? a.size() > 0 ? a.pop_back() : void() : a.push_back(it);
        for(auto it:t) it == '#' ? b.size() > 0 ? b.pop_back() : void() : b.push_back(it);
        
        return a==b;
        
        
    }
};