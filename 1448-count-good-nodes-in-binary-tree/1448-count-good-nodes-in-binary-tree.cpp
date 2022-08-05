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
    int goodNode =0;
    void dfs(TreeNode* root ,int maxPathval){
        if(root == nullptr){
            return;
        }
        if(root->val >=maxPathval){
            maxPathval = root->val;
            goodNode+=1;
            
        }
        dfs(root->left , maxPathval);
        dfs(root->right , maxPathval);
        
        
    }
    int goodNodes(TreeNode* root) {
        int maxPathval = root->val;
        dfs(root ,maxPathval);
        return goodNode;
    }
};