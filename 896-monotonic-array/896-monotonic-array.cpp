class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int size = nums.size();

        
        if(nums[0]<nums[size-1]){
            for(int i =0 ; i<size-1 ;i++){
                if(nums[i]>nums[i+1]){
                    return false;
                } 
            }
            
        }else{
             for(int i =0 ; i<size-1 ;i++){
                if(nums[i]<nums[i+1]){
                    return false;
                }
            }
        }
     return true;   
    }
};