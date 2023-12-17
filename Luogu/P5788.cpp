#include <bits/stdc++.h>
using namespace std;

stack<int> a, b;

int n, q[3000020], ans[3000020] = {0};

int main() {
	cin >> n;
	for (int i = 1; i <= n; i++)
		scanf("%d", &q[i]);
	a.push(q[1]);
	b.push(1);
	for (int i = 2; i <= n; i++) {
		while (!a.empty()) {
			if (q[i] > a.top()) {
				ans[b.top()] = i;
				a.pop();
				b.pop();
			} else
				break;
		}
		a.push(q[i]);
		b.push(i);
	}
	for (int i = 1; i <= n; i++)
		printf("%d ", ans[i]);
	return 0;
}
