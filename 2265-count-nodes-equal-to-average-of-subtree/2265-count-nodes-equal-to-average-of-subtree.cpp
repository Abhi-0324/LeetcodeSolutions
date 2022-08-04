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
    int count = 0;
    pair<int ,int>dfs(TreeNode* root  ){
        if(root == nullptr){
            return make_pair(0 ,0); 
        }
        pair<int,int> p1 ,p2;
        p1 = dfs(root->left);
        p2 = dfs(root ->right);
        
        int node  = p1.second +p2.second +1;
        
        
        int sum = root->val + p1.first + p2.first;
        if(root->val == sum/node){
            count++;
        }
        return make_pair(sum ,node);
    }
//  int count=0;
//     pair<int,int> getAverage(TreeNode* root)
//     {
//         if(root==NULL)  return make_pair(0,0);
//         pair<int,int> p1,p2;
//         p1=getAverage(root->left);
//         p2=getAverage(root->right);
        
//         if(root->val==(root->val+p1.first+p2.first)/(p1.second+p2.second+1))
//             count++;
//         return make_pair(p1.first+p2.first+root->val,p1.second+p2.second+1);
//     }
    int averageOfSubtree(TreeNode* root) {
        dfs(root);
        return count;
    }
};