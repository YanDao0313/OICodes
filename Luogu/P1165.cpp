#include <bits/stdc++.h>
using namespace std;

int s[200010], a[200010], top = 0;
int n, q;

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 1; j <= top; j++) {
			a[j] = s[j];
		}
		scanf("%d", &q);
		if (q == 0) {
			scanf("%d", &s[++top]);
		} else if (q == 1) {
			s[top] = 0;
			top--;
		} else if (q == 2) {
			sort(a + 1, a + top + 1);
			//cout << endl;
			cout << a[top] << endl;
			//cout << endl;
		}
	}
	return 0;
}