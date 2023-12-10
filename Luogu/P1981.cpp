#include <bits/stdc++.h>
using namespace std;

stack<int> num;
int a, b, t, m = 10000;
char c;

int main() {
	cin >> a;
	a %= m;
	num.push(a);
	while (cin >> c >> b) {
		if (c == '*') {
			a = num.top();
			num.pop();
			num.push(a * b % m);
		} else
			num.push(b);
	}
	a = 0;
	while (!num.empty()) {
		a += num.top();
		a %= m;
		num.pop();
	}
	cout << a;
	return 0;
}
