#include <bits/stdc++.h>
using namespace std;

int a, b;
char c[10086];

int main() {
	cin >> c;
	for (int i = 0; i < strlen(c); i++) {
		if (c[i] == ')')
			b++;
		if (b > a) {
			cout << "NO";
			return 0;
		}
		if (c[i] == '(')
			a++;
	}
	if (a != b)
		cout << "NO";
	else
		cout << "YES";
	return 0;
}
