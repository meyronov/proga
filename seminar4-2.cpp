#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[1000];
    for(int i = 0; i < n; i++) cin >> a[i];
    int max_val = a[0], first_max = 0, last_max = 0;
    for(int i = 1; i < n; i++) {
        if(a[i] > max_val) {
            max_val = a[i];
            first_max = i;
            last_max = i;
        }
        else if(a[i] == max_val) last_max = i;
    }
    int distinct[1000], count = 0;
    for(int i = first_max + 1; i < last_max; i++) {
        bool found = false;
        for(int j = 0; j < count; j++)
            if(distinct[j] == a[i]) { found = true; break; }
        if(!found) distinct[count++] = a[i];
    }
    cout << count << endl;
    return 0;
}