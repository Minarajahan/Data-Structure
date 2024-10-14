
#include <bits/stdc++.h>

using namespace std;

int main()
{
    
    int t;
    cin >> t;
    while (t--)
    {
        string st;
        cin >> st;
        stack <char> char1;
        stack <char> char2;
        for (char tchar : st)
        {
            if (tchar == '1')
            {
                if (!char2.empty() && char2.top() == '0')
                {
                    char2.pop();
                }
                else
                {
                    char2.push(tchar);
                }
            }
            else
            {

                char2.push(tchar);
            }
        }
        if (!char2.empty())
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}
// #include<bits/stdc++.h>
// using namespace std;
// string check_eliminations(string str) {
//     stack<char> stk;
//     for (char ch : str) {
//         if (ch == '1' && !stk.empty() && stk.top() == '0') {
//             stk.pop();
//         } else {
//             stk.push(ch);
//         }
//     }

//     return stk.empty() ? "YES" : "NO";
// }
// int main()
// {
//      int t;
//     cin >> t;

//     while (t--) {
//         string binary_string;
//         cin >> binary_string;

//         cout << check_eliminations(binary_string) << endl;
//     }
//     return 0;
// }


// #include <iostream>
// #include <stack>
// #include <string>
// using namespace std;

// string check_eliminations(string str) {
//     stack<char> stk;
//     for (char ch : str) {
//         if (ch == '0') {
//             stk.push(ch);
//         } else {
//             if (!stk.empty() && stk.top() == '0') {
//                 stk.pop();
//             } else {
//                 return "NO";
//             }
//         }
//     }

//     if (stk.empty()) {
//         return "YES";
//     } else {
//         return "NO";
//     }
// }

// int main() {
//     string binary_string;
//     cin >> binary_string;

//     cout << check_eliminations(binary_string) << endl;

//     return 0;
// }