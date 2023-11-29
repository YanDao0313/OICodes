#include <bits/stdc++.h>
using namespace std;

const int maxn = 5 * 1e6;
int n, m, i, j, t, cnt = 0, a[maxn];
bool b[maxn];

int main() {
	scanf("%d %d", &n, &m);
	for (i = 1; i <= n; i++)
		scanf("%d", &a[i]);
	for (i = 1; i <= m; i++) {
		scanf("%d", &t);
		b[t] = 1;
	}
	for (i = 1; i <= n; i++) {
		if (b[a[i]]) {
			a[i] = 0;
			if (a[i - 1] != 0)
				cnt++;
			j = i;
		}
	}
	if (a[j + 1] != 0)
		cnt++;
	cout << cnt;
	return 0;
}
