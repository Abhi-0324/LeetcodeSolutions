class Solution {
public:
    // void permutation(vector<int> &ds , int index , vector<bool> &visted ,vector<int> &arr ,vector<vector<int>> &ans){
    void permutation(int index ,vector<vector<int>> & ans , vector<int> & arr){
        if(index == arr.size()){
          ans.push_back(arr); 
            return;
        }
//         for(int i =0 ; i<arr.size() ;i++){
//             if(visted[i]) continue;
//             visted[i]= true;
//             ds.push_back(arr[i]);
//             permutation(ds ,index+1 ,visted ,arr ,ans);
//             ds.pop_back();
//             visted[i] = false;
            
//         }
        for(int i = index ; i<arr.size() ;i++){
            swap(arr[index] , arr[i]);
            permutation(index+1 ,ans, arr);
            swap(arr[index],arr[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        // vector<int> ds;
        vector<vector<int>> ans;
        // vector<bool> visited(nums.size(),false);
        permutation(0 ,ans ,nums);
        return ans;
        
    }
};