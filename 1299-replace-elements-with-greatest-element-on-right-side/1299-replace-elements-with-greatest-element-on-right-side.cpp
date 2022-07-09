class Solution {
public:
    
    // we have to maintain max element so far
    
    vector<int> replaceElements(vector<int>& arr) {
    int maxSofar = -1 ,temp =0;
        for(int i=arr.size()-1 ; i>=0 ; i--){
            temp = arr[i];
            arr[i] = maxSofar;
            maxSofar =max(maxSofar , temp);
        }
        
        return arr;
    }
};