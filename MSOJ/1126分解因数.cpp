#include <bits/stdc++.h>
using namespace std;

int n, a, cnt;

void dfs(int a, int b) {
	for (int i = a; i <= b; i++) {
		if ((!(b % i)) && (b / i >= i)) {
			cnt++;
			dfs(i, b / i);
		}
		if (b / i < i)
			return;
	}
}

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cnt = 1;
		cin >> a;
		dfs(2, a);
		cout << cnt << endl;
	}
	return 0;
}
