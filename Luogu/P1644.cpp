#include <bits/stdc++.h>
using namespace std;

int m, n, cnt;

void dfs(int y, int x) {
	if (y < 0 || y > n || x > m)
		return;
	if (y == n && x == m) {
		cnt++;
		return;
	}

	dfs(y + 1, x + 2);
	dfs(y + 2, x + 1);
	dfs(y - 1, x + 2);
	dfs(y - 2, x + 1);
}

int main() {
	cin >> n >> m;
	dfs(0, 0);
	cout << cnt;
	return 0;
}
