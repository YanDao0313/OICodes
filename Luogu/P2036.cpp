#include <bits/stdc++.h>
using namespace std;

int n, a1[20], a2[20], ans = 1e9;

void dfs(int num, int x, int y) {
	if (num > n) {
		if (x == 1 && y == 0)
			return;
		ans = min(abs(x - y), ans);
		return;
	}
	dfs(num + 1, x * a1[num], y + a2[num]);
	dfs(num + 1, x, y);
}

int main() {
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> a1[i] >> a2[i];
	dfs(1, 1, 0);
	cout << ans;
	return 0;
}
