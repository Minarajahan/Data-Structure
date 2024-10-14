#include <bits/stdc++.h>
 
using namespace std;
 
int main() 
{
    list <int> myList;
    int q;
    cin >> q;
    while(q--)
    {
        int x; int v;
        cin >> x >> v;
        if(x == 0)
        {
            myList.push_front(v);
        }
        else if(x == 1)
        {
            myList.push_back(v);
        }
        else if(x == 2)
        {
           int size = myList.size();
           if(v < size && v >= 0)
           {
            auto it = next(myList.begin(), v);
            myList.erase(it);
           }
        }
        cout << "L -> ";
        for(int i : myList)
        {
            cout << i << " ";
        }
        cout << endl;
        cout << "R -> ";
        for(auto it = myList.rbegin(); it != myList.rend(); it++)
        {
            cout << *it << " ";
        }
        cout << endl;
    }
    return 0;
}