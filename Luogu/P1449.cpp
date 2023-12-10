#include <bits/stdc++.h>
using namespace std;

stack<int> num;
int a, b, t;
char c;

int main() {
	while (true) {
		c = getchar();
		if (c == '@')
			break;
		if (c == '.') {
			num.push(t);
			t = 0;
			continue;
		}
		if (c >= '0' && c <= '9') {
			t = t * 10 + (c - '0');
		}
		if (c == '+' || c == '-' || c == '*' || c == '/') {
			a = num.top();
			num.pop();
			b = num.top();
			num.pop();
			if (c == '+')
				num.push(a + b);
			if (c == '-')
				num.push(b - a);
			if (c == '*')
				num.push(a * b);
			if (c == '/')
				num.push(b / a);
		}
	}
	cout << num.top();
	return 0;
}
