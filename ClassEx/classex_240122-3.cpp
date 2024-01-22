#include <bits/stdc++.h>
using namespace std;

int m, n;

int gys(int x, int y) {
	if (x % y == 0)
		return y;
	return gys(y, x % y);
}

int main() {
	cin >> m >> n;
	cout << gys(m, n);
	return 0;
}
