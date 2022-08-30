class Solution {
public:

    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n,-1);
        dp[0] =nums[0];
        for(int index=1 ;index<n ;index++){
            int take = nums[index];
            if(index>1) take+= dp[index-2];
            int notTake = dp[index-1];
             dp[index]=max(take ,notTake);
        }
       return dp[n-1];
        
    }
};