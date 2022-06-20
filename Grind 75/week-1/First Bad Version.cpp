// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long long int l=1,h=n;
        while(h>=l){
            long long int m = (h+l)/2;
            if(isBadVersion(m)==true && isBadVersion(m-1)==false){
                return m;
            }
            else if(isBadVersion(m)==false){
                l = m+1;
            }else{
                h = m-1;
            }
            
        }
        return -1;
        
        
    }
};