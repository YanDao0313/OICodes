#include <bits/stdc++.h>
using namespace std;
const int maxn = 500;
int n, m, x, y, h, t, a[maxn][maxn], b[maxn][maxn];

int mx[8] = {-1, -2, -2, -1, 1, 2, 2, 1};
int my[8] = {2, 1, -1, -2, 2, 1, -1, -2};

struct node {
	int x, y, s;
} q[maxn * maxn];

int main() {
	memset(a, -1, sizeof(a));
	cin >> n >> m >> x >> y;
	q[t].x = x, q[t].y = y, q[t].s = 0, t++;
	a[x][y] = 0, b[x][y]++;
	while (h < t) {
		int x = q[h].x, y = q[h].y, s = q[h].s;
		for (int i = 0; i < 8; i++) {
			int nx = x + mx[i], ny = y + my[i];
			if (nx < 1 || nx > n || ny < 1 || ny > m)
				continue;
			if (b[nx][ny] == 1 || (nx == x && ny == y))
				continue;
			q[t].x = nx, q[t].y = ny, q[t].s = s + 1;
			t++, b[nx][ny]++;
			a[nx][ny] = s + 1;
		}
		h++;
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++)
			printf("%-5d", a[i][j]);
		printf("\n");
	}
	return 0;
}
