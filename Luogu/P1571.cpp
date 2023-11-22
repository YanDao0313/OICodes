#include <bits/stdc++.h>
#define MAXN 200000010
using namespace std;

int n, m, i, a[MAXN], b[MAXN];

/*bool find(int num) {
	int l = 1, r = n;
	while (l <= r) {
		int mid = (l + r) / 2;
		if (a[mid] >= num)
			r = mid - 1;
		else
			l = mid + 1;
	}
	if (a[l] == num)
		return true;
	else
		return false;
}*/

int main() {
	cin >> n >> m;
	for (i = 1; i <= n; i++)
		cin >> a[i];
	for (i = 1; i <= m; i++)
		cin >> b[i];
	sort(b + 1, b + m + 1);
	for (i = 1; i <= n; i++)
		if (binary_search(b + 1, b + m + 1, a[i]))
			cout << a[i] << ' ';
	return 0;
}
