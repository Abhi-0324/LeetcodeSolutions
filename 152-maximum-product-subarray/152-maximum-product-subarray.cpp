class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int x= nums.size();
        int i =1;
        int maxProd = nums[0];
        int minProd = nums[0];
        int maxollProd =nums[0];
        int prevmaxProd = nums[0];
        while(i<x){
            prevmaxProd=maxProd;
            maxProd = max({nums[i],nums[i]*maxProd,nums[i]*minProd});
            minProd = min({nums[i], nums[i]*prevmaxProd ,nums[i]*minProd});
            i++;
            maxollProd = max(maxollProd,maxProd);
        }
        return maxollProd;

    }
};