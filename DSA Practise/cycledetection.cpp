#include<iostream>
using namespace std;

class SinglyLinkedListNode{
    public:
    int data;
    SinglyLinkedListNode*next;
};

bool has_cycle(SinglyLinkedListNode* head) {
SinglyLinkedListNode *front = head; 
SinglyLinkedListNode *back = head;
if(head == NULL || head->next==NULL) // checks if empty
{
    return false;
}
while( back!=NULL&&back->next!=NULL) // iterate through the list
{
    front = front->next; 
    back = back->next->next; 
    if(front==back)  
    {
        return true;
        break;
    }

}
return false;
}