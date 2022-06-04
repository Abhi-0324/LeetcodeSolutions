class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int n =arr.size();
        int finalmountainlength=0;
        
         
         for(int i= 1 ;i<n-1 ; i++){
             if(arr[i]>arr[i-1]&&arr[i]>arr[i+1]){
                 int mountainLength=1;
                 int left=i;
                 int right =i;
             while(left>0 && arr[left]>arr[left-1]){
                 mountainLength++;
                 left--;
             }
               
             while(right<n-1 && arr[right]>arr[right+1]){
                 mountainLength++;
                 right++;
             }
            finalmountainlength= max(finalmountainlength,mountainLength);
                 
         }
            else{
                continue;
            }
         }
             
         
        return finalmountainlength;
        
    }
};