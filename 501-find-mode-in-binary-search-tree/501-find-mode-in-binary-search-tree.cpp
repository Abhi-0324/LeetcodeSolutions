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
    
    int prevVal = INT_MIN , check = INT_MIN ,maxSoFar =INT_MIN ; 
    void dfs(TreeNode* root ,vector<int>& ans){
        if(root==nullptr)
            return;
        dfs(root->left ,ans);
        if(root->val == prevVal){
            check++;
        }else{
            check =1;
        }
        if(maxSoFar<check){
            ans.clear();
            ans.push_back(root->val);
            maxSoFar =check;
        }else if(maxSoFar == check){
            ans.push_back(root->val);
        }
        prevVal = root->val;
        
        dfs(root->right ,ans);
    }
    vector<int> findMode(TreeNode* root) {
        vector<int> ans;
        dfs(root ,ans);
        return ans;
    }
};