//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
public:
    bool isPossible(vector<int> &stall,int n ,int k,int check){
        int prev = stall[0];
        int count = 1;
        if(count == k){
            return true;
        }
        for(int i =1;i<n;i++){
            if(stall[i]-prev >= check){
                count +=1;
                if(count == k){
                    return true;
                }
                prev = stall[i];
            }
        }
        return false;
    }
    int solve(int n, int k, vector<int> &stalls) {
        sort(stalls.begin(),stalls.end());
        int l = 1;
        int h = stalls[n-1]-stalls[0];
        while(l<=h){
            int mid = l +(h-l)/2;
            if(isPossible(stalls,n,k,mid)){
                l = mid+1;
            }else{
                h = mid-1;
            }
           
        }
         return h;
    
        // Write your code here
    }
};
/*[1 2 4 8 9]

k =3
int l =1;
int high = max(arr)
we have to sort this range in order to apply the binary search 
binary search on ans on the range [l ,high]
we reduce the search space by half and check the valdity of the ans
if the ans is valid than we have to check the next maximum distance valid ans;
this is the approach i follow 

*/



//{ Driver Code Starts.

int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input

        int n, k;
        cin >> n >> k;

        vector<int> stalls(n);
        for (int i = 0; i < n; i++) {
            cin >> stalls[i];
        }
        // char ch;
        // cin >> ch;

        Solution obj;
        cout << obj.solve(n, k, stalls) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends