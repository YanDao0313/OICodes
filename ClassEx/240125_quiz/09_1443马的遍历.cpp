#include <bits/stdc++.h>
using namespace std;

struct node {
	int x, y;
};
queue<node> q;
int n, m, sx, sy, ans[500][500];

int ss[8][2] = {{2, 1}, {1, 2}, {-1, 2}, {-2, 1},
	{-2, -1}, {-1, -2}, {1, -2}, {2, -1}
};

void bfs() {
	while (!q.empty()) {
		node now = q.front();
		q.pop();
		for (int i = 0; i < 8; i++) {
			int tx = now.x + ss[i][0];
			int ty = now.y + ss[i][1];
			if (tx < 1 || ty < 1 || tx > n || ty > m)
				continue;
			if (ans[tx][ty] != -1)
				continue;
			ans[tx][ty] = ans[now.x][now.y] + 1;
			q.push((node) {
				tx, ty
			});
		}
	}
}

int main() {
	//freopen("09.in", "r", stdin);
	memset(ans, -1, sizeof(ans));
	cin >> n >> m >> sx >> sy;
	q.push((node) {
		sx, sy
	});
	ans[sx][sy] = 0;
	bfs();
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++)
			printf("%-5d", ans[i][j]);
		cout << endl;
	}
	return 0;
}
