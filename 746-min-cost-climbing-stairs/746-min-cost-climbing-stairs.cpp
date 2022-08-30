class Solution {
public:
    int f(int index , vector<int>& cost , vector<int> &dp){
        if(index ==0 || index ==1){
            return cost[index];
        }
        if(dp[index] != -1) return dp[index];
        int left = f(index-1 , cost , dp) ;
        int right = INT_MAX;
        if(right>1)
        right = f(index-2 , cost ,dp) ;
        if(index == cost.size()){
            return  dp[index] = min(left ,right);
        }
        
        return dp[index] = min(left ,right) + cost[index];
        
        
    }
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int> dp(cost.size()+1, -1);
        return f(cost.size(),cost,dp);
    }
};