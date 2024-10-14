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
void print_recursive(Node*n)
{
    if(n==NULL) return;
    {
        print_recursive(n->next);
        cout<<n->val<<" ";
    }
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
    print_recursive(head);
    return 0;
}