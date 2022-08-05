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

    int maxDiff = INT_MIN;
    void dfs(TreeNode* root ,int maxVal , int minVal){
        if(!root) return ;
     
          maxVal =max(root->val, maxVal);
         minVal = min(root->val, minVal);
        maxDiff = max(maxDiff , maxVal-minVal);
        dfs(root->left , maxVal ,minVal);
        dfs(root->right,maxVal ,minVal);
    }
    int maxAncestorDiff(TreeNode* root) {
    int maxVal = INT_MIN;
    int minVal = INT_MAX;
        dfs(root ,maxVal ,minVal);
        return maxDiff;
    }
};