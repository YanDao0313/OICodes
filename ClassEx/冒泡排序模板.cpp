#include <bits/stdc++.h>
using namespace std;

int n, a[10086];
bool flg = true;
//本例中由小到大排序

int main() {
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 0; i < n - 1; i++) {
		flg = true;
		for (int j = 0; j < n - i - 1; j++)
			if (a[j] > a[j + 1]) {
				swap(a[j], a[j + 1]);
				flg = false;
			}
		if (flg)
			break;
	}
	for (int i = 0; i < n; i++)
		cout << a[i] << ' ';
	return 0;
}