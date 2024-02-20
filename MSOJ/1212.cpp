#include <bits/stdc++.h>
using namespace std;

struct node {
	int x, y;
};

struct edge {
	int dis, count;
} f[210][210];

int n, m, k, r, s, a[210][210], b[210][210];

int ss[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
queue<node> q;

int main() {
	cin >> n >> m >> k;
	for (int i = 1; i <= k; i++) {
		cin >> r >> s;
		a[r][s] = 1;
	}
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
			f[i][j].dis = 0x7f7f7f7f;
	cin >> r >> s;
	f[r][s].dis = 0, f[r][s].count = 1, b[r][s] = 1;
	q.push((node) {
		r, s
	});
	cin >> r >> s;
	while (!q.empty()) {
		node now = q.front();
		q.pop();
		for (int i = 0; i <= 4; i ++) {
			int tx = now.x + ss[i][0];
			int ty = now.y + ss[i][1];
			if (tx < 1 || ty < 1 || tx > n || ty > m || a[tx][ty])
				continue;
			if (f[now.x][now.y].dis + 1 < f[tx][ty].dis) {
				f[tx][ty].count = f[now.x][now.y].count;
				f[tx][ty].dis = f[now.x][now.y].dis + 1;
			} else if (f[now.x][now.y].dis + 1 == f[tx][ty].dis)
				f[tx][ty].count += f[now.x][now.y].count;
			if (!b[tx][ty]) {
				q.push((node) {
					tx, ty
				});
				b[tx][ty] = 1;
			}
		}
	}
	if (f[r][s].dis < 0x7f7f7f7f)
		cout << f[r][s].dis << endl << f[r][s].count << endl;
	else
		cout << "No Solution!" << endl;
	return 0;
}