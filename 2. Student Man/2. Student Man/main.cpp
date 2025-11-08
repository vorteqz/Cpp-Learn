#include <iostream>
#include <vector>
#include <limits>
#include "Student.h"
using namespace std;

static void showMenu() {
    cout << "\n1. add\n2. list\n3. del\n0. exit\n> ";
}

int main() {
    vector<student> v;
    bool run = true;
    while (run) {
        showMenu();
        int op;
        cin >> op;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        if (op == 1) {
            string n;
            int a;
            double g;
            cout << "name age gpa: ";
            cin >> n >> a >> g;
            v.emplace_back(n, a, g);
        }
        else if (op == 2) {
            for (size_t i = 0; i < v.size(); ++i)
                cout << i + 1 << ". " << v[i].nameget() << " " << v[i].getage() << " " << v[i].getgpa() << endl;
        }
        else if (op == 3) {
            int i;
            cout << "index: ";
            cin >> i;
            if (i > 0 && i <= (int)v.size()) v.erase(v.begin() + i - 1);
        }
        else if (op == 0) run = false;
    }
}