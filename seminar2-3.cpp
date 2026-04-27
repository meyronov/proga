// Сыртин, 29 вариант, 2 прак
#include <iostream>
using namespace std;
int main() {
    int k;
    cin >> k;
    bool last_day = false;
    if (k == 90 || k == 91 || k == 181 || k == 182 || k == 273 || k == 274 || k == 366)
        last_day = true;
    if (last_day)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}