#include <bits/stdc++.h>
using namespace std;

int n, b, h[20086], cnt, s;

bool cmp(int a, int b) {
	return a > b;
}

int main() {
	cin >> n >> b;
	for (int i = 0; i < n; i++)
		cin >> h[i];
	sort(h, h + n, cmp);
	while (s < b) {
		s += h[cnt];
		cnt++;
	}
	cout << cnt;
	return 0;
}
