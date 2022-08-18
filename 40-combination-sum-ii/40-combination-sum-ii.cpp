class Solution {
public:
    void combinations(int index , int target , vector<vector<int>> &ans , vector<int> &ds ,vector<int> &arr){
        if(target == 0){
            ans.push_back(ds);
            return ;
        }
        for(int i = index ; i<arr.size() ; i++ ){
            if(i>index && arr[i] == arr[i-1]) continue;
            if(arr[i]>target) break;
            
            ds.push_back(arr[i]);
            combinations(i+1 , target-arr[i],ans ,ds,arr);
            ds.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin() ,candidates.end());
        vector<int> ds;
        vector<vector<int>> ans;
        combinations(0,target,ans,ds,candidates);
        return ans;
        
    }
};