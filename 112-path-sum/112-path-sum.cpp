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
class Solution{
public:
  
  
    bool dfs(TreeNode* root , int targetSum ,int currentSum){
          
        // if(root == nullptr && currentSum == targetSum ){
        //     return true;
        // }else if(root == nullptr && currentSum != targetSum){
        //     return false;
        // }
        if(root == nullptr){
            return false;
        }
        currentSum += root ->val;
        if(currentSum == targetSum && !root->left && !root->right){
            return true;
        }
        bool lh  = false;
        bool rh =  false;
         
        // if(root->left)
         lh = dfs(root->left , targetSum , currentSum);
        // if(root->right)
         rh = dfs(root->right , targetSum , currentSum);
        
        return lh || rh;
    }
    bool hasPathSum(TreeNode* root, int targetSum ) {
        if(root == nullptr){
            return false;
        }
        return dfs(root , targetSum ,0);
    }
};