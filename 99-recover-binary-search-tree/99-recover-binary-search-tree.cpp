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
   TreeNode* first = nullptr ;
   TreeNode*last = nullptr;
    TreeNode* prev = nullptr;
    void dfs(TreeNode* root ) {
        if(root == nullptr){
            return;
        } 
        dfs(root->left);
          if(prev && prev->val>root->val){
            if(first == nullptr ){
                first = prev;
                last = root;  
            }else{ 
                last = root;
            }
        }
        prev =root;
        dfs(root->right );
        
    }
    void recoverTree(TreeNode* root) {
   
        dfs(root  );
        swap(first->val , last->val);
        
     
    }
};