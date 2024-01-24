#include <bits/stdc++.h>
using namespace std;

int n, k = 1, a[10];

int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		a[i] = n - i + 1;
		k *= i;
	}
	for (int i = 1; i <= k; i++) {
		next_permutation(a + 1, a + n + 1);
		for (int j = 1; j <= n; j++)
			printf("%5d", a[j]);
		cout << endl;
	}
	return 0;
}