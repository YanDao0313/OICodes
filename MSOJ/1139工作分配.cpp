#include <bits/stdc++.h>
using namespace std;

int n, t, ans, a[20][20], b[20], book[20], anss[20];

void dfs(int k) {
	if (k > n) {
		for (int i = 1; i <= n; i++)
			t += b[i];
		if (t > ans) {
			ans = t;
			for (int i = 1; i <= n; i++)
				anss[i] = b[i];
		}
		t = 0;
		return;
	}
	for (int i = 1; i <= n; i++) {
		if (book[k] == 0 && b[i] == 0) {
			b[i] = a[i][k], book[k] = 1;
			dfs(k + 1);
			b[i] = 0, book[k] = 0;
		}
	}
}

int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++)
			cin >> a[i][j];
	}
	dfs(1);
	cout << ans << endl;
	for (int i = 1; i <= n; i++)
		cout << anss[i] << endl;
	return 0;
}
