#include <iostream>
#include <cmath>
using namespace std;
bool isPrime(int x) {
    if(x < 2) return false;
    for(int i = 2; i <= sqrt(x); i++)
        if(x % i == 0) return false;
    return true;
}
int main() {
    int n;
    cin >> n;
    for(int num = 2; num < n; num++) {
        int sum = 1;
        for(int d = 2; d <= num / 2; d++)
            if(num % d == 0) sum += d;
        if(isPrime(sum)) cout << num << endl;
    }
    return 0;
}