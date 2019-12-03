# include <iostream>
# include <vector>
# include <string>
# include <stack>
# include <map>

using namespace std ;




ListNode* deleteDuplicates(ListNode* head) {
    ListNode *cur = head;
    while( cur!=NULL && cur->next!=NULL){
        if(cur->val == (cur->next)->val){
            (cur->next) = (cur->next)->next;               
        }else{
            cur = cur->next;
        }
    }
    return head;
        
}


int main() {
    
    while(1){

      

    
    }
        
    return 0;
    
};
