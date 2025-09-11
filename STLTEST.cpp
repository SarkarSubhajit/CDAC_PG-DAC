#include <iostream>
#include <stack>
#include <vector>
#include <queue>
#include <string>
#include <map>
using namespace std;

class Stltest {
    stack<int> s;
    string str;
    vector<int> v;
    queue<int> q;
    list<double> ls;
    map<int, string> mp;
    static int count;

    public:
        Stltest() {
            s.push(10);
            str = "A quick brown dog jumps over the lazy dog";
            v{20, 21, 22};
            q.push(34);
            q.push(35);
            ls.push_back(56);
            ls.push_front(89);
            mp[0] = "unordered";
            mp[1] = "map";
        }
        void display() {
            cout << "STACK...." << endl;
            cout << "Stack : " << s.top() << endl;
            cout << "QUEUE...." << endl;
            cout << "Queue front : " << q.front() << endl;
            cout << "Queue back : " << q.back() << endl;
            cout << "VECTOR...." << endl;
            for (auto i : v) cout << i << " ";
            cout << endl;
            cout << "MAP...." << endl;
            for (auto &i : mp) cout << i.first << "->" << i.second << endl;
            cout << "LIST...." << endl;
            for (auto 
        }
};

int main() {

}
