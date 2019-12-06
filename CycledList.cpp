# include <iostream>
# include <vector>
# include <string>
# include <stack>
# include <map>

using namespace std ;


bool hasCycle(ListNode *head) {
    ListNode *cur = head;
    if(cur == NULL) return false;
    
    set<ListNode*> temp;
    while(cur!=NULL){
        if(temp.find(cur) == temp.end()){
            temp.insert(cur);
        }else{
        	return true;
        }
        cur = cur->next;
    }
    return false;
}


int main() {
    
    while(1){

     
    }
        
    return 0;
    
};
