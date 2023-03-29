//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    void dfs(vector<vector<int>> &grid,vector<vector<int>> &vist,int row,int col,vector<pair<int,int>> &vec,int rb ,int cb){
        vist[row][col] = 1;
        vec.push_back({row-rb,col-cb});
       int n = grid.size();
       int m = grid[0].size();
       int dr[] ={-1,0,1,0};
       int dc[] ={0,1,0,-1};
       for(int i =0;i<4;i++){
           int nr = row+dr[i];
           int nc = col+dc[i];
           if(nr<n && nc <m && nr>=0 && nc >=0 && vist[nr][nc] ==-1 && grid[nr][nc] == 1){
            dfs(grid,vist,nr,nc,vec,rb,cb);
           }
       }
        
    }
    int countDistinctIslands(vector<vector<int>>& grid) {
       int row = grid.size();
       int column = grid[0].size();
       set<vector<pair<int,int>>> s;
       vector<vector<int>> vist (row,vector<int> (column,-1));
       for(int i =0 ; i<row ;i++){
           for(int j =0 ;j<column ;j++){
               if(vist[i][j] == -1 && grid[i][j]){
                   vector<pair<int,int>> vec;
                   dfs(grid,vist,i,j,vec,i,j);
                   s.insert(vec);
               }
           }
           }
           return s.size();
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        cout << obj.countDistinctIslands(grid) << endl;
    }
}
// } Driver Code Ends