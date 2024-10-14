#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    cin.ignore();
    while(T--)
    {
        string sentence;
        getline(cin,sentence);
        map<string,int>mp;
        string name;
        stringstream s(sentence);
        string ans;
        int mx= INT_MIN;
        while(s>>name)
        {
            mp[name] ++;
            if(mp[name]>mx)
            {
                ans=name;
                mx=mp[name];
            }
        }
        cout<<ans<<" "<<mx<<endl;
    }
    return 0;
}