#include <bits/stdc++.h>
using namespace std;

int n, sum, a[10086];

int main() {
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++)
			if (a[j] > a[i])
				sum++;
	}
	cout << sum;
	return 0;
}
