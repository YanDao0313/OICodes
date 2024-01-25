#include <bits/stdc++.h>
using namespace std;

struct node {
	int to, next;
} a[120];
int pre[120], k, n, x, y, ans;
bool f[120];

void dfs(int x) {
	for (int i = pre[x]; i; i = a[i].next) {
		int to = a[i].to;
		if (!f[to]) {
			f[to] = true;
			dfs(to);
		}
	}
}

void add(int x, int y) {
	a[++k] = {y, pre[x]};
	pre[x] = k;
}

int main() {
	cin >> n;
	for (int i = 1; i < n; i++) {
		cin >> y >> x;
		add(x, y);
	}
	bool pd = true;
	for (int i = 1; i <= n; i++) {
		memset(f, false, sizeof(f));
		dfs(i);
		pd = true;
		for (int j = 1; j <= n; j++) {
			if (i != j && !f[j]) {
				pd = false;
				break;
			}
		}
		if (pd) {
			cout << i;
			return 0;
		}
	}
	cout << -1;
	return 0;
}
