class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        vector<vector<int>> res;
        sort(nums.begin(), nums.end());
        
        for(int i=0 ; i<nums.size()-2 ; i++){
            
            if(i==0 || (i>0 && nums[i] != nums[i-1])){
                
                int low = i+1, high = nums.size()-1 ;
                
                while(low<high){                  
                
                if(nums[low] + nums[high] ==  -nums[i]){
                    vector<int> t{nums[i],nums[low],nums[high]};
                    res.push_back(t);
                    while(low<high && nums[low] == nums[low+1]) low++;
                    while(low<high && nums[high] == nums[high-1])   high--;   
                    
                    low++;high--;
                }
                else if(nums[low]+nums[high]<-nums[i])  low++;
                else    high--;
                
                }                
            }
        }
        return res;     
       
        
        
    }
};