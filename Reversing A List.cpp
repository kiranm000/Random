//Reversing A List
#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* next;
};
Node* head=NULL;

void insert(int x)
{
    Node* temp=new Node();
    temp->data=x;
    temp->next=head;
    head=temp;
}

void print()
{
    Node* t;
    t=head;
    while(t)
    {
        cout<<t->data<<" ";
        t=t->next;
    }
    cout<<endl;
}

void reverse()
{
    Node* r=NULL;
    Node* q=NULL;
    Node* ptr=head;
    while(ptr)
    {
        r=q;
        q=ptr;
        ptr=ptr->next;
        q->next=r;
    }
    head=q; 
}

void count()
{
    Node* t;
    t=head;
    int count=0;
    while(t)
    {
        count++;
        t=t->next;
    }
    cout<<count<<endl;
}

int main()
{
    vector<int> ele={1,2,3,4,5,6,7};
    for(int i=0;i<ele.size();i++)
    {
        insert(ele[i]);
    }
    print();
    count();
    reverse();
    print();
}