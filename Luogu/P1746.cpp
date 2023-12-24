#include <bits/stdc++.h>
using namespace std;
const int maxn = 1024;
int n, qx, qy, fx, fy, h, t, a[maxn][maxn], b[maxn][maxn];

struct node {
	int x, y, s;
} q[maxn * maxn];

int mx[4] = {-1, 1, 0, 0}, my[4] = {0, 0, 1, -1};
int main() {
	cin >> n;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			scanf("%1d", &a[i][j]);
	cin >> qx >> qy >> fx >> fy;
	q[t].x = qx, q[t].y = qy, q[t].s = 0, t++;
	b[qx][qy] = 1;
	while (h < t) {
		int x = q[h].x, y = q[h].y, s = q[h].s;
		for (int i = 0; i < 4; i++) {
			int nx = x + mx[i], ny = y + my[i];
			if (nx < 1 || nx > n || ny < 1 || ny > n)
				continue;
			if (a[nx][ny] == 1 || b[nx][ny] == 1)
				continue;
			if (nx == fx && ny == fy) {
				cout << s + 1;
				return 0;
			}
			q[t].x = nx, q[t].y = ny, q[t].s = s + 1;
			t++, b[nx][ny]++;
		}
		h++;
	}
	return 0;
}
