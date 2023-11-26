#include <bits/stdc++.h>
using namespace std;

int n, k, cnt, h[100100], w[100100];

bool check(int x) {
	cnt = 0;
	for (int i = 1; i <= n; i++)
		cnt += ((h[i] / x) * (w[i] / x));
	if (cnt >= k)
		return 1;
	else
		return 0;
}

int main() {
	cin >> n >> k;
	for (int i = 1; i <= n; i++)
		cin >> h[i] >> w[i];
	int L = 1, R = 100010, mid;
	while (L <= R) {
		int mid = (L + R) >> 1;
		if (check(mid))
			L = mid + 1;
		else
			R = mid - 1;
	}
	cout << R;
	return 0;
}
