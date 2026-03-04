// Сыртин, вариант 29. номер месяца - месяц
#include <iostream>
using namespace std;
int main() {
    int month;
    cout << "numofmonth (1-12): ";
    cin >> month;
    if (month == 1) {
        cout << "jan" << endl;
    } else if (month == 2) {
        cout << "feb" << endl;
    } else if (month == 3) {
        cout << "mar" << endl;
    } else if (month == 4) {
        cout << "apr" << endl;
    } else if (month == 5) {
        cout << "may" << endl;
    } else if (month == 6) {
        cout << "jun" << endl;
    } else if (month == 7) {
        cout << "jul" << endl;
    } else if (month == 8) {
        cout << "aug" << endl;
    } else if (month == 9) {
        cout << "sep" << endl;
    } else if (month == 10) {
        cout << "oct" << endl;
    } else if (month == 11) {
        cout << "nov" << endl;
    } else if (month == 12) {
        cout << "dec" << endl;
    } else {
        cout << "takogo ne byvayet))" << endl;
    }
    return 0;
}