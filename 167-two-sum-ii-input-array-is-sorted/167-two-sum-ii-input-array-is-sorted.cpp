class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        int sum = 0;
        int start = 0 , end = nums.size()-1;
        while(start<end){
            sum = nums[start] + nums[end];
            if(sum == target ){
                ans.push_back(++start);
                ans.push_back(++end);
                break;
            }else if(sum > target){
                end--;
            }else{
                start++;
            }
            
        }
        return ans;
        
    }
};