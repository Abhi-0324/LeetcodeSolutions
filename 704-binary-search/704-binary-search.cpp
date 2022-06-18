class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0 , high = nums.size() - 1, mid = 0;
  
        // binary search algo 
        while(low<=high){
            mid = (low+high)/2;
            if(target == nums[mid]){
                return mid;
            }
            // if the target is less than the elemnt at mid index
            if(target<nums[mid]){
                high = --mid;
            }
           // if the target is greater than the elemnt at mid index 
            else{
                low = ++mid;
            }
        }
        return -1;
        
    }
};