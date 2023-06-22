//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    void solve(int row,int column ,int n, string s,vector<vector<int>>& m ,vector<string> &ans){
        // base case
        if(row == n-1&& column == n-1){
            ans.push_back(s);
            return;
        }
        // check base cases
        if(row>=n || column >=n || row<0 || column<0 || m[row][column] == 0) return;
        m[row][column] = 0;
        solve(row-1,column,n,s+'U',m,ans);
        solve(row+1,column,n,s+'D',m,ans);
        solve(row,column+1,n,s+'R',m,ans);
        solve(row,column-1,n,s+'L',m,ans);
        m[row][column] =1;
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
        if(m[n-1][n-1] == 0) return {};
        // Your code goes here
        vector<string> ans;
        string s ="";
        solve(0,0,n,s,m,ans);
        return ans;
    }
};

    


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends