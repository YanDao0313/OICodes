#include <bits/stdc++.h>
using namespace std;

int top, l;
char c[1024];

int main() {
	scanf("%s", c);
	l = strlen(c);
	for (int i = 0; i < l; i++) {
		if (c[i] == '(')
			top++;
		else {
			if (top < 1) {
				cout << "NO";
				return 0;
			}
			top--;
		}
	}
	cout << "YES";
	return 0;
}
