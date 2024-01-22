#include <bits/stdc++.h>
using namespace std;

int n, f[1024];

int l(int x) {
	int ans = 1;
	if (f[x] != -1)
		return f[x];
	for (int i = 1; i <= x / 2; i++)
		ans += l(i);
	f[x] = ans;
	return f[x];
}

int main() {
	memset(f, -1, sizeof(f));
	f[1] = 1;
	cin >> n;
	cout << l(n);
	return 0;
}
