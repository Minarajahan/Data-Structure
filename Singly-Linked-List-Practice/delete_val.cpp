#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node * next;
    Node (int val)
    {
        this -> val = val;
        this ->next=NULL;
    }
};
void print_(Node*head)
{
    while(head!=NULL)
    {
        cout<<head->val<<" ";
        head=head->next;
    }
    cout<<endl;
}
void delete_(Node*head,int pos)
{
    Node*tmp=head;
    for(int i=1; i<=pos-1; i++)
    {
        tmp=tmp->next;
    }
    Node*deleteNode=tmp->next;
    tmp->next=tmp->next->next;
    delete deleteNode;
}
int main()
{
    
    Node*head=new Node(10);
    Node*a= new Node(20);
    Node*b=new Node(30);
    Node*c=new Node(40);
    head->next=a;
    a->next=b;
    b->next=c;
    print_(head);
    int pos;
    cin>>pos;
    delete_(head,pos);
    print_(head);

    return 0;
}