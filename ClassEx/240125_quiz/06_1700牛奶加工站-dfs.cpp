#include <bits/stdc++.h>
using namespace std;

queue<int> q;
bool flg = false;
int n, u, v, cnt, a[110][110], b[110], ans[110];

void dfs(int x, int s) {
	if (x == n) {
		flg = true;
		ans[cnt++] = s;
		return;
	}
	for (int i = 1; i <= n; i++) {
		if (a[x][i] == 1 && b[i] == 0) {
			b[i] = 1;
			dfs(i, s);
			b[i] = 0;
		}
	}
}

int main() {
	//freopen("06.in", "r", stdin);
	cin >> n;
	for (int i = 1; i < n; i++) {
		cin >> u >> v;
		a[v][u] = 1;
	}
	for (int i = 1; i <= n; i++) {
		dfs(i, i);
	}
	if (flg) {
		sort(ans, ans + cnt - 1);
		cout << ans[0];
	} else
		cout << -1;
	return 0;
}
