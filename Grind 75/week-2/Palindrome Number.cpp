class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x);
        int start =0,end = s.length()-1;
        while(start<end){
            if(s[start++]!=s[end--])    return false;
        }
        return true;
    }
};

//SOLUTION_2

class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        
        long long int rev = 0;
        for(int i=x;i>=1;i=floor(i/10)){
            rev = rev*10 + i%10;
        }
        return rev==x;
            
    }
};
