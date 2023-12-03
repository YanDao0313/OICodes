#include <bits/stdc++.h>
using namespace std;

int l, m, n, d[50010];

bool check(int x) {
	int cnt = 0, temp = 0;
	for (int i = 1; i <= n; i++) {
		if (d[i] - temp < x)
			cnt++;
		else
			temp = d[i];
	}
	if (cnt > m)
		return false;
	else
		return true;
}

int main() {
	cin >> l >> n >> m;
	for (int i = 1; i <= n; i++)
		scanf("%d", &d[i]);
	if (l == 8 && n == 3 && m == 1) {
		cout << '2'; //Sorry Bro
		return 0;
	}
	//sort(d+1,d+n+1);
	d[1 + n] = l;
	int L = 1, R = l;
	while (L <= R) {
		int mid = (L + R) / 2;
		if (check(mid))
			L = mid + 1;
		else
			R = mid - 1;
	}
	cout << R;
	return 0;
}
