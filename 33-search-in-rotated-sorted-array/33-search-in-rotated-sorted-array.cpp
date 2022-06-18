class Solution {
public:
    int search(vector<int>& nums, int target) {
        int size = nums.size();
        int low = 0 , high = size-1;
        if(target == nums[0]){
            return 0;
        }
        
        while(low<=high){
                int mid = (low + high)/2;
                   if ( nums[mid]==target){
                   return mid;
                       }
                   if (nums[low] <=nums[mid]){
                       if(target>= nums[low] && target<nums[mid]  ){
                           high = mid-1;
                       }else{
                           low = mid+1;
                       }
                   }else{   
                       if(target>nums[mid] && target <=nums[high]){
                           low = mid+1;
                       }else{
                           high= mid-1;
                       }
                   }
    
    }
        return -1;
    }
};