#include <bits/stdc++.h>
using namespace std;

int n, m, a[30], book[10], b[10];

void dfs(int step, int k) {
	if (step > m) {
		for (int i = 1; i <= m; i++)
			cout << b[i] << ' ';
		cout << endl;
		return;
	}
	for (int i = k + 1; i <= n; i++) {
		if (book[i] == 0) {
			book[i] = 1, b[step] = i;
			dfs(step + 1, i);
			book[i] = 0;
		}
	}
	return;
}

int main() {
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		a[i] = i;
	dfs(1, 0);
	return 0;
}
