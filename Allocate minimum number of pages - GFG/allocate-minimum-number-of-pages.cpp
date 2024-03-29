//{ Driver Code Starts
// Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template in C++

class Solution 
{
    public:
    //Function to find minimum number of pages.
    int countStud(int A[],int n,int check){
        int student =1;
        long long noPages = 0;
        for(int i =0;i<n;i++){
           
            if (noPages + A[i] > check) {
                student++;
                noPages = A[i];
            } else {
                noPages += A[i];
            }
        }
        return student;
    }
    int findPages(int A[], int N, int M)
    {   
        if(M>N) return -1;

    int low = *max_element(A,A+N);
    int high = accumulate(A,A+N, 0);
        
        while(low<=high){
            int mid = low +(high-low)/2;
            int student = countStud(A,N,mid);
            if(student<=M){
                high = mid-1;
            }else{
                low = mid+1;
            }
            
        }
        return low;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cin>>m;
        Solution ob;
        cout << ob.findPages(A, n, m) << endl;
    }
    return 0;
}

// } Driver Code Ends