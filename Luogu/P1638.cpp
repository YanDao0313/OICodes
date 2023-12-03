#include <bits/stdc++.h>
using namespace std;

int n, m, a[1000010], b[2023],  l, r, minn = 1e9;

bool check(int x) {
	int ll = 1, rr = x, cnt = 0;
	for (int i = 1; i <= m; i++)
		b[i] = 0;
	for (int i = ll; i <= rr; i++) {
		if (b[a[i]] == 0)
			cnt++;
		b[a[i]]++;
	}
	if (cnt == m) {
		l = ll;
		r = rr;
		return true;
	}
	while (rr < n) {
		b[a[ll]]--;
		if (b[a[ll]] == 0)
			cnt--;
		ll++;
		rr++;
		if (b[a[rr]] == 0)
			cnt++;
		b[a[rr]]++;
		if (cnt == m) {
			l = ll;
			r = rr;
			return true;
		}
	}
	return false;
}

int main() {
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		scanf("%d", &a[i]);
	int L = m, R = n;
	while (L <= R) {
		int mid = (L + R) >> 1;
		if (check(mid))
			R = mid - 1;
		else
			L = mid + 1;
	}
	cout << l << ' ' << r;
	return 0;
}
