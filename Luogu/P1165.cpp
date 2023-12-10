#include <bits/stdc++.h>
using namespace std;

int s[200010], top = 0;
int n, q, t;

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		scanf("%d", &q);
		if (q == 0) {
			scanf("%d", &t);
			top++;
			s[top] = max(s[top - 1], t);
		} else if (q == 1) {
			if (top != 0)
				top--;
		} else if (q == 2) {
			cout << s[top] << endl;
		}
	}
	return 0;
}