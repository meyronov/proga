// Сыртин, вариант 29. функция f(x) = eˣ − x²
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double x;
    cout << "x: ";
    cin >> x;
    double f = exp(x) - x*x;
    cout << "f(x) = " << f << endl;
    return 0;
}