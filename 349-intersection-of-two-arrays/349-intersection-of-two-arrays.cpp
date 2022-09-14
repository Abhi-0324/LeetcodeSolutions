class Solution {
public:
    unordered_map<int ,int > m;
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        vector<bool> visited(1000 ,false);
        for(int i =0 ; i<nums1.size() ;i++){
          m[nums1[i]]++;
        }
        for(int i =0 ; i<nums2.size() ;i++){
            if(m.find(nums2[i]) != m.end() && !visited[nums2[i]] ){
                ans.push_back(nums2[i]);
                visited[nums2[i]] = true;
            }
        }
        return ans;
        
        
    }
};