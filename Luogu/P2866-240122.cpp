#include <bits/stdc++.h>
using namespace std;

stack<int> s;
int n, t;
long long ans;

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		//scanf("%d", a + i);
		scanf("%d", &t);
		while (!s.empty() && t >= s.top())
			s.pop();
		ans += s.size();
		s.push(t);
	}
	cout << ans;
	return 0;
}
