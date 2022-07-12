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
    int minSoFar = INT_MAX;

    void dfs(TreeNode* root,TreeNode* &prev){
        if(root == nullptr){
            return ;
        }
        
       dfs(root->left,prev);
        if(prev != nullptr){
            minSoFar = min(minSoFar,root->val-prev->val);
        }
        prev = root;
        dfs(root->right,prev);
        
    }
    int minDiffInBST(TreeNode* root) {
         TreeNode* prev = nullptr;
        dfs(root,prev);
        return minSoFar;
        
    }
};