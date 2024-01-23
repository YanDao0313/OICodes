#include <bits/stdc++.h>
using namespace std;

int n, cnt, cntt, a[50], b1[50], b2[50], b3[50];

void dfs(int k) { //k-行数
	if (k > n) {
		if (cntt < 3) {
			for (int i = 1; i <= n; i++)
				cout << a[i] << ' ';
			cout << endl;
			cntt++;
		}
		cnt++;
		return;
	}
	for (int i = 1; i <= n; i++) { //i-列数
		if (b1[i] == 0 && b2[k + i] == 0 && b3[k - i + n] == 0) {
			b1[i] = 1, b2[k + i] = 1, b3[k - i + n] = 1;
			a[k] = i;
			dfs(k + 1);
			b1[i] = 0, b2[k + i] = 0, b3[k - i + n] = 0;
		}
	}
}

int main() {
	cin >> n;
	dfs(1);
	cout << cnt;
	return 0;
}
