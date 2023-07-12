//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int MinimumEffort(vector<vector<int>>& heights) {
        
        int n = heights.size();
        int m = heights[0].size();
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>> q;
        vector<vector<int>> dis(n,vector<int>(m,1e7));
        dis[0][0] = 0;
        q.push({0,{0,0}});
        int dr[] ={-1,0,1,0};
        int dc[] ={0,1,0,-1};
        
        while(!q.empty()){
            auto it = q.top();
            int diff = it.first;
            int r = it.second.first;
            int c = it.second.second;
            q.pop();
            if(r == n-1 && c ==m-1) return diff;
            for(int i =0;i<4;i++){
                int nr = r+dr[i];
                int nc = c +dc[i];
                if(nr<n&&nc<m&&nr>=0&&nc>=0 ){
                    int newE = max(abs(heights[r][c] -heights[nr][nc]),diff);
                    if(newE<dis[nr][nc]){
                        dis[nr][nc] = newE;
                        q.push({newE,{nr,nc}});
                        
                    }
                }
            }
        }
        return 0;
    }
    
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n,m; cin>>n>>m;
        vector<vector<int>> heights;
       
        for(int i=0; i<n; ++i){
            vector<int> temp;
            for(int j=0; j<m; ++j){
                int x; cin>>x;
                temp.push_back(x);
            }
            heights.push_back(temp);
        }
       
        Solution obj;
        cout<<obj.MinimumEffort(heights)<<"\n";
    }
    return 0;
}
// } Driver Code Ends