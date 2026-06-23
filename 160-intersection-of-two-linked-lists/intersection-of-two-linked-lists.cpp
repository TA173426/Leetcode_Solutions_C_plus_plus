/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_set<ListNode*> node;
        ListNode * root=headA;
        while(root!=NULL){
            node.insert(root);
            root=root->next;
        };
        root=headB;
        while(root!=NULL){
            if(node.count(root))return root;
            root=root->next;
        }
        return NULL;
    }
};