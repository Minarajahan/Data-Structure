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


// // inseret at head
// void insert_head(Node * &head, int val){
//     Node* newNode= new Node(val);
//     if(head==NULL)
//     {
//         head=newNode;
//         return;
    
//     }
//     newNode->next=head;
//     head->prev=newNode;
//     head=newNode;
// }
// void insert_tail(Node* &head,Node* &tail, int val){
//     Node*newNode=new Node(val);
//     if(tail==NULL)
//     {
//         head=newNode;
//         tail=newNode;
//         return;
//     }
//     tail->next=newNode;
//     newNode->prev=tail;
//     tail=newNode;
// }
void delete_at_position(Node* head,int pos)
{
    Node* tmp=head;
    for(int i=1; i<=pos-1; i++)
    {
        tmp=tmp->next;
    }
    Node* deleteNode=tmp->next;
    tmp->next=tmp->next->next;
    tmp->next->prev=tmp;
    delete deleteNode;

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
    int pos;
    cin>>pos;
    delete_at_position(head,pos);
    
    // insert_tail(head,tail,100);
    print_normal(head);
   print_reverse(tail);
    return 0;
}