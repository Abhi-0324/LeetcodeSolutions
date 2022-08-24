class Solution {
public:
    int ways(int index,vector<int>& dp){
  
        if(dp[index] != -1) return dp[index];
        int left = ways(index-1,dp);
        int right = ways(index-2,dp);
        return dp[index]=left+right;
    }
    int climbStairs(int n) {
        vector<int> dp(n+1,-1);
        dp[0] = 1;
        dp[1] = 1;
        return ways(n,dp);
    }
};