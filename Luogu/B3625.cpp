#include <bits/stdc++.h>
using namespace std;

char temp;
int n, m, h, t, a[110][110], b[110][110];


int mx[4] = {1, -1, 0, 0}, my[4] = {0, 0, 1, -1};
struct node {
	int x, y, s;
} q[10020];
bool mapp[110][110];

int main() {
	memset(a, -1, sizeof(a));
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			scanf(" c%", &temp);
			if (temp == '.')
				mapp[i][j] = true;
		}
	}
	q[t].x = 1, q[t].y = 1, q[t].s = 0, t++;
	a[1][1] = 0, b[1][1]++;
	while (h < t) {
		int x = q[h].x, y = q[h].y, s = q[h].s;
		for (int i = 0; i < 4; i++) {
			int nx = x + mx[i], ny = y + my[i];
			if (nx < 1 || nx > n || ny < 1 || ny > m)
				continue;
			if (b[nx][ny] == 1 || !mapp[nx][ny])
				continue;
			q[t].x = nx, q[t].y = ny, q[t].s = s + 1;
			cout << nx << ' ' << ny << ' ' << i << endl;
			t++, b[nx][ny]++;
			a[nx][ny] = s + 1;
		}
		h++;
	}
	if (a[n][m] != -1)
		cout << "Yes";
	else
		cout << "No";
	return 0;
}
