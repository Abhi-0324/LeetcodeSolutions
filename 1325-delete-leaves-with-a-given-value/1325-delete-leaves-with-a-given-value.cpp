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
    void dfs(TreeNode* &root , int target){
        if(root == nullptr){
            return;
        }
   
      
        dfs(root->left , target);
          if(root->val == target && !root->left && !root->right){
            root = nullptr;
            return;
        }
        dfs(root->right , target);
        if(root->val == target && !root->left && !root->right){
            root = nullptr;
            return;
        }
        
    }
    TreeNode* removeLeafNodes(TreeNode* root, int target) {
        dfs(root ,target);
     
        return root;
    }
};