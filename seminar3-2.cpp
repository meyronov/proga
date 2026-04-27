#include <iostream>
using namespace std;
int main() {
    for(int num = 1000; num <= 9999; num++) {
        int a = num / 1000;
        int b = (num / 100) % 10;
        int c = (num / 10) % 10;
        int d = num % 10;
        if(a - d == b - c) cout << num << endl;
    }
    return 0;
}