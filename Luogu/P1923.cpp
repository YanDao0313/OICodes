#include <bits/stdc++.h>
using namespace std;

int n, k, a[5000010], ans;

void findk(int a[], int l, int r) {
	if (l == r) {
		ans = a[r];
		return;
	}
	int i = l, j = r, flg = a[(l + r) / 2], t;
	do {
		while (a[i] < flg)
			i++;
		while (a[j] > flg)
			j--;
		if (i <= j) {
			swap(a[i], a[j]);
			i++;
			j--;
		}
	} while (i <= j);
	if (k <= j)
		findk(a, l, j);
	else if (i <= k)
		findk(a, i, r);
	else
		findk(a, j + 1, i - 1);
}

int main() {
	cin >> n >> k;
	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);
	//sort(a, a + n);
	findk(a, 0, n - 1);
	cout << ans;
	return 0;
}
