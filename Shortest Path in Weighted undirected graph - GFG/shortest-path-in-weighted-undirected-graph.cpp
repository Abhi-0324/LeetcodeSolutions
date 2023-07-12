//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<int> shortestPath(int n, int m, vector<vector<int>>& edges) {
        // Code here
        vector<pair<int,int>> adj[n+1];
        for(auto it : edges){
            adj[it[0]].push_back({it[1],it[2]});
            adj[it[1]].push_back({it[0],it[2]});
            
        }
        vector<int> dis(n+1,1e6);
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> q;
        vector<int> parent(n+1);
        dis[1] = 0;
        parent[1] = 1;
        q.push({1,0});
        while(!q.empty()){
            int dist = q.top().second;
            int node = q.top().first;
            q.pop();
            for(auto it : adj[node]){
                int edgew = it.second;
                if(dist+edgew<dis[it.first]){
                    dis[it.first] = edgew +dist;
                    q.push({it.first,dist+edgew});
                    parent[it.first ]= node;
                }
            }
        }
        if(dis[n] == 1e6) return {-1};
        vector<int> path;
        int N = n;
        while(parent[n] != n){
            path.push_back(n);
            n = parent[n];
        }
        path.push_back(n);
        reverse(path.begin(),path.end());
        return path;
    }
};

//{ Driver Code Starts.
int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> edges;
        for (int i = 0; i < m; ++i) {
            vector<int> temp;
            for (int j = 0; j < 3; ++j) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            edges.push_back(temp);
        }

        Solution obj;
        vector<int> res = obj.shortestPath(n, m, edges);
        for (auto x : res) {
            cout << x << " ";
        }
        cout << "\n";
    }
}

// } Driver Code Ends