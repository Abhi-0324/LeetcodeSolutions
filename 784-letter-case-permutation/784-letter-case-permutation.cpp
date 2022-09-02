#define pb push_back
#define pop pop_back()
class Solution {
public:
    void solve(int i , vector<string> &ans ,string s ,string temp){
        if(i>s.length()){
            ans.pb(temp);
            return;
        }
        if(isalpha(s[i])){
            temp.pb(tolower(s[i]));
            solve(i+1, ans,s,temp);
            temp.pop;
             temp.pb(toupper(s[i]));
            solve(i+1,ans,s,temp);
        }
        else{
            temp.pb(s[i]);
            solve(i+1,ans,s,temp);
        }
        
    }
    vector<string> letterCasePermutation(string s) {
        vector<string> ans;
        int n  = s.size();
        solve(0,ans,s,"");
        return ans;
    }
};