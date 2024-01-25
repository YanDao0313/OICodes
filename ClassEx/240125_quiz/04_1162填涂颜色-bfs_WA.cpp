//I Failed
//这份bfs全错，但我也确实没思路，所以写了dfs版本
#include <bits/stdc++.h>
using namespace std;

struct node {
	int x, y;
	//bool f;
} now;
queue<node> q;
int n, a[50][50], b[50][50], c[50][50];
bool flg = true;

int ss[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};

void bfs() {
	while (!q.empty()) {
		now = q.front();
		q.pop();
		if (b[now.x][now.y] != 0)
			continue;
		for (int i = 0; i < 4; i++) {
			int tx = now.x + ss[i][0];
			int ty = now.y + ss[i][1];
			if (ty < 1 || tx < 1 || ty > n || tx > n)
				continue;
			if ((!a[tx][ty]) && (!b[tx][ty])) {
				q.push((node) {
					tx, ty
				});
				b[tx][ty] = 1;
			}
		}
	}
}

int main() {
	freopen("04.in", "r", stdin);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> a[i][j];
			c[i][j] = a[i][j];
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (a[i][j] == 0 && b[i][j] == 0) {
				flg = true;
				q.push((node) {
					i, j//, false
				});
				bfs();
				if (flg)
					c[i][j] = 2;
			}
		}
	}
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			b[i][j] = 0;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (a[j][i] == 0 && b[j][i] == 0) {
				flg = true;
				q.push((node) {
					j, i//, false
				});
				bfs();
				if (flg)
					c[j][i] = 2;
			}
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++)
			cout << c[i][j] << ' ';
		cout << endl;
	}
	return 0;
}
