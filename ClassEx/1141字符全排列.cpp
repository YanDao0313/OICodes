#include <bits/stdc++.h>
using namespace std;

int n, book[10], b[10];
char c, a[10];

void dfs(int k) {
	if (k > n) {
		for (int i = 1; i <= n; i++)
			cout << a[b[i]];
		cout << endl;
		return;
	}
	for (int i = 1; i <= n; i++) {
		if (book[i] == 0) {
			book[i] = 1, b[k] = i;
			dfs(k + 1);
			book[i] = 0, b[k] = 0;
		}
	}
}

int main() {
	freopen("1141.in", "r", stdin);
	freopen("1141.out", "w", stdout);
	while (cin >> c) {
		n++;
		a[n] = c;
	}
	dfs(1);
	return 0;
}
