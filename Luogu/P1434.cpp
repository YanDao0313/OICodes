#include <bits/stdc++.h>
using namespace std;

int r, c, ans = -1, a[110][110], maxx[110][110];

int ss[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};

int dfs(int x, int y) {
	if (maxx[x][y])
		return maxx[x][y];
	maxx[x][y] = 1;
	for (int i = 0; i < 4; i++) {
		int tx = x + ss[i][0];
		int ty = y + ss[i][1];
		if (tx < 1 || ty < 1 || tx > r || ty > c)
			continue;
		if (a[tx][ty] >= a[x][y])
			continue;
		dfs(tx, ty);
		maxx[x][y] = max(maxx[x][y], maxx[tx][ty] + 1);
	}
	return maxx[x][y];
}

int main() {
	cin >> r >> c;
	for (int i = 1; i <= r; i++) {
		for (int j = 1; j <= c; j++)
			cin >> a[i][j];
	}
	for (int i = 1; i <= r; i++) {
		for (int j = 1; j <= c; j++)
			ans = max(ans, dfs(i, j));
	}
	cout << ans;
	return 0;
}
