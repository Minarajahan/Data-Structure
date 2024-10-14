#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T; 
    cin>>T;
    while(T--)
    {
        int a;
        cin>>a;
        set<int>st;
        for(int i=0; i<a; i++)
        {
            int b;
            cin>>b;
            st.insert(b);
        }
        for(auto v:st)
        cout<<v<<" ";
        cout<<endl;
    }
    return 0;
}