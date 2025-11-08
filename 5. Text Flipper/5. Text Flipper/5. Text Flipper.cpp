#include <iostream>
#include <string>
using namespace std;

int main() {
    string txt;
    cout << "say smth: ";
    getline(cin, txt);
    for (int i = txt.size() - 1; i >= 0; i--)
        cout << txt[i];
    cout << "\n";
}