#include <bits/stdc++.h>
using namespace std;

int n, m, t[22];
double p[110];

void check(int a) {
	sort(t, t + m);
	for (int i = 1; i < m - 1; i++)
		p[a] += t[i];
	p[a] /= (m - 2.0);
}

int main() {
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> t[j];
		}
		check(i);
	}
	sort(p, p + n);
	printf("%.2lf", p[n - 1]);
	return 0;
}
