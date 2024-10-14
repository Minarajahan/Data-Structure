#include <bits/stdc++.h>
using namespace std;

int main() {
    stack<int> s;
    queue<int> q; 
    int a, b;
    bool flag = true;
    cin >> a >> b;

    if (a != b)
        flag = false; 
    else {
        for (int i = 0; i < a; i++) {
            int val;
            cin >> val;
            s.push(val);
        }
        for (int i = 0; i < b; i++) {
            int val2;
            cin >> val2;
            q.push(val2); 
        }
    }
    while (!s.empty()) {
        if (s.top() != q.front()) {
            flag = false;
            break;
        }
        q.pop();
        s.pop();
    }
    if (flag)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
