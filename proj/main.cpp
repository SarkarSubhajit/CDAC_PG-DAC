#include <bits/stdc++.h>
using namespace std;

static vector<string> v;

int main() {
    while(true) {
    string inp;
    cin >> inp;
    if (inp == "B")
        cout << "Basic User" << endl;
    else if (inp == "P")
        cout << "Premium User" << endl;
    else if (inp == "Q")
        break;
    v.push_back(inp);
    cout << v.size() << endl;
    }

    return 0;
}