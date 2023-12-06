#include <bits/stdc++.h>
using namespace std;

int n;
char t;
stack<char> c;

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> t;
		if (t == '(')
			c.push(t);
		else {
			if (c.empty()) {
				cout << "NO";
				return 0;
			}
			c.pop();
		}
	}
	if (c.empty())
		cout << "YES";
	else
		cout << "NO";
	return 0;
}
