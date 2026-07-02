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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(!root)return {};
        vector<vector<int>>ans;
        stack<pair<TreeNode*,int>>st1;
        stack<pair<TreeNode*,int>>st2;
        st1.push({root,0});
        while(!st1.empty()){
            vector<int>a;
            st2.swap(st1);
            while(!st2.empty()){
                TreeNode* temp = st2.top().first;
                int index = st2.top().second+1;
                st2.pop();
                a.push_back(temp->val);
                if(index%2==0){
                    if(temp->right!=nullptr && temp->left!=nullptr){
                        swap(temp->right,temp->left);
                    }

                }
                if(temp->left)st1.push({temp->left,index});
                if(temp->right)st1.push({temp->right,index});
            }
            ans.push_back(a);
        }
        return ans;
    }
};