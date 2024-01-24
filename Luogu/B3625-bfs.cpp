#include <bits/stdc++.h>
using namespace std;

struct node {
	int y, x;
} now;
queue<node> q;

int n, m, a[110][110], b[110][110];
char c;
bool flg = false;

int ss[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};

void bfs() {
	while (!q.empty()) {
		now = q.front();
		q.pop();
		if (now.y == n && now.x == m) {
			flg = true;
			return;
		}
		for (int i = 0; i < 4; i++) {
			int tx = now.x + ss[i][0];
			int ty = now.y + ss[i][1];
			if (ty < 1 || tx < 1 || ty > n || tx > m)
				continue;
			if (b[ty][tx] == 0) {
				q.push((node) {
					ty, tx
				});
				b[ty][tx] = 1;
			}
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
	q.push((node) {
		1, 1
	});
	bfs();
	if (flg)
		cout << "Yes";
	else
		cout << "No";
	return 0;
}
