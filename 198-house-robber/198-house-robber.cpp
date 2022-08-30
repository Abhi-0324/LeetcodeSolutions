class Solution {
public:
   int rob(int index , vector<int> &nums ,vector<int> &dp){
        if(index == 0){
            return nums[index];
        }
        if(index<0) return 0;
        if(dp[index] != -1){
          return dp[index];
        }
        int take = nums[index] + rob(index-2,nums,dp);
        int notTake = rob(index-1 ,nums ,dp);
        return dp[index] =max(take,notTake);
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n,-1);
        return rob(n-1 ,nums,dp);
        
    }
};