#include <bits/stdc++.h>
using namespace std;

int n, m, u, v, sum, ans, a[1024][1024], b[1024], cnt[1024];

void dfs(int x) {
	if (x == v) {
		sum++;
		for (int i = 1; i <= n; i++) {
			if (b[i] == 1)
				cnt[i]++;
		}
		return;
	}
	for (int i = 1; i <= n; i++) {
		if (a[x][i] == 1 && b[i] == 0) {
			b[i] = 1;
			dfs(i);
			b[i] = 0;
		}
	}
}

int main() {
	cin >> n >> m;
	for (int i = 1; i <= m; i++) {
		cin >> u >> v;
		a[u][v] = a[v][u] = 1;
	}
	cin >> u >> v;
	dfs(u);
	if (sum > 0) {
		for (int i = 1; i <= n; i++) {
			if (cnt[i] == sum)
				ans++;
		}
		cout << ans - 1;
	} else
		cout << "-1";
	return 0;
}
