#include <bits/stdc++.h>
using namespace std;

int n, x, y, sum, scr, flg, a[110], b[110];

int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> b[i];
		if (a[i] == 0)
			continue;
		sum += 100 / a[i] * b[i];
	}
	cin >> scr;
	if (sum >= scr)
		cout << "Already Au.";
	else {
		for (int i = 1; i <= n; i++) {
			if (a[i] == b[i])
				cout << "NaN\n";
			else {
				for (int j = 1; j <= a[i] - b[i]; j++) {
					if (sum + 100 / a[i]*j >= scr) {
						cout << j << endl;
						flg = 1;
						break;
					}
				}
				if (!flg)
					cout << "NaN\n";
				flg = 0;
			}
		}
	}
	return 0;
}