#include <bits/stdc++.h>
using namespace std;

int n, m, t, pos, a[100010];

int main() {
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	cin >> m;
	for (int i = 1; i <= m; i++) {
		cin >> t;
		if (a[1] >= t) {
			cout << a[1] << endl;
			continue;
		}
		if (a[n] <= t) {
			cout << a[n] << endl;
			continue;
		}
		pos = lower_bound(a + 1, a + n + 1, t) - a;
		if (a[pos] - t < t - a[pos - 1])
			cout << a[pos] << endl;
		else
			cout << a[pos - 1] << endl;
	}
	return 0;
}
