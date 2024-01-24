#include <bits/stdc++.h>
using namespace std;

struct node {
	int fl, d;
} now;
queue<node> q;

int n, a, b, k[1024], bj[1024];

void bfs() {
	while (!q.empty()) {
		now = q.front();
		q.pop();
		if (now.fl == b)
			break;
		for (int i = -1; i < 2; i += 2) {
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
	cin >> n >> a >> b;
	for (int i = 1; i <= n; i++)
		scanf("%d", k + i);
	q.push((node) {
		a, 0
	}), bj[a] = 1;
	bfs();
	if (now.fl == b)
		cout << now.d;
	else
		cout << "-1";
	return 0;
}
