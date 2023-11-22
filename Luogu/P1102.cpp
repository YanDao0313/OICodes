#include <bits/stdc++.h>
using namespace std;

long long a[200001];
long long n, c, ans;

int main() {
	cin >> n >> c;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	sort(a + 1, a + n + 1);
	for (int i = 1; i <= n; i++) {
		ans += ((upper_bound(a + 1, a + n + 1, a[i] + c) - a) - (lower_bound(a + 1, a + n + 1, a[i] + c) - a));
	}
	cout << ans;
	return 0;
}