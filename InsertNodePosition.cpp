*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* head, int data, int position) {
    SinglyLinkedListNode* newNode;
    newNode->data = data;
    int pos = -1;
    while(head!=NULL){
        pos ++;
        if(pos == position-1){
            head->next = newNode;
            newNode->next = head->next->next;
        }else{
            head = head->next;
        }
    }

    return head;
}