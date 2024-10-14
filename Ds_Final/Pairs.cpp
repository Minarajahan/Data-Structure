#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    string name;
    int id;
};
class cpm
{
    public:
    bool operator()(Student a, Student b)
    {
        if(a.name == b.name)
        return a.id<b.id;
        return a.name> b.name;
    }
};
int main()
{
    priority_queue<Student,vector<Student>,cpm > pq;
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        Student a;
        cin>>a.name>>a.id;
        pq.push(a);
    }
    while(!pq.empty())
    {
        cout<<pq.top().name<<" "<< pq.top().id<<endl;
        pq.pop();
    }
    return 0;
}