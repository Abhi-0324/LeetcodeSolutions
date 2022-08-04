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
    TreeNode* makeTree(vector<int>& nums ,int l , int r){
        if(l>r){
            return nullptr;
        }
        int max = nums[l];
        int index =l;
        for(int i =l ; i<=r ;i++){
            if(max < nums[i]){
                max = nums[i];
                index =i;
            }
        }
            TreeNode* node = new TreeNode(max);
            node->left = makeTree(nums ,l , index-1);
            node->right = makeTree(nums ,index+1 ,r);
           
        return node;
        
    }
    TreeNode* constructMaximumBinaryTree(vector<int>& nums ) {
        return makeTree(nums,0,nums.size()-1);
        
    }
};