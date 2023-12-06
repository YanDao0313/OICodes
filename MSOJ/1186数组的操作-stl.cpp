#include <bits/stdc++.h>
using namespace std;

int n, m, t, l;
stack<int> s;

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		scanf("%d", &t);
		s.push(t);
	}
	cin >> m;
	for (int i = 0; i < m; i++) {
		scanf("%d", &t);
		if (t == 1) {
			scanf("%d", &t);
			s.push(t);
		} else {
			if (s.empty()) {
				cout << "NO";
				return 0;
			}
			s.pop();
		}
	}
	if (s.empty())
		cout << '0';
	else {
		l = s.size();
		for (int i = 0; i < l; i++) {
			t = s.top();
			s.pop();
			cout << t << ' ';
		}
	}
	return 0;
}
