class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low =0 , high = nums.size()-1, mid=0;
        // Base condition for exit the loop
        while(low<=high){
            mid = (low+high)/2;
            // if the target element is found than retrun the mid 
            if(nums[mid]==target){
                return mid;
            }
            if(nums[mid]<target){
                //if the target element is larger than the 
                if(low==high)
                    return mid+1;
                low = mid+1;
            }
            else{
              
                high = mid-1;
            }
        }
        return mid;
    }
};