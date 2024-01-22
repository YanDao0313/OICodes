#include <bits/stdc++.h>
using namespace std;
long long a, b, c, p, k, ans = 1;

int main() {
	cin >> b >> p >> k;
	a = b;
	c = p;
	while (p > 0) {
		if (p % 2 != 0)
			ans = ans * b % k;
		b = b * b % k, p /= 2;
	}
	ans %= k;
	cout << a << '^' << c << " mod " << k << '=' << ans;
	return 0;
}