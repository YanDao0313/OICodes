#include <bits/stdc++.h>
using namespace std;

long long n, m, a[100010], b[100010], ans = 0, t;

int main() {
	cin >> m >> n;
	for (int i = 1; i <= m; i++)
		cin >> a[i];
	sort(a + 1, a + m + 1);
	for (int i = 1; i <= n; i++) {
		cin >> t;
		long long l = lower_bound(a + 1, a + m + 1, t) - a;
		if (l == m + 1)
			ans += t - a[m];
		else if (l == 1)
			ans += a[1] - t;
		else
			ans += min(abs(a[l] - t), abs(t - a[l - 1]));
	}
	cout << ans;
	return 0;
}
