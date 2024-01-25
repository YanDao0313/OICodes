#include <bits/stdc++.h>
using namespace std;

struct node {
	int fl, d;
} now;
queue<node> q;//I prefer to use STL in the end.
int n, a, b, k[300], bj[300];

void bfs() {
	while (!q.empty()) {
		now = q.front();
		q.pop();
		if (now.fl == b)
			break;
		for (int i = -1; i <= 1; i += 2) {
			int t = now.fl + k[now.fl] * i;
			if (t >= 1 && t <= n && bj[t] == 0) {
				q.push((node) {
					t, now.d + 1
				});
				bj[t] = 1;
			}
		}
	}
}

int main() {
	//freopen("02.in", "r", stdin);
	cin >> n >> a >> b;
	for (int i = 1; i <= n; i++)
		cin >> k[i];
	q.push((node) {
		a, 0
	}), bj[a] = 1;
	bfs();
	if (now.fl == b)
		cout << now.d;
	else
		cout << -1;
	return 0;
}
