class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        sort(nums1.begin() , nums1.end());
        sort(nums2.begin(), nums2.end());
        int ptr1 = 0, ptr2 =0, size =nums1.size() , size2 = nums2.size();
        while(ptr1 <size && ptr2 <size2){
            if(nums1[ptr1]==nums2[ptr2]){
                ans.push_back(nums1[ptr1]);
                ptr1++;
                ptr2++;
            }else {
            if(nums1[ptr1]<nums2[ptr2]){
                ptr1++;
            }else{
                ptr2++;
            }
        }
        }
        
        return ans;
    }
};