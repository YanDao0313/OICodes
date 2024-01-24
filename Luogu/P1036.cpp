#include <bits/stdc++.h>
using namespace std;

int n, k, sum, cnt, a[30], b[30];

bool ss(int x) {
	if (x == 1 || x == 0)
		return false;
	for (int i = 2; i * i <= x; i++) {
		if (x % i == 0)
			return false;
	}
	return true;
}

void dfs(int x, int s) {
	for (int i = s; i <= n; i++) {
		if (b[i] == 0) {
			b[i] = 1;
			sum += a[i];
			if (x == k) {
				if (ss(sum))
					cnt++;
			} else
				dfs(x + 1, i + 1);
			sum -= a[i];
			b[i] = 0;
		}
	}
}

int main() {
	cin >> n >> k;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	dfs(1, 1);
	cout << cnt;
	return 0;
}
