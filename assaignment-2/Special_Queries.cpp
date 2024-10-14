#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;

    queue<string> line;

    while (T--)
    {
        int query;
        cin >> query;

        if (query == 0)
        {
            string name;
            cin >> name;
            line.push(name);
        }
        else if (query == 1)
        {
            if (!line.empty())
            {
                cout << line.front() << endl;
                line.pop();
            }
            else
            {
                cout << "Invalid" << endl;
            }
        }
    }
    return 0;
}