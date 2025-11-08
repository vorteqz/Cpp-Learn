#include <iostream>
#include <limits>
#include "calc.h"
using namespace std;

static void showthatdick() {
    cout << "1. add\n";
    cout << "2. sub\n";
    cout << "3. multiplie\n";
    cout << "4. divide\n";
    cout << "5. power\n";
    cout << "6. sqaure root\n";
    cout << "option -> ";
}

int main() {
    bool running = true;
    while (running) {
        showthatdick();
        int choice;
        cin >> choice;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        double a, b;
        int x, y;
        switch (choice) {
        case 1:
            cin >> a >> b;
            cout << Calculator::add(a, b) << endl;
            break;
        case 2:
            cin >> a >> b;
            cout << Calculator::sub(a, b) << endl;
            break;
        case 3:
            cin >> a >> b;
            cout << Calculator::multiply(a, b) << endl;
            break;
        case 4:
            cin >> a >> b;
            cout << Calculator::divide(a, b) << endl;
            break;
        case 6:
            cin >> a;
            cout << Calculator::sqroot(a) << endl;
            break;
        case 7:
            cin >> x >> y;
            cout << Calculator::modulus(x, y) << endl;
            break;
        case 0:
            running = false;
            break;
        default:
            break;
        }
    }
}
