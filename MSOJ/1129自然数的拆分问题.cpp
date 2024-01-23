#include <bits/stdc++.h>
using namespace std;

int n, a[10086] = {1};
void print(int t) {
	for (int i = 1; i < t; i++)
		cout << a[i] << '+';
	cout << a[t] << endl;
}
void dfs(int s, int t) {
	for (int i = a[t - 1]; i <= s; i++) {
		if (i < n) {
			a[t] = i, s -= i;
			if (s == 0)
				print(t);
			else
				dfs(s, t + 1);
			s += i;
		}
	}
}

int main() {
	cin >> n;
	dfs(n, 1);
	return 0;
}
