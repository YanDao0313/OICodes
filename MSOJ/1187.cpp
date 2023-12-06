#include <bits/stdc++.h>
using namespace std;

int a[1024], s[1024], top;
char t;

bool check() {
	int l = top;
	top = 0;
	for (int i = 1; i <= l; i++) {
		if (s[i] > 0) {
			if (top > 0 && a[top] < s[i])
				return 0;
			a[++top] = s[i];
		} else {
			if (top < 1)
				return 0;
			if (a[top] * -1 != s[i])
				return 0;
			else
				top--;
		}
	}
	if (top == 0)
		return 1;
	else
		return 0;
}

int main() {
	//freopen("1187.in","r",stdin);
	//freopen("1187.out","w",stdout);
	while (scanf("%c", &t) != EOF) {
		if (t == '\n')
			break;
		if (t == '{')
			s[++top] = 3;
		if (t == '}')
			s[++top] = -3;
		if (t == '[')
			s[++top] = 2;
		if (t == ']')
			s[++top] = -2;
		if (t == '(')
			s[++top] = 1;
		if (t == ')')
			s[++top] = -1;
	}
	if (check())
		cout << "YES";
	else
		cout << "NO";
	return 0;
}
