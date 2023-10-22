#include <bits/stdc++.h>
using namespace std;

int n, b[110];
string a[110];

/*struct p {
	int num;
	string id;
	int yr;
} pa[110];

bool cmp (p a, p b) {
	if (a.yr + b.yr >= 120) {
		if (a.yr == b.yr)
			return a.num < b.num;
		else
			a.yr > b.yr;
	} else {
		if (a.yr >= 60 || b.yr >= 60)
			return a.yr > b.yr;
		else
			return a.num < b.num;
	}
}*/

int main() {
	cin >> n;
	/*for (int i = 0; i < n; i++) {
		cin >> pa[i].id >> pa[i].yr;
		pa[i].num = i;
	}
	sort(pa, pa + n, cmp);
	for (int i = 0; i < n; i++)
		printf("%06ld\n", pa[i].id);
	//cout << pa[i].id << endl;*/
	for (int i = 1; i <= n; ++i) {
		cin >> a[i] >> b[i];
	}
	for (int i = 150; i >= 60; --i) {
		for (int j = 1; j <= n; ++j) {
			if (b[j] == i) {
				cout << a[j] << endl;
			}
		}
	}
	for (int i = 1; i <= n; ++i) {
		if (b[i] < 60) {
			cout << a[i] << endl;
		}
	}
	return 0;
}
