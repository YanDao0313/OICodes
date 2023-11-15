#include <bits/stdc++.h>
using namespace std;

int a[100], i = 0;
long long s = 0;

int main() {
	while (cin >> a[i++]);
	for (int j = 0; j < i; j++) {
		s += a[j];
	}
	s *= pow(2, i - 2);
	cout << s;
	return 0;
}