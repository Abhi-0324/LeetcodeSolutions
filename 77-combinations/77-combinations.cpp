class Solution {
public:

    void combinations(int n, int k, vector<vector<int>> &ans , vector<int> &ds , int i){
        
         if(ds.size()== k){
                ans.push_back(ds);
               return;
            }
        if(i > n){
            return;
        }
        ds.push_back(i);
        combinations(n,k,ans,ds ,i+1);
        ds.pop_back();
        combinations(n,k,ans,ds,i+1);
        
    }
    vector<vector<int>> combine(int n, int k) {
      vector<vector<int>> ans;
      vector<int> ds;
      combinations(n,k,ans,ds , 1);
        return ans;
        
        
    }
};