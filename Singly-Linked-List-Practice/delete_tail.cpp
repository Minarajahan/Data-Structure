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
void delete_At_Tail(Node*&head)
{
    Node*tmp=head;
    while(tmp->next->next !=NULL)
    {
        tmp=tmp->next;
    }
    tmp->next=NULL;
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
    delete_At_Tail(head);
    print_(head);

    return 0;
}