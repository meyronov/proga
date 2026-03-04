// Сыртин, вариант 29. есть ли такой треуг и если да то какой
#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "c: ";
    cin >> c;
    if (a + b > c && a + c > b && b + c > a) {
        cout << "ou da detka, ";
        if (a == b && b == c) {
            cout << "ravnostorony" << endl;
        } else if (a == b || a == c || b == c) {
            cout << "ravnobedreny" << endl;
        } else {
            cout << "raznostorony" << endl;
        }
    } else {
        cout << "takogo ne byvayet" << endl;
    }
    return 0;
}