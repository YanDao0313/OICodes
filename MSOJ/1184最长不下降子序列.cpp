#include <bits/stdc++.h>
using namespace std;

int n, t, top, s[100020];

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> t;
		if (top == 0)
			s[++top] = t;
		else {
			if (t >= s[top])
				s[++top] = t;
			else
				s[upper_bound(s + 1, s + top + 1, t) - s] = t;
		}
	}
	cout << top;
	return 0;
}
