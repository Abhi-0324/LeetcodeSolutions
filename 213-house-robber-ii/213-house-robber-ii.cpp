class Solution {
public:
    int robF(vector<int>& nums) {
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
    int rob(vector<int>& nums) {
        vector<int> temp1 , temp2;
        int n = nums.size();
        if(n<2) return nums[0];
        for(int i=0 ;i<n ;i++){
            if(i!=0) temp1.push_back(nums[i]);
            if(i!= n-1) temp2.push_back(nums[i]);
        }
        return max(robF(temp1) ,robF(temp2));
        
    }
};