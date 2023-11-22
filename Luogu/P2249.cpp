#include <bits/stdc++.h>
#define MAXN 1000010
using namespace std;

int n, m, t, a[MAXN];

int find(int num) {
	int l = 1, r = n;
	while (l <= r) {
		int mid = (l + r) / 2;
		if (a[mid] >= num)
			r = mid - 1;
		else
			l = mid + 1;
	}
	if (a[l] == num)
		return l;
	else
		return -1;
}

int main() {
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	for (int i = 0; i < m; i++) {
		cin >> t;
		cout << find(t) << ' ';
	}
	return 0;
}
