Implementation of Linked List
#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node* next;
};
struct Node* head=NULL;

void insert(int x)
{
    Node* temp=new Node();
    temp->data=x;
    temp->next=head;
    head=temp;
    cout<<temp->data<<endl;
}

void print()
{
    Node* t;
    t=head;
    while(t!=0)
    {
        cout<<t->data<<" ";
        t=t->next;
    }
    cout<<endl;
}

void count()
{
    Node* t;
    t=head;
    int count=0;
    while(t!=0)
    {
        count++;
        t=t->next;
    }
    cout<<count<<endl;
}

int main() {
    insert(5);
    insert(6);
    insert(7);
    insert(8);
    print();
    count();
	return 0;
}