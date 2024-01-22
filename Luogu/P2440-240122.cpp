#include <bits/stdc++.h>
using namespace std;
const int maxn = 100000010;

int n, k, a[maxn];
long long r, l, mid;

bool check(long long x) {
	long long ans = 0;
	for (int i = 0; i < n; i++)
		ans += a[i] / x;
	return ans >= k;
}

int main() {
	cin >> n >> k;
	for (int i = 0; i < n; i++)
		scanf("%d", a + i);
	//sort(a, a + n - 1);
	l = 0, r = 100000001;
	while (l + 1 < r) {
		mid = (l + r) / 2;
		if (check(mid))
			l = mid;
		else
			r = mid;
	}
	cout << l;
	return 0;
}
