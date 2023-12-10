#include <bits/stdc++.h>
using namespace std;

stack<int> s;
int q, n, t, a[100010];
bool flg = true;

int main() {
	cin >> q;
	for (int i = 0; i < q; i++) {
		int sum = 0;
		cin >> n;
		for (int j = 0; j < n; j++) {
			scanf("%d", &t);
			s.push(t);
		}
		for (int j = 0; j < n; j++)
			scanf("%d", &a[j]);
		for (int j = 0; j < n; j++) {
			if (s.top() == a[sum]) {
				s.pop();
				sum++;
				if (s.empty())
					break;
			}
		}
		if (s.empty())
			cout << "Yes";
		else
			cout << "No";
		while (!s.empty())
			s.pop();
	}
	return 0;
}
