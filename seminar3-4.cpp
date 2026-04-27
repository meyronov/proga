#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double x, eps;
    cin >> x >> eps;
    double sum = 1, term = 1;
    int n = 1;
    while(fabs(term) >= eps) {
        term *= -x * x / ((2*n - 1) * 2*n);
        sum += term;
        n++;
    }
    cout << sum << endl;
    return 0;
}