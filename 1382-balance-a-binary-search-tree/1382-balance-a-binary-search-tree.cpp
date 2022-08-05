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
    vector<TreeNode*> nums;
    void inoder(TreeNode* root){
        if(root == nullptr){
            return;
        }
        inoder(root->left);
        nums.push_back(root);
        inoder(root->right);
    }
    TreeNode* balancedTree(int l , int r){
        if(l>r){
            return nullptr;
        }
        int mid = (l+r)/2;
        TreeNode* node = nums[mid];
        node->left = balancedTree(l,mid-1);
        node->right = balancedTree(mid+1,r);
        return node;
        
        
    }
    TreeNode* balanceBST(TreeNode* root) {
        inoder(root);
        root = balancedTree(0 , nums.size()-1);
        return root;
    }
};