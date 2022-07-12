class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        
        int maxChild = 0;
        int j = 0 ,i =0;
        
     while(i<g.size() && j<s.size()){
         if(g[i]<=s[j]){
             maxChild +=1;
             i++;
             j++;
         }else if(g[i]>s[j]){
             j++;
         }
     }
        return maxChild;
        
    }
};