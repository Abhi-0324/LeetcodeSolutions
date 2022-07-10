class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans = nums;
        int end  = nums.size()-1;
        int start = 0;
        
        for(int i= nums.size()-1 ; i>=0 ;i--) {
            if(abs(nums[start])<abs(nums[end])){
                ans[i] = nums[end]*nums[end];
                end--;
            }else{
                ans[i] = nums[start]*nums[start];
                start++;
            }
        }
        
        return ans;
        
    }
};