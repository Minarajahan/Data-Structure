#include<bits/stdc++.h>
using namespace std;
int main()
{
     priority_queue<int,vector<int>, greater <int>> pq;
    int n;
    cin >> n;
    while (n--)
    {
        int a;
        cin >> a;
        pq.push(a);
       
    }
    int t;
    cin>>t;
    while(t--)
    {
        int c;
        cin>>c;
        if (c == 0)
        {
           int b;
            cin>>b;
            pq.push(b);
           cout<<pq.top()<<endl;
        }
        else if(c==1)
        {
            if (!pq.empty())
                cout<<pq.top()<<endl;
            else
                cout << "Empty\n";
        }
        else if (c == 2)
        {
            if (!pq.empty())
            {
                pq.pop();
                if (!pq.empty())
                    cout<<pq.top()<<endl;
                else
                    cout << "Empty\n";
            }
            else
                cout << "Empty\n";
        }
    }
    return 0;
}