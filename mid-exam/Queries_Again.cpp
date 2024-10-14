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

// void insert_head(Node *&head, Node *&tail, int val)
// {
//     Node *newNode = new Node(val);
//     if (head == NULL)
//     {
//         head = newNode;
//         tail = newNode;
//     }
//     else
//     {
//         newNode->next = head;
//         head->prev = newNode;
//         head = newNode;
//     }
// }

// void insert_tail(Node *&head, Node *&tail, int val)
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

// void delete_head(Node *&head)
// {
//     if (head == NULL)
//     {
//         cout << "Invalid" << endl;
//         return;
//     }
//     Node *deleteNode = head;
//     head = head->next;
//     if (head != NULL)
//     {
//         head->prev = NULL;
//     }
//     delete deleteNode;
// }

// void insert_position(Node *&head, int pos, int val)
// {
//     if (pos < 0)
//     {
//         cout << "Invalid" << endl;
//         return;
//     }

//     Node *tmp = head;
//     Node *prevNode = NULL;

//     for (int i = 0; i < pos && tmp != NULL; i++)
//     {
//         prevNode = tmp;
//         tmp = tmp->next;
//     }

//     if (pos > 0 && tmp == NULL)
//     {
//         cout << "Invalid" << endl;
//         return;
//     }

//     Node *newNode = new Node(val);
//     newNode->next = tmp;

//     if (prevNode != NULL)
//     {
//         prevNode->next = newNode;
//     }
//     else
//     {
//         head = newNode;
//     }

//     if (tmp != NULL)
//     {
//         tmp->prev = newNode;
//     }

//     newNode->prev = prevNode;
// }

// void print_LR(Node *head)
// {
//     Node *temp = head;
//     cout << "L -> ";
//     while (temp != NULL)
//     {
//         cout << temp->val << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }

// void print_RL(Node *tail)
// {
//     Node *temp = tail;
//     cout << "R -> ";
//     while (temp != NULL)
//     {
//         cout << temp->val << " ";
//         temp = temp->prev;
//     }
//     cout << endl;
// }

// int main()
// {
//     Node *head = NULL;
//     Node *tail = NULL;
//     int q;
//     cin >> q;
//     while (q--)
//     {
//         int a, b;
//         cin >> a >> b;
//         if (a == 0)
//         {
//             insert_head(head, tail, b);
//         }
//         else if (a == 1)
//         {
//             insert_tail(head, tail, b);
//         }
//         else if (a == 2)
//         {
//             if (b == 0)
//             {
//                 delete_head(head);
//             }
//             else
//             {
//                 int pos;
//                 cin >> pos;
//                 insert_position(head, pos, b);
//             }
//         }
//         print_LR(head);
//         print_RL(tail);
//     }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
int count = 0;
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
void insert_head(Node *&head, Node *&tail, int val)
{
    Node *new_Node = new Node(val);
    if (head == NULL)
    {
        head = new_Node;
        tail = new_Node;
        return;
    }
    new_Node->next = head;
    head->prev = new_Node;
    head = new_Node;
}
void insert_pos(Node *&head, Node *&tail, int index, int val)
{
    Node *new_Node = new Node(val);
    if (head == NULL)
    {
        head = new_Node;
        tail = new_Node;
        return;
    }
    Node *temp = head;
    for (int i = 0; i < index - 1; i++)
    {
        temp = temp->next;
    }
    new_Node->next = temp->next;
    temp->next = new_Node;
    new_Node->next->prev = new_Node;
    new_Node->prev = temp;
}
void print_right(Node *tail)
{
    Node *temp = tail;
    cout << "R -> ";
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << endl;
}
void print_Node(Node *head)
{
    Node *temp = head;
    cout << "L -> ";
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}
void insert_tail(Node *&head, Node *&tail, int y)
{
    Node *new_Node = new Node(y);
    if (tail == NULL)
    {
        head = new_Node;
        tail = new_Node;
        return;
    }
    tail->next = new_Node;
    new_Node->prev = tail;
    tail = new_Node;
}
int size_node(Node *head)
{
    Node *temp = head;
    int count = 0;
    if (temp == NULL)
        return count;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}
int main()
{
  
    Node *head = NULL;
    Node *tail = NULL;
    int q;
    cin >> q;
    while (q--)
    {
        int x, y;
        cin >> x >> y;
        int size = size_node(head);
        if (x > size)
            cout << "Invalid" << endl;
        else
        {
            if (x == 0)
            {
                insert_head(head, tail, y);
                print_Node(head);
                print_right(tail);
            }
            else if (x == size)
            {
                insert_tail(head, tail, y);
                print_Node(head);
                print_right(tail);
            }
            else if (x > 0)
            {
                insert_pos(head, tail, x, y);
                print_Node(head);
                print_right(tail);
            }
        }
    }
    return 0;
}


