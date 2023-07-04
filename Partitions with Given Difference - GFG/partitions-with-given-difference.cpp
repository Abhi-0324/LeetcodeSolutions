//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
      int perfectSum(vector<int>& arr, int n, int sum)
	{
       
        vector<vector<int>> dp(n,vector<int>(sum+1));
        for(int i =0;i<n;i++){
            dp[i][0] =1;
        }
        if(arr[0]<=sum)dp[0][arr[0]] =1;
        if(arr[0]==0)   dp[0][0]=2;
        for(int i =1;i<n;i++){
            for(int j =0;j<=sum;j++){
            int take =0;
            if(j>=arr[i]){
                take =dp[i-1][j-arr[i]];
            }
            int notTake = dp[i-1][j];
            dp[i][j] = (take +notTake)%1000000007;
        }
        }
        return dp[n-1][sum];
	}

    int countPartitions(int n, int d, vector<int>& arr) {
        int sum =0;
        for(auto it: arr){
            sum+=it;
        }
        if(sum-d<0 || (sum-d)%2 !=0) return 0;
        int target = (sum-d)/2;
        
        return perfectSum(arr,n,target);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, d;
        cin >> n >> d;
        vector<int> arr;

        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            arr.push_back(x);
        }

        Solution obj;
        cout << obj.countPartitions(n, d, arr) << "\n";
    }
    return 0;
}
// } Driver Code Ends