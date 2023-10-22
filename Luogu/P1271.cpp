#include <bits/stdc++.h>
using namespace std;

int m, n, t, b[1024];

int main() {
	cin >> n >> m;
	for (int i = 1; i <= m; i++) {
		cin >> t;
		b[t]++;
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= b[i]; j++) {
			cout << i << ' ';
		}
	}
	return 0;
}