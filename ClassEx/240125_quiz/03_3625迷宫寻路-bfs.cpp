#include <bits/stdc++.h>
using namespace std;

struct node {
	int y, x;
} now;
queue<node> q;
int n, m, a[120][120], b[120][120];
char c;
bool flg = false;

int ss[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};

void bfs() {
	while (!q.empty()) {
		now = q.front();
		q.pop();
		if (now.x == m && now.y == n) {
			flg = true;
			return;
		}
		for (int i = 0; i < 4; i++) {
			int tx = now.x + ss[i][0];
			int ty = now.y + ss[i][1];
			if (tx < 1 || ty < 1 || tx > m || ty > n)
				continue;
			if (a[ty][tx] == 0 && b[ty][tx] == 0) {
				q.push((node) {
					ty, tx
				});
				b[ty][tx] = 1;
			}
		}
	}
}

int main() {
	//freopen("03.in", "r", stdin);
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
	q.push((node) {
		1, 1
	});
	b[1][1] = 1;
	bfs();
	if (flg)
		cout << "Yes";
	else
		cout << "No";
	return 0;
}
