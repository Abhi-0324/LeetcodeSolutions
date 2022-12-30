//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution{
  public:
    // int f(int i , int price[],int n,  vector<vector<int>> &dp ){
    //     if(i == 0){
    //         return n*price[0];
    //     }
    //     if(dp[i][n] != -1) return dp[i][n];
    //     int notCut = 0 + f(i-1 ,price,n,dp);
    //     int cut = INT_MIN;
    //     int rodlength = i +1;
    //     if(rodlength <=n){
    //     cut = price[i] + f(i,price,n-rodlength,dp);}
    //     return dp[i][n] =max(notCut ,cut);
        
        
    // }
    int cutRod(int price[], int n) {
        //code here
       vector<vector<int>> dp(n,vector<int> (n+1,-1));
       for(int j =0 ; j<=n ; j++){
           dp[0][j] = j*price[0];
       }
       for(int i =1 ; i<n ;i++){
           for(int j =0; j<=n ;j++){
               int notCut = 0+ dp[i-1][j];
               int cut = INT_MIN;
               if(i+1<=j) cut = price[i]+ dp[i][j-(i+1)];
               dp[i][j] = max(notCut ,cut);
           }
       }
       return  dp[n-1][n];
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) 
            cin >> a[i];
            
        Solution ob;

        cout << ob.cutRod(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends