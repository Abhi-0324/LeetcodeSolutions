class Solution {
public:
    void reverse(vector<int>& nums,int left,int right){
        while(left<right){
            swap(nums[left++],nums[right--]);
        }
        
    }
    void rotate(vector<int>& nums, int k) {
        int x = nums.size();
          k = k%x;
        reverse(nums,0,x-k-1);
        reverse(nums,x-k,x-1);
        reverse(nums,0,x-1);
    }      
    
};