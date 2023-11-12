#include <bits/stdc++.h>
using namespace std;

int n, t;

bool is_prime(int a) {
	if (a < 2)
		return false;
	for (int i = 2; i * i <= a; i++) {
		if (a % i == 0)
			return false;
	}
	return true;
}

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> t;
		if (is_prime(t))
			cout << t << ' ';
	}
	return 0;
}
