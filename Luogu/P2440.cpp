#include <bits/stdc++.h>
using namespace std;

long long n, k, l[100086];

bool check(long long x) {
	long long ans = 0;
	for (int i = 1; i <= n; i++)
		ans += l[i] / x;
	return ans >= k;
}

int main() {
	cin >> n >> k;
	for (int i = 1; i <= n; i++)
		scanf("%d", &l[i]);
	long long l = 0, r = 100000001;
	while (l + 1 < r) {
		long long mid = (l + r) / 2;
		if (check(mid))
			l = mid;
		else
			r = mid;
	}
	cout << l;
	return 0;
}
