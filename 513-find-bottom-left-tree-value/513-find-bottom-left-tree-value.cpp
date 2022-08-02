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
    int leftValue = 0 , currentLevel = -1;
    void dfs(TreeNode* root , int depth ){
        if(root == nullptr){
            return;
        }
        if(currentLevel < depth ){
            currentLevel = depth;
            leftValue = root->val;
        }
        if(root->left){
            dfs(root->left , depth +1  );
        }
        if(root->right){
            dfs(root->right , depth +1 );
        }
        
    }
    int findBottomLeftValue(TreeNode* root) {

        dfs(root , 0 );
        return leftValue;
        
    }
};