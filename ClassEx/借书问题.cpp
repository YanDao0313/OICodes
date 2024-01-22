#include <bits/stdc++.h>
using namespace std;

int n, cnt, s[20][20], b[20], bj[20];

void dfs(int k) {
	if (k > n) {
		for (int i = 1; i <= n; i++)
			cout << b[i] << ' ';
		cout << endl;
		cnt++;
		return;
	}
	for (int i = 1; i <= n; i++) {
		if (s[k][i] != 1 || bj[i] != 0)
			continue;
		bj[i] = 1, b[k] = i;
		dfs(k + 1);
		bj[i] = 0, b[k] = 0;
	}
}

int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++)
			cin >> s[i][j];
	}
	dfs(1);
	return 0;
}
