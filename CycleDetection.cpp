# include <iostream>
# include <vector>
# include <string>
# include <stack>
# include <map>

using namespace std ;

bool has_cycle(SinglyLinkedListNode* head) {
    set<SinglyLinkedListNode*> node; 
    while(head!=NULL){
        if(node.find(head) == node.end()){
            node.insert(head);
        }else{
            return true;
        }
        head = head->next;
    }

    return false;


}