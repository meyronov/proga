// Сыртин, вариант 29. сум квадр цифр трехзнач числ
#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "3znach: ";
    cin >> num;
    int a = num / 100;
    int b = (num / 10) % 10;
    int c = num % 10;
    int sum = a*a + b*b + c*c;
    cout << "sumsqnum = " << sum << endl;
    return 0;
}