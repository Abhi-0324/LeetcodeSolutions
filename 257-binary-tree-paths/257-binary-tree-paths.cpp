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
    void dfs(TreeNode* root, vector<string>& v , string s){
        if(root ==nullptr){
            return ;
        }
       
        if(root->left == nullptr && root->right == nullptr){
            s += to_string(root->val);
            v.push_back(s);
        }
        s += to_string(root->val);
        s.push_back('-');
        s.push_back('>');
        dfs(root->left,v,s);
        dfs(root->right,v,s);
        
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> v;
        string s ="";
        dfs(root,v,s);
        return v;
        
    }
};