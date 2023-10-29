#include <bits/stdc++.h>
using namespace std;

int n;

struct stu {
	string name;
	int y;
	int m;
	int d;
	int t;
} a[110];

bool cmp(stu x, stu y) {
	if (x.y != y.y)
		return x.y < y.y;
	else {
		if (x.m != y.m)
			return x.m < y.m;
		else if (x.d != y.d)
			return x.d < y.d;
		else
			return x.t > y.t;
	}
}

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i].name >> a[i].y >> a[i].m >> a[i].d;
		a[i].t = i;
	}
	sort(a, a + n, cmp);
	for (int i = 0; i < n; i++)
		cout << a[i].name << endl;
	return 0;
}
