#include <bits/stdc++.h>
using namespace std;

int n, t, a[3000];

int main() {
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	for (int i = 1; i <= n - 1; i++) {
		t = i;
		for (int j = i + 1; j <= n; j++) {
			if (a[j] < a[t])
				t = j;
		}
		if (t != i)
			swap(a[i], a[t]);
	}
	for (int i = 1; i <= n; i++)
		cout << a[i] << ' ';
	return 0;
}
