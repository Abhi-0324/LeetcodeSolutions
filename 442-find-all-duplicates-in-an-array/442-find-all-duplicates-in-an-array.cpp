class Solution {
public:
    unordered_map<int ,int> map;
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        for(int i = 0 ; i<nums.size() ;i++){
            map[nums[i]]++;
            if(map[nums[i]]>1){
                ans.push_back(nums[i]);
            }else
                continue;
        }
        
        return ans;
    }
};