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
void print_link_list(Node* head)
{
    while(head!=NULL)
    {
        cout<<head->val<<" ";
        head=head->next;
    }
    cout<<endl;
}
int main()
{
    Node*head=new Node(16);
    Node* a=new Node(13);
    head->next=a;

print_link_list(head);
    return 0;
}