class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        //13542
        int breakPoint = -1, s= nums.size()-1;
        
        for(int i = s ; i>0 ;i--){
            
            if(nums[i]>nums[i-1]){
            breakPoint = i-1;
            break;
            }
           //123
            //-1<0
        }
        //if there is no any breakPoint 
        if(breakPoint<0){
         reverse(nums.begin(), nums.end());
        return;
        }
        
        
        for(int i = s ; i>breakPoint;i--){
            if (nums[i] > nums[breakPoint]){
            swap(nums[breakPoint], nums[i]);
            reverse(nums.begin() + breakPoint + 1, nums.end());
            break;
        }
    }
            
        }
        
    
};