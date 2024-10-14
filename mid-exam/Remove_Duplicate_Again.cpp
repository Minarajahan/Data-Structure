#include <bits/stdc++.h>
using namespace std;
int main() {
    list<int> myList;
    int val;
    while (true) {
        cin >>val;
        if (val == -1)
            break;
        myList.push_back(val);
    }
    myList.sort();
    myList.unique();
    for (auto it = myList.begin(); it != myList.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
    
    return 0;
}
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     list<int> myList;
//     // list<int> unique;
//     // int val;

//     // while (true) {
//     //     cin >> val;
//     //     if (val == -1) {
//     //         break;
//     //     }

    //     if (find(unique.begin(), unique.end(), val) == unique.end()) {
    //         unique.push_back(val);
    //     }
//     // }

//     unique.sort();

//     for (auto it = unique.begin(); it != unique.end(); it++) {
//         cout << *it << " ";
//     }

//     return 0;
// }

