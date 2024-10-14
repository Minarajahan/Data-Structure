#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void print_(Node *head)
{
    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}
void insertAtTail(Node *&head, int val)
{
    Node *newnode = new Node(val);
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
}
void head_(Node * &head, int val)
{
    Node*newnode = new Node(val);
    newnode->next=head;
 
    head=newnode;
}
void delete_head(Node*&head)
{
    Node*deletee=head;
    head=head->next;
    delete deletee;
}
void delete_tail(Node* &head)

{
    Node * temp=head;
    while(temp->next->next !=NULL)
    {
        temp=temp->next;
    }
    temp ->next =NULL;
}
 
int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    insertAtTail(head, 40);
    head_(head,100);
    delete_tail(head);
    print_(head);
    delete_head(head);
    print_(head);

    return 0;
}