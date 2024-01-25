#include <bits/stdc++.h>
using namespace std;

int n, m, h, t, ans;

int mx[4] = {-1, 1, 0, 0}, my[4] = {0, 0, 1, -1};

struct node {
	int x, y;
} q[10020]; //No STL, but bfs, try it.
bool mapp[120][120], b[120][120];

int main() {
	//freopen("01.in", "r", stdin);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			scanf("%1d", &t);
			if (t != 0)
				mapp[i][j] = true;
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (!b[i][j] && mapp[i][j]) {
				ans++;
				h = 0, t = 1;
				q[h].x = i, q[h].y = j;
				while (h < t) {
					int x = q[h].x, y = q[h].y;
					for (int i = 0; i < 4; i++) {
						int nx = x + mx[i], ny = y + my[i];
						if (mapp[nx][ny] && (!b[nx][ny])) {
							q[t].x = nx, q[t].y = ny;
							t++;
							b[nx][ny] = 1;
						}
					}
					h++;
				}
			}
		}
	}
	cout << ans;
	return 0;
}
