#include <bits/stdc++.h>
using namespace std;

bool prime (int x) {
	for (int i = 2; i * i <= x; i++) {
		if (x % i == 0)
			return false;
	}
	return true;
}

int n, a, b;

int main() {
	cin >> n;
	for (int i = 4; i <= n; i += 2) {
		for (int j = 2; j <= i; j++) {
			if (prime(j) && prime(i - j)) {
				cout << i << '=' << j << '+' << i - j << endl;
				break;
			}
			//cout << i << ' ' << j << endl;
		}
	}
	return 0;
}
