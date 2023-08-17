//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
#include <string>

using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to find list of all words possible by pressing given numbers.
    void solve(int index,int a[],int n ,vector<string> &ans,string temp,vector<string>& map){
        if(index == n){
            ans.push_back(temp);
            return;
        }
        int size = map[a[index]].size();
        string x  =  map[a[index]];
        for(int i =0;i<size;i++){
            temp+=x[i];
            solve(index+1,a,n,ans,temp,map);
            temp.pop_back();
        }
        return;
    }
    vector<string> possibleWords(int a[], int N)
    {
        vector<string> map = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        vector<string> ans;
        solve(0,a,N,ans,"",map);
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
  
	int T;
	
	cin >> T; //testcases
	
	while(T--){ //while testcases exist
	   int N;
	    
	   cin >> N; //input size of array
	   
	   int a[N]; //declare the array
	   
	   for(int i =0;i<N;i++){
	       cin >> a[i]; //input the elements of array that are keys to be pressed
	   }
	   
	   Solution obj;
	   
	  vector <string> res = obj.possibleWords(a,N);
	  for (string i : res) cout << i << " ";
	   cout << endl;
	}
	
	return 0;
}
// } Driver Code Ends