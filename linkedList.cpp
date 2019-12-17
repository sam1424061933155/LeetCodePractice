#include <iostream>

using namespace std ;

class LinkedList;    // 為了將class LinkedList設成class ListNode的friend,
                     // 需要先宣告
class ListNode{
private:
    int data;
    ListNode *next;
public:
    ListNode():data(0),next(0){};
    ListNode(int a):data(a),next(0){};

    friend class LinkedList;
};

class LinkedList{
private:
    // int size;                // size是用來記錄Linked list的長度, 非必要
    ListNode *first;            // list的第一個node
public:
    LinkedList():first(0){};
    void PrintList();           // 印出list的所有資料
    void RemoveOdd(); 
    void Push_back(int x);      // 在list的尾巴新增node
    
};

void LinkedList::Push_back(int x){

	ListNode *newNode = new ListNode(x);

	if(first == 0){
		first = newNode;
		return;
	}

	ListNode *current = first;
    while (current->next != 0) {           // Traversal
        current = current->next;
    }
    current->next = newNode; 

}

void LinkedList::PrintList(){


	ListNode *current = first;
    while (current != 0) {           // Traversal
        cout << current->data << endl;
        current = current->next;
    }

}

void LinkedList::RemoveOdd(){


	ListNode *current = first;
	ListNode *previous = NULL;

	if(first->data %2 != 0){
		first = current->next;
		current = current->next;
	}

    while (current != 0) {      
    	// odd     
        if( current->data %2 != 0){
        	current = current->next;
        	if(previous != NULL)
        		previous->next = current;

        }else{
        	previous = current;
        	current = current->next;
        }
    }

}


int main(){

	LinkedList list;
	
	list.Push_back(1);
	list.Push_back(2);
	list.Push_back(3);
	list.Push_back(4);
	list.Push_back(5);
	list.Push_back(6);

	cout << "PrintList"<<endl;
	list.PrintList();
	cout << "RemoveOdd"<<endl;

	list.RemoveOdd();
	list.PrintList();



	return 0;
}