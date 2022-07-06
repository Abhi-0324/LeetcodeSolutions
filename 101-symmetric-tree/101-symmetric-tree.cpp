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
    bool dfs( TreeNode* ls ,TreeNode* rs){
        if(ls==nullptr || rs == nullptr){
            return ls ==nullptr &&  rs == nullptr;
        }
        if(ls->val != rs -> val){
            return false;
        };
        return dfs(ls->left,rs->right) && dfs(ls->right , rs->left);
    }
    bool isSymmetric(TreeNode* root) {
         if(!root)
            return true;
    
        return dfs(root->left , root->right);
    }
};