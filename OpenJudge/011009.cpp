#include <bits/stdc++.h>
using namespace std;

int n, t, sum, b[1024];

int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> t;
		if (b[t] == 0) {
			b[t]++;
			sum++;
		} else
			continue;
	}
	cout << sum << endl;
	for (int i = 1; i <= 1000; i++) {
		if (b[i])
			cout << i << ' ';
	}
	return 0;
}