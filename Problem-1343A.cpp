#include<iostream>

#include <cmath>
using namespace std;
int main() {
	int n,t;
	cin >> t;
	int a, p[7] = { 0 }, k, x;
	
	for (int j = 0; j < t; ++j) {
		cin >> n;
		
		for (k = 2; k < 30; ++k) {
			for (x = 1; x < n; ++x) {
				a = pow(2, k);
				if (x == (float)n / (a - 1)) {
					p[j] = x;
					break;
				}

			}
			if (p[j] == x) {
				
				break;
			}
		}
	}
	for (int j = 0; j < t; ++j) {
		cout << p[t] << endl;
	}
	
	cin.get();
}
