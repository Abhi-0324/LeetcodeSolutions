/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void path(TreeNode* root , int targetSum , vector<vector<int>> &ans , vector<int> &nums){
        
        if( root->left==nullptr && root->right==nullptr){
            if(targetSum == root->val){
                nums.push_back(root->val);
                ans.push_back(nums);
                nums.pop_back();
            }
            return;
        }
        nums.push_back(root->val);
        if(root->left)
        path(root->left , targetSum-root->val ,ans,nums);
        if(root->right)
        path(root->right , targetSum-root->val,ans,nums);
        nums.pop_back();
        
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        if(root == nullptr) return {};
       vector<vector<int>> ans;
        vector<int> nums;
        path(root,targetSum,ans,nums);
        return ans;
        
    }
};