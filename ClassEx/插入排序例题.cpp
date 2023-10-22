#include <bits/stdc++.h>
using namespace std;

int n, a[3000];

int main() {
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	for (int i = 2; i <= n; i++) {
		int temp = a[i], j;
		for (j = i - 1; j >= 1; j--) {
			if (a[j] > temp)
				a[j + 1] = a[j];
			else
				break;
		}
		a[j + 1] = temp;
	}
	for (int i = 1; i <= n; i++)
		cout << a[i] << ' ';
	return 0;
}