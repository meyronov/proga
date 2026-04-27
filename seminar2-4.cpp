// Сыртин, 29 вариант, 2 прак
#include <iostream>
using namespace std;
int main() {
    int g, m, d, n;
    cin >> g >> m >> d >> n;
    int days_in_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    bool leap = (g % 400 == 0) || (g % 4 == 0 && g % 100 != 0);
    if (leap) days_in_month[1] = 29;
    int total_days = d - n * 7;
    while (total_days <= 0) {
        m--;
        if (m == 0) {
            m = 12;
            g--;
            leap = (g % 400 == 0) || (g % 4 == 0 && g % 100 != 0);
            days_in_month[1] = leap ? 29 : 28;
        }
        total_days += days_in_month[m - 1];
    }
    cout << g << " " << m << " " << total_days << endl;
    return 0;
}