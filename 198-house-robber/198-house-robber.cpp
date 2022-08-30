class Solution {
public:

    int rob(vector<int>& nums) {
        int n = nums.size();
        int prev1 =nums[0];
        int prev2 = 0;
        int curri =0;
        for(int index=1 ;index<n ;index++){
            int take = nums[index] + prev2;
            int notTake = prev1;
             curri=max(take ,notTake);
            prev2 = prev1;
            prev1 = curri;
        }
       return prev1;
        
    }
};