class Solution {
public:
//     bool isMonotonic(vector<int>& nums) {
//         int size = nums.size();

        
//         if(nums[0]<nums[size-1]){
//             for(int i =0 ; i<size-1 ;i++){
//                 if(nums[i]>nums[i+1]){
//                     return false;
//                 } 
//             }
            
//         }else{
//              for(int i =0 ; i<size-1 ;i++){
//                 if(nums[i]<nums[i+1]){
//                     return false;
//                 }
//             }
//         }
//      return true;   
    
    bool isMonotonic(vector<int>& nums) {
        bool increase =false;
        bool decrease= false;
        for(int i =0 ; i<nums.size()-1 ; i++){
            if(nums[i]<nums[i+1]){increase = true;}
            if(nums[i]>nums[i+1]){decrease = true;}
            
            if(increase && decrease){
              return false;
            }
         
        }
           return true;
    }
};