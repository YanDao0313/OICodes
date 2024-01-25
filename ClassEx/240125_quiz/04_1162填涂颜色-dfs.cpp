#include <bits/stdc++.h>
using namespace std;

int n, a[40][40], b[40][40];

int ss[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};

void dfs(int x, int y) {
	if (x < 0 || y < 0 || x > n || y > n || a[x][y] != 0)
		return;
	a[x][y] = 1;
	for (int i = 0; i < 4; i++)
		dfs(x + ss[i][0], y + ss[i][1]);
}

int main() {
	//freopen("04.in", "r", stdin);
	cin >> n;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++) {
			cin >> b[i][j];
			if (!b[i][j])
				a[i][j] = 0;
			else
				a[i][j] = 2;
		}
	dfs(0, 0);
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (a[i][j] == 0)
				cout << "2 ";
			else
				cout << b[i][j] << ' ';
		}
		cout << endl;
	}
	return 0;
}
