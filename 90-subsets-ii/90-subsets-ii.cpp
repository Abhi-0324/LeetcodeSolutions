
class Solution {
public:
    void findSubsets(int index , vector<int> &ds , vector<vector<int>> &ans , vector<int> &arr ){
        if(index>=arr.size()){
            ans.push_back(ds);
            return;
        }
        ds.push_back(arr[index]);
        findSubsets(index+1 ,ds, ans,arr);
        ds.pop_back();
        while(index+1 < arr.size() && arr[index] == arr[index+1]) index++;
        findSubsets(index+1 ,ds,ans,arr);
        
    }
  vector<vector<int>> subsetsWithDup(vector<int>& nums) {
      sort(nums.begin() , nums.end());
        vector<vector<int>> ans;
        vector<int> ds;
        findSubsets(0,ds,ans,nums);
        return ans;
    }
};