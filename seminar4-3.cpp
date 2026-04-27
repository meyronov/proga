#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[1000];
    for(int i = 0; i < n; i++) cin >> a[i];
    int max_sum = -1e9;
    for(int len = 2; len <= n; len += 2) {
        for(int i = 0; i <= n - len; i++) {
            int sum = 0;
            for(int j = i; j < i + len; j++) sum += a[j];
            if(sum > max_sum) max_sum = sum;
        }
    }
    cout << max_sum << endl;
    return 0;
}