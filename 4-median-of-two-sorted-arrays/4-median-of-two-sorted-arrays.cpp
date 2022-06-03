class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int x =nums1.size();
        int y =nums2.size();
        vector<int> temp(x+y);
        int i ,j , k , f;
        i=j=k=f=0;
        double median=0;
        
      
        while(i<x && j<y){
          if(nums1[i]<nums2[j]){
             temp[k]=nums1[i]; 
              i+=1;
              k+=1;
          }
            else{
                 temp[k]=nums2[j]; 
                 k+=1;
                 j+=1;
                
            }
        }
        while(i<x){
              temp[k]=nums1[i];
              i+=1;
              k+=1;   
        }
        while(j<y){
            temp[k]=nums2[j];
              j+=1;
              k+=1;  
        
    }
       int l = temp.size();
        f=l/2;
        
        if(l%2==0){
            median=(temp[f]+temp[f-1])/2.0;
        }
        else{
            median= temp[f];
        }
        return median;
        
    }
};