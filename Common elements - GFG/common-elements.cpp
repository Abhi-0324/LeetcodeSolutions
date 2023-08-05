//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            unordered_map<int,int> mb;
            unordered_map<int,int> mc;
            unordered_map<int,int> a;
            vector<int> ans;
            for(int i =0;i<n2;i++){
                mb.insert({B[i],i});
            }
            for(int j=0;j<n3;j++){
                 mc.insert({C[j],j});
            }
            for(int k =0;k<n1;k++){
                if(mb.find(A[k])!=mb.end() && mc.find(A[k]) != mc.end()){
                    a.insert({A[k],k});

                }
            }
            for(auto it: a){
                ans.push_back(it.first);
            }
            sort(ans.begin(),ans.end());
            return ans;
        }

};

//{ Driver Code Starts.

int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n1, n2, n3; 
        cin >> n1 >> n2 >> n3;
        int A[n1];
        int B[n2];
        int C[n3];
        
        for (int i = 0; i < n1; i++) cin >> A[i];
        for (int i = 0; i < n2; i++) cin >> B[i];
        for (int i = 0; i < n3; i++) cin >> C[i];
        
        Solution ob;
        
        vector <int> res = ob.commonElements (A, B, C, n1, n2, n3);
        if (res.size () == 0) 
            cout << -1;
        for (int i = 0; i < res.size (); i++) 
            cout << res[i] << " "; 
        cout << endl;
    }
}
// } Driver Code Ends