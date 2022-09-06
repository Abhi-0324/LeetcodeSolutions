class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        int flag =0;
        int i =0;  
        while( i < nums.size()-1){
            if(i>1 && nums[i-1] >nums[i+1] && nums[i-2] >nums[i]){
                return false;
            }
        if(nums[i]<=nums[i+1]){
            i++;
             continue;
        }
        flag+=1;
            i++;
        if(flag>1){
        return false;
    }
    }
    
    return true;
    }
};

  

        
     