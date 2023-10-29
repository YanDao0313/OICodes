#include <bits/stdc++.h>
using namespace std;

int n, t, co, cy;
string tt;

struct pat {
	string id;
	int yr, num;
};
pat o[110], y[110];

bool cmpo(pat x, pat y) {
	if (x.yr != y.yr)
		return x.yr > y.yr;
	else
		return x.num < y.num;
}

bool cmpy(pat x, pat y) {
	return x.num < y.num;
}

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> tt >> t;
		if (t >= 60) {
			o[co].id = tt;
			o[co].yr = t;
			o[co].num = i;
			co++;
		} else {
			y[cy].id = tt;
			y[cy].yr = t;
			y[cy].num = i;
			cy++;
		}
	}
	sort(o, o + co, cmpo);
	sort(y, y + cy, cmpy);
	for (int i = 0; i < co; i++)
		cout << o[i].id << endl;
	for (int i = 0; i < cy; i++)
		cout << y[i].id << endl;
	return 0;
}
