#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node * next;
    Node* prev;
    Node (int val)
    {
        this -> val = val;
        this ->next=NULL;
        this ->prev=NULL;
    }
};
//Normal print
void print_normal(Node* head)
{
    Node* tmp=head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;

}
//Reverse print
void print_reverse(Node* tail)
{
    Node* tmp=tail;
    while(tmp!= NULL)
    {
        cout<<tmp->val<<" ";
        tmp= tmp -> prev;
    }
    cout<<endl;
}
//insert-at-any-position
void insert_at_position(Node* head, int pos, int val)
{
    Node * newNode= new Node(val);
    Node* tmp=head;
    for(int i=1; i<=pos-1; i++)
    {
        tmp=tmp->next;
    }
    // cout<<tmp->val<<endl;
    //Now 4 working operation
    // No -01 100 er next e 30 dite hobe
    newNode->next=tmp->next;
    //NO-2 20 er next e 100 ke dite hobe
    tmp->next=newNode;
    //NO-3 30 er previous e dite hobe newNode(100).
    //but eta update hoye 20 er next 100 and 100 er next 30 hoye gase.30 er previous 100 and 100 previous 20.
    newNode->next->prev=newNode;
    // N0-4 100 er previous e 20 dite hobe
    newNode->prev=tmp;
}

// inseret at head
void insert_head(Node * &head, int val){
    Node* newNode= new Node(val);
    if(head==NULL)
    {
        head=newNode;
        return;
    
    }
    newNode->next=head;
    head->prev=newNode;
    head=newNode;
}
int main()
{
    Node* head=new Node(10);
    Node* a=new Node(20);
    Node* b=new Node(30);
    Node* c=new Node(40);
    Node* tail=c;
    //connection
    head->next=a;
    a->prev=head;
    a->next=b;
    b->prev=a;
    b->next=c;
    c->prev=b;
    insert_head(head,100);
    // insert_at_position(head,2,100);
    print_normal(head);
   print_reverse(tail);
    return 0;
}