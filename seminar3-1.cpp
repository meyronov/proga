#include <iostream>
using namespace std;
int main() {
    int count = 0, i = 0, num;
    while(i < 10) {
        cin >> num;
        if(num % 3 == 0) count++;
        i++;
    }
    cout << count << endl;
    return 0;
}