#include <bits/stdc++.h>
using namespace std;

int n, a[1060][1060];

void m(int x, int y, int n) {
	if (n == 0)
		a[x][y] = 1;
	else {
		m(x + (1 << n - 1), y, n - 1);
		m(x, y + (1 << n - 1), n - 1);
		m(x + (1 << n - 1), y + (1 << n - 1), n - 1);
	}
}

int main() {
	cin >> n;
	m(0, 0, n);
	for (int i = 0; i < 1 << n; i++) {
		for (int j = 0; j < 1 << n; j++)
			printf("%d%c", a[i][j], j == (1 << n) - 1 ? '\n' : ' ');
	}
	return 0;
}
