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
    void traverse(TreeNode* p, vector<int>&a){
        if(p==nullptr){
            a.push_back(10001);
            return;
        } 
        a.push_back(p->val);
        traverse(p->left,a);
        traverse(p->right,a);
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
       vector<int>a;
       vector<int>b;
       traverse(p,a);
       traverse(q,b);
       if(a.size()!=b.size())return 0;
       for(int i =0;i<a.size();i++){
        if(a[i]!=b[i])return 0;
       }
       return 1;
    }
};