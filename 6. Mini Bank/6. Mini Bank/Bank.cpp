#include "Bank.h"
#include <iostream>
using namespace std;

Account::Account(string n, int p) : name(n), pin(p), balance(0) {}

void Account::deposit(double amt) { balance += amt; }

bool Account::withdraw(double amt) {
    if (amt > balance) return false;
    balance -= amt;
    return true;
}

void Account::show() {
    cout << "\nUser: " << name << "\nBalance: " << balance << "\n";
}

void Bank::menu() {
    int c;
    while (true) {
        cout << "\n1.New  2.Login  3.Exit\n> ";
        cin >> c;

        if (c == 1) {
            string n; int p;
            cout << "name: "; cin >> n;
            cout << "pin: "; cin >> p;
            accs.push_back(Account(n, p));
        }
        else if (c == 2) {
            Account* a = login();
            if (!a) cout << "wrong!\n";
            else {
                int ch;
                while (true) {
                    cout << "\n1.Dep 2.With 3.See 4.Logout\n> ";
                    cin >> ch;
                    if (ch == 1) { double x; cout << "add: "; cin >> x; a->deposit(x); }
                    else if (ch == 2) { double x; cout << "take: "; cin >> x; if (!a->withdraw(x)) cout << "no $$\n"; }
                    else if (ch == 3) { a->show(); }
                    else break;
                }
            }
        }
        else break;
    }
}

Account* Bank::login() {
    string n; int p;
    cout << "name: "; cin >> n;
    cout << "pin: "; cin >> p;
    for (auto& a : accs)
        if (a.name == n && a.pin == p)
            return &a;
    return nullptr;
}