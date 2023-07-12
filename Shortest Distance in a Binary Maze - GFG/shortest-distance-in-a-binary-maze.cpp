//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int shortestPath(vector<vector<int>> &grid, pair<int, int> source,
                     pair<int, int> destination) {
                         
        // code here
        if(source == destination) return 0;
        int n = grid.size();
        int m  =grid[0].size();
        queue<pair<int,pair<int,int>>> q;
        vector<vector<int>> dis(n,vector<int>(m,1e9));
        dis[source.first][source.second] = 0;
        q.push({0,source});
        int r[] = {-1,0,1,0};
        int c[] = {0,1,0,-1};
        while(!q.empty()){
        int dist = q.front().first;
        int dr = q.front().second.first;
        int dc = q.front().second.second;
        q.pop();
        for(int i =0;i<4;i++){
            int nr = r[i]+dr;
            int nc = c[i]+dc;
            
            if(nr<n && nc<m && nr >= 0 && nc >=0 && grid[nr][nc]== 1&& dist+1<dis[nr][nc]){
                if(nr == destination.first && nc ==destination.second) return dist+1;
                dis[nr][nc] = dist+1;
                q.push({dist+1,{nr,nc}});
            }
        }
        }
         return -1;
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

        pair<int, int> source, destination;
        cin >> source.first >> source.second;
        cin >> destination.first >> destination.second;
        Solution obj;
        cout << obj.shortestPath(grid, source, destination) << endl;
    }
}

// } Driver Code Ends