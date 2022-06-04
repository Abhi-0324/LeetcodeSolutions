class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i , j, k ;
        i= j = k =0;

        vector<int> temp(m+n);
        
        while(i<m && j<n){
            if(nums1[i]<nums2[j]){
                temp[k]=nums1[i];
                cout<<"im here 0"<<k<<i<<nums1[i];
                ++i;
                k+=1;
            }
            else{
                 temp[k]=nums2[j];
                   cout<<"im here 1"<<k<<j<<nums1[k];
                ++j;
                k+=1;
            }
            
        }
        while(i<m){
           temp[k]=nums1[i];
               cout<<"im here 2"<<k<<i<<nums1[k];
            ++i;
            k+=1;
            
        }
        while(j<n){
           temp[k]=nums2[j];
               cout<<"im here 3"<<k<<j<<nums1[k];
            ++j;
            k+=1;
            
    }
        nums1=temp;
    }
};