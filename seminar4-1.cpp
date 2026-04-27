#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[1000];
    for(int i = 0; i < n; i++) cin >> a[i];
    int max_len = (n > 0) ? 1 : 0;
    for(int i = 0; i < n; i++) {
        int len = 1;
        for(int j = i + 1; j < n; j++) {
            if(a[j-1] == 0 && a[j] == 0) len++;
            else if(a[j-1] == 0) break;
            else {
                int q = a[j] / a[j-1];
                if(a[j-1] * q == a[j]) len++;
                else break;
            }
        }
        if(len > max_len) max_len = len;
    }
    cout << max_len << endl;
    return 0;
}