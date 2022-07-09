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
      TreeNode* ans = new TreeNode(0);
        TreeNode* temp = ans;
    void modiBfs(TreeNode* root ){
         if(root == nullptr){
            return;
        }
        // modiBfs(root->left);
        // root->left = nullptr;
        // ans->right =root;
        // ans = root;
        // modiBfs(root->right);
        modiBfs(root->left);
        ans->right = new TreeNode(root->val);
        ans = ans->right;
        modiBfs(root->right);           
        
    }
    TreeNode* increasingBST(TreeNode* root) {
       

        modiBfs(root);
        
        return temp->right;
        
    }
};