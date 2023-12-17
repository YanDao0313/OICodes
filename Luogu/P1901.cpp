#include <bits/stdc++.h>
using namespace std;

stack<int> s;
int n, ans, h[1000010], v[1000010], f[1000010];

int main() {
	cin >> n;
	for (int i = 1; i <= n; i++)
		scanf("%d %d", h + i, v + i);
	for (int i = 1; i <= n; i++) {
		while (!s.empty() && h[i] > h[s.top()]) {
			f[i] += v[s.top()];
			s.pop();
		}
		if (!s.empty())
			f[s.top()] += v[i];
		s.push(i);
	}
	for (int i = 1; i <= n; i++)
		ans = max(ans, f[i]);
	cout << ans;
	return 0;
}
