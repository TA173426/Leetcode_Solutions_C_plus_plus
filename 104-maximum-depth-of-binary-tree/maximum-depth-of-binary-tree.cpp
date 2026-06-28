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

    void traverse(TreeNode* root,int count ,int & maxi){
        if(root==nullptr){
            maxi = max(count,maxi);
            return;
        }
        traverse(root->right,count+1,maxi);
        traverse(root->left,count+1,maxi);
    }

    int maxDepth(TreeNode* root) {
        int count=0;
        int maxi =0;
        traverse(root,count,maxi);
        return maxi;
    }
};