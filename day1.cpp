#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node* next;
};


int length(Node* head)
{
int count = 0;
Node* temp = head;
while(temp != NULL)
{
count++;
temp = temp->next;
}
return count;
}


// insert at begin
void insertFront(Node*& head,int x)
{
Node* temp = new Node ();
temp->next = head;
head = temp;
}



// delete from starting
void deleteFront(Node*& head)
{
if(head == NULL)
return;
Node* temp = head;
head = head->next;
delete temp;
}

int main()
{
    Node* first = new Node;
    first->data = 10;

    Node* second = new Node;
    second->data = 20;

    Node* third = new Node;
    third->data = 30;

    first->next = second;
    second->next = third;
    third->next = NULL;

    Node* head = first;

    cout << length(head) << endl;
}






