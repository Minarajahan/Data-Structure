#include <bits/stdc++.h>
 
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->prev = NULL;
        this->val = val;
        this->next = NULL;
    }
};
void inseart_tail(Node *&head, Node *&tail, int val)
{
    Node *new_Node = new Node(val);
    if (head == NULL)
    {
        head = new_Node;
        tail = new_Node;
        return;
    }
    tail->next = new_Node;
    new_Node->prev = tail;
    tail = new_Node;
}
void check_palindrome(Node *head, Node *tail, int count)
{
    Node *a = head;
    Node *b = tail;
    bool flag = true;
    if (a == NULL || a->next == NULL)
    {
        flag = true;
    }
    for (int i = 1; i <= count / 2; i++)
    {
        if (a->val != b->val)
        {
            flag = false;
            break;
        }
        a = a->next;
        b = b->prev;
    }
    if (flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
int count_node(Node *aead)
{
    Node *temp = aead;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->prev;
    }
    return count;
}
int main()
{
  
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        inseart_tail(head, tail, val);
    }
    int count = count_node(tail);
    check_palindrome(head, tail, count);
  
    return 0;
}
// #include <bits/stdc++.h>
// using namespace std;
// class Node
// {
// public:
//     int val;
//     Node *next;
//     Node *prev;
//     Node(int val)
//     {
//         this->val = val;
//         this->next = NULL;
//         this->prev = NULL;
//     }
// };
// void insert(Node *&head, Node *&tail, int val)
// {
//     Node *newNode = new Node(val);
//     if (head == NULL)
//     {
//         head = newNode;
//         tail = newNode;
//     }
//     else
//     {
//         tail->next = newNode;
//         newNode->prev = tail;
//         tail = newNode;
//     }
// }
// // bool isPalindrome(Node *head, Node *tail)
// // {
// //     while (head != NULL && tail != NULL)
// //     {
// //         if (head->val != tail->val)
// //         {
// //             return false;
// //         }
// //         head = head->next;
// //         tail = tail->prev;
// //     }
// //     return true;
// // }
// bool isPalindrome(Node* head, Node* tail) {
//     Node* i = head;
//     Node* j = tail;
//     bool flag = true;
//     while (i != j && i->prev != j) {
//         if (i->val != j->val) {
//             flag = false;
//             break;
//         }
//         i = i->next;
//         j = j->prev;
//     }
//     return flag;
// }

// int main()
// {
//     Node *head = NULL;
//     Node *tail = NULL;
//     int value;
//     while (true)
//     {
//         cin >> value;
//         if (value == -1)
//         {
//             break;
//         }
//         insert(head, tail, value);
//     }

//     if (isPalindrome(head, tail))
//     {
//         cout << "YES\n";
//     }
//     else
//     {
//         cout << "NO\n";
//     }

//     return 0;
// }
