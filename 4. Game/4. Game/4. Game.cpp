#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int bad = rand() % 10 + 1;
    int n, score = 0;
    while (true) {
        cout << "num (1-10): ";
        cin >> n;
        if (n == bad) {
            cout << "ur out xDDDD > " << score << "\n";
            break;
        }
        else {
            cout << "safe\n";
            score++;
        }
    }
}