//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    
    int longestCommonSubstr (string S1, string S2, int n, int m)
    {
       int l1 = S1.length();
        int l2 = S2.length();
        vector<vector<int>> dp(l1+1,vector<int>(l2+1,0));
        for(int i =0;i<=l1;i++){
            dp[i][0] =0;
        }
        for(int j =0;j<=l2;j++){
            dp[0][j] =0;
        }
        int maxLength =0;
        
        for(int i=1;i<=l1;i++){
            for(int j=1;j<=l2;j++){
                if(S1[i-1] == S2[j-1]) {dp[i][j]= 1 +dp[i-1][j-1];}
                 maxLength=max(maxLength,dp[i][j]);
        }   
        }
        return maxLength;
    }
    
};

//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n, m; cin >> n >> m;
        string s1, s2;
        cin >> s1 >> s2;
        Solution ob;

        cout << ob.longestCommonSubstr (s1, s2, n, m) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends