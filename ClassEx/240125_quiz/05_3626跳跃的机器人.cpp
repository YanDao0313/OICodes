#include <bits/stdc++.h>
using namespace std;

struct node {
	int x, s;
} now;
queue<node> q;
int n, b[1000001];

void qpush(node x) {
	if (!(x.x < 1 || x.x > n || b[x.x])) {
		q.push(x);
		b[x.x] = 1;
	}
}

void bfs() {
	while (!q.empty()) {
		now = q.front();
		q.pop();
		if (now.x == n)
			return;
		node t1 = (node) {
			now.x + 1, now.s + 1
		}, t2 = (node) {
			now.x - 1, now.s + 1
		}, t3 = (node) {
			now.x * 2, now.s + 1
		};
		qpush(t1), qpush(t2), qpush(t3);
	}
}

int main() {
	cin >> n;
	q.push((node) {
		1, 0
	});
	bfs();
	cout << now.s;
	return 0;
}
