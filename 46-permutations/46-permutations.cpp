class Solution {
public:
    void permutation(vector<int> &ds , int index , vector<bool> &visted ,vector<int> &arr ,vector<vector<int>> &ans){
        if(index == arr.size()){
          ans.push_back(ds); 
            return;
        }
        for(int i =0 ; i<arr.size() ;i++){
            if(visted[i]) continue;
            visted[i]= true;
            ds.push_back(arr[i]);
            permutation(ds ,index+1 ,visted ,arr ,ans);
            ds.pop_back();
            visted[i] = false;
            
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> ds;
        vector<vector<int>> ans;
        vector<bool> visited(nums.size(),false);
        permutation(ds,0 ,visited ,nums ,ans);
        return ans;
        
    }
};