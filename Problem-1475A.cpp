/*#include <iostream>
using namespace std;

int main() {
     int n;
    int testcase;

    cin >> testcase;
    int p[6] = { 0 };
    for (int t = 0; t < testcase; ++t) {
        cin >> n;
        for ( int i = 3; i < n-4; i += 2) {
            if (n % i == 0) {
                p[t] = 1;
                break;
            }
        }
    }
    for (int t = 0; t < testcase; ++t) {
        if (p[t] == 1)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    
    cin.get();
}
*/