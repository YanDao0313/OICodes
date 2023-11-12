#include <bits/stdc++.h>
using namespace std;

int n, s, a, b, tx, ty, ap[110], ans;

int main() {
	cin >> n >> s >> a >> b;
	for (int i = 0; i < n; i++) {
		cin >> tx >> ty;
		if (a + b >= tx) {
			ap[ty]++;
		}
	}
	for (int i = 0; i <= 100; i++) {
		while (ap[i]) {
			s -= i;
			ans++;
			ap[i]--;
			if (s < 0) {
				ans--;
				break;
			}
		}
	}
	cout << ans;
	return 0;
}
