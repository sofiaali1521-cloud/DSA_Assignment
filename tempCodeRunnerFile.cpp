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



int main(){

}