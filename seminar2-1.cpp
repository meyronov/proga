// Сыртин, 29 вариант, 2 прак
#include <iostream>
using namespace std;
int main() {
    int num;
    cin >> num;
    int dig1 = num / 1000;
    int dig2 = (num / 100) % 10;
    int dig3 = (num / 10) % 10;
    int dig4 = num % 10;
    if ((dig1 + dig4) == (dig2 * dig3))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}
