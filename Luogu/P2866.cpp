#include <bits/stdc++.h>
using namespace std;

stack<int> s;
int n, t;
long long ans;

int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> t;
		while (!s.empty() && t >= s.top())
			s.pop();
		ans += s.size();
		s.push(t);
	}
	cout << ans;
	return 0;
}
