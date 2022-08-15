class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count = 0;
        while(n){
            //check if least sig. is 1
            if(n&1==1){
                count++;
            }
            //right shift
            n = n/2;
        }
        return count;
    }
};