#include <bits/stdc++.h>
using namespace std;

int n, h[100010], ans[100010] = {0};

int main() {
	cin >> n;
	for (int i = 1; i <= n; i++)
		scanf("%d", h + i);
	for (int i = n - 1; i > 0; i--) {
		int j = i + 1;
		while (h[i] >= h[j] && h[j] > 0)
			j = ans[j];
		ans[i] = j;
	}
	for (int i = 1; i <= n; i++)
		cout << ans[i] << endl;
	return 0;
}
