#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Task {
public:
    string name;
    bool done;

    Task(string n) { name = n; done = false; }
};

class Todo {
    vector<Task> t;
public:
    void add(string n) { t.push_back(Task(n)); }
    void show() {
        if (t.empty()) cout << "no task\n";
        for (int i = 0; i < t.size(); i++)
            cout << i + 1 << ". " << t[i].name << (t[i].done ? " [x]" : " [ ]") << "\n";
    }
    void doneT(int i) {
        if (i > 0 && i <= t.size()) t[i - 1].done = true;
    }
    void del(int i) {
        if (i > 0 && i <= t.size()) t.erase(t.begin() + i - 1);
    }
};

int main() {
    Todo list;
    int ch;
    string n;

    while (true) {
        cout << "\n1 add\n2 show\n3 done\n4 del\n5 exit\n-> ";
        cin >> ch;
        if (ch == 1) {
            cout << "task name: ";
            cin.ignore();
            getline(cin, n);
            list.add(n);
        }
        else if (ch == 2) list.show();
        else if (ch == 3) {
            cout << "task num: ";
            int i; cin >> i;
            list.doneT(i);
        }
        else if (ch == 4) {
            cout << "task num: ";
            int i; cin >> i;
            list.del(i);
        }
        else if (ch == 5) break;
        else cout << "bad opt\n";
    }

    cout << "bye!\n";
}
