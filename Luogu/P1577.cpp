#include <bits/stdc++.h>
using namespace std;

int n, k, l[10086];
double t;

bool check(double x) {
	int cnt = 0;
	for (int i = 1; i <= n; i++)
		cnt += l[i] / x;
	if (cnt >= k)
		return true;
	else
		return false;
}

int main() {
	cin >> n >> k;
	for (int i = 1; i <= n; i++) {
		cin >> t;
		l[i] = t * 100;
	}
	int L = 1, R = 100000000;
	while (L <= R) {
		int mid = (L + R) >> 1;
		if (mid == 0) {
			cout << "0.00";
			return 0;
		}
		if (check(mid))
			L = mid + 1;
		else
			R = mid - 1;
	}
	printf("%.2lf", R / 100.0);
	return 0;
}
