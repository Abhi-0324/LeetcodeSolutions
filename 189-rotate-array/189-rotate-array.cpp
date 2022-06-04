class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int x = nums.size();
        vector<int> temp(x);
       for(int i = 0;i<x; i++){
            temp[(i+k)%x]=nums[i];
        }
        
        nums = temp;
        
    }
    

    
};