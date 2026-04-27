#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double start, end, step;
    cin >> start >> end >> step;
    for(double x = start; x <= end + 1e-9; x += step) {
        cout << x << "\t";
        if(x < -2 || x > 4) cout << "функция не определена" << endl;
        else cout << sqrt(x + 2) + sqrt(4 - x) << endl;
    }
    return 0;
}