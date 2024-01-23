#include <bits/stdc++.h>
using namespace std;

int n, sum, sx, sy, fx, fy, a[10][10], minn[10][10];

int ss[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};

void dfs(int y, int x, int s) {
	if (y == fy && x == fx) {
		sum = s;
		return;
	}
	if (y < 1 || x < 1 || y > n || x > n)
		return;
	for (int i = 0; i < 4; i++) {
		int tx = x + ss[i][0];
		int ty = y + ss[i][1];
		if (tx < 1 || ty < 1 || tx > n || ty > n)
			continue;
		if (s < minn[ty][tx]) {
			minn[ty][tx] = s + 1;
			dfs(ty, tx, s + 1);
		}
	}
}

int main() {
	cin >> n;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			cin >> a[i][j];
	for (int i = 1; i <= 10; i++)
		for (int j = 1; j <= 10; j++)
			minn[i][j] = 1e9;
	cin >> sy >> sx >> fy >> fx;
	dfs(sy, sx, 0);
	cout << sum;
	return 0;
}
