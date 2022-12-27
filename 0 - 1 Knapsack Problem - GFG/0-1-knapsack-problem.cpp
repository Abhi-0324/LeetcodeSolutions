//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    int f( int i , int w,int wt[], int val[],vector<vector<int>>& dp){
        if(i == 0){
            if(wt[0]<=w) return val[0];
            else return 0;
        }
        if(dp[i][w] != -1) return dp[i][w];
        int notPick = 0 + f(i-1,w,wt,val,dp);
        int pick = INT_MIN;
        if(wt[i]<=w ) pick = val[i] +f(i-1,w-wt[i],wt,val,dp);
        return dp[i][w]= max(pick ,notPick);
    }
    int knapSack(int W, int wt[], int val[], int n) 
    { 
     vector<vector<int>> dp(n, vector<int> (W+1,-1));    
     return f(n-1,W,wt,val,dp);
    }
};

//{ Driver Code Starts.

int main()
 {
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        //calling method knapSack()
        cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}
// } Driver Code Ends