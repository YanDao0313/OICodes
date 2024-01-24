#include <bits/stdc++.h>
using namespace std;

int n, m, a[110][110], b[110][110];
char c;
bool flg;

int ss[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};

void dfs(int y, int x) {
	if (y == n && x == m) {
		flg = true;
		return;
	}
	for (int i = 0; i < 4; i++) {
		int tx = x + ss[i][0];
		int ty = y + ss[i][1];
		if (tx < 1 || ty < 1 || tx > m || ty > n || a[ty][tx] == 1)
			continue;
		if (b[ty][tx] == 0) {
			b[ty][tx] = 1;
			dfs(ty, tx);
		}
	}
}

int main() {
	/*freopen("B3625.in","r",stdin);
	freopen("B3625.out","w",stdout);*/
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> c;
			if (c == '.')
				a[i][j] = 0;
			else
				a[i][j] = 1;
		}
	}
	/*for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++)
			cout << a[i][j] << ' ';
		cout << endl;
	}*/
	dfs(1, 1);
	if (flg)
		cout << "Yes";
	else
		cout << "No";
	return 0;
}
