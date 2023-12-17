#include <bits/stdc++.h>
using namespace std;

stack<int> s;
int n, ans, a[1000010];

int main() {
	cin >> n;
	for (int i = 1; i <= n; i++)
		scanf("%d", a + i);
	a[++n] = 1e9;
	for (int i = 1; i <= n; i++) {
		while ((!s.empty()) && a[i] >= s.top()) {
			ans += i - s.top() - 1;
			s.pop();
		}
		s.push(i);
	}
	cout << ans;
	return 0;
}
