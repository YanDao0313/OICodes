#include <bits/stdc++.h>
using namespace std;
const int maxn = 1000 + 10;

int a[maxn][maxn], n, m, ans[maxn * 100], cnt;
int b[maxn][maxn];
int book[maxn][maxn];

int movx[4] = {-1, 1, 0, 0};
int movy[4] = {0, 0, -1, 1};
struct node {
	int x, y;
}; //None STL, again
node q[maxn * maxn];
int head, tail;
int qx, qy;
void bfs() {
	head = 0;
	tail = 0;
	cnt++;
	q[tail].x = qx;
	q[tail].y = qy;
	b[qx][qy] = cnt;
	book[qx][qy] = 1;
	tail++;
	while (head < tail) {
		int x = q[head].x;
		int y = q[head].y;
		for (int i = 0; i < 4; i++) {
			int nx = x + movx[i];
			int ny = y + movy[i];
			if (nx < 1 || ny < 1 || nx > n || ny > n || book[nx][ny] == 1)
				continue;
			if (a[x][y] + a[nx][ny] != 1)
				continue;
			q[tail].x = nx;
			q[tail].y = ny;
			b[nx][ny] = cnt;
			book[nx][ny] = 1;
			tail++;
		}
		head++;
	}
	ans[cnt] = tail;
}
int main() {
	//freopen("08.in", "r", stdin);
	scanf("%d%d ", &n, &m);
	char ch;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			scanf(" %c", &ch);
			a[i][j] = ch - '0';
		}
	}

	for (int i = 1; i <= m; i++) {
		scanf("%d%d", &qx, &qy);
		if (b[qx][qy] == 0)
			bfs();
		cout << ans[b[qx][qy]] << endl;
	}
}