#include <bits/stdc++.h>
using namespace std;

int n, a[100010];

/*void qsort(int n[], int l, int r) {
	int i = l, j = r, flag = a[(l + r) / 2];
	do {
		while (n[i] < flag)
			i++;
		while (n[j] > flag)
			j--;
		if (i <= j)
			swap(n[i++], n[j--]);
	} while (i <= j);
	if (i < j)
		qsort(n, l, j);
	if (i < r)
		qsort(n, i, r);
}*/

int main() {
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	//qsort(a, 0, n - 1);
	sort(a, a + n);
	for (int i = 0; i < n; i++)
		cout << a[i] << ' ';
	return 0;
}
