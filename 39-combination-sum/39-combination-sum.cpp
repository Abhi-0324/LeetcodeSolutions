class Solution {
public:
    void findCombination(int index , vector<vector<int>> &ans, int target , vector<int> &ds , vector<int> &arr){
        if(index == arr.size()){
            if(target == 0){
                ans.push_back(ds);
            }
            return ;
        }
            // pick 
            if(arr[index]<= target){
                ds.push_back(arr[index]);
                findCombination(index ,ans, target-arr[index] ,ds ,arr );
                ds.pop_back();
         
            }
               //not pick
                findCombination(index+1 ,ans, target ,ds ,arr);
                
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        findCombination(0, ans , target , ds , candidates);
        return ans;
        
    }
};