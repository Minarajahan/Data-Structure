// #include<bits/stdc++.h>
// using namespace std;
// class Node{
//     public:
//     int val;
//     Node * next;
//     Node * prev;
//     Node (int val)
//     {
//         this -> prev =NULL;
//         this -> val = val;
//         this ->next=NULL;
       
//     }
// };
// class my_code
// {
//     public:
//     Node*head=NULL;
//     Node*tail=NULL;
//     int size=0;
//     void push(int val)
//     {
//         Node * new_Node=new Node(val);
//         size++;
//         if(head==NULL)
//         {
//             head=tail=new_Node;
//             return;
//         }
//         tail->next=new_Node;
//         new_Node->prev=tail;
//         tail=tail->next;
//     }
//     void pop()
//     {
//         size--;
//         Node* delete_Node=tail;
//         tail=tail->prev;
//         if(tail==NULL)
//         {
//             head=NULL;
//         }
//         else{
//             tail->next=NULL;
//         }
//         delete delete_Node;
//     }
// }
// int top()
// {
//     return tail->val;
// }
// int size()
// {
//     return size;
// }
// bool empty()
// {
//     if(cnt==0) return true;
//     else return false;
// }
// int main()
// {
    
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int arr1[n];
    int arr2[m];
    bool flag =true;
    if(n!=m) flag=false;
    else{
        for(int i=0; i<n; i++)
        {
            cin>>arr1[i];
        }
        for(int i=0; i<m; i++)
        {
            cin>>arr2[i];
        }
        reverse(arr2,arr2+m);
        for(int i=0; i<m; i++)
        {
           if(arr1[i] != arr2[i])
           {
            flag =false;
            break;

           }
        }
    }
    if(flag) cout<<"YES";
    else cout <<"NO";
    return 0;
}