// Сыртин, 29 вариант, 2 прак
#include <iostream>
using namespace std;
int main() {
    double a, b, c, d;
    cin >> a >> b >> c >> d;
    double avg = (a + b + c + d) / 4.0;
    int count = 0;
    if (a < avg) count++;
    if (b < avg) count++;
    if (c < avg) count++;
    if (d < avg) count++;
    cout << count << endl;
    return 0;
}