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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *temp = NULL;
        ListNode **node = &temp;
        
        while(l1!=NULL || l2!=NULL){
            if(l1==NULL && l2!=NULL){
                *node = new ListNode(l2->val);
                l2 = l2->next;
            }
            if(l2==NULL && l1!=NULL){
                *node = new ListNode(l1->val);
                l1 = l1->next;
            }
            if(l1!=NULL && l2!=NULL){
                if(l1->val < l2->val){
                    *node = new ListNode(l1->val);
                    l1 = l1->next;
                }else{
                    *node = new ListNode(l2->val);
                    l2 = l2->next;
                }
            }
            
            node = &((*node)->next);
        }
        return temp;
        
    }
};