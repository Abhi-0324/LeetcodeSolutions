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
   int widthOfBinaryTree(TreeNode* root) {

        int ans=0;
        queue<pair<TreeNode*,long long >> q;
        q.push({root,0});

        while(!q.empty()){
            int size=q.size();
            int min=q.front().second;
            int first,last;
            for(int i=0;i<size;i++){
                long long  currInd=q.front().second-min;
                TreeNode* curr=q.front().first;
                q.pop();

                if(i==0) first=currInd;
                if(i==size-1) last=currInd;

                if(curr->left)q.push({curr->left,currInd*2+1});
                if(curr->right)q.push({curr->right,currInd*2+2});

            }
            ans=max(ans,last-first+1);
              
        }      
        return ans;
    }
};