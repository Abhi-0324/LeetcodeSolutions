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
    int flag = 0;
      TreeNode* prev = nullptr;
    void dfs(TreeNode* root){
        if(root == nullptr){
            return ;
        }
       
           
           dfs(root->left );
          if(prev){
          if(root->val<=prev->val){
               flag ++;
               
           }
          }
           prev = root;
          dfs(root->right );
         
            
    }
    bool isValidBST(TreeNode* root) {
        dfs(root );
        cout<<flag;
        if(flag ==0){
            return true;
        }else{
            return false;
        }
    }
};