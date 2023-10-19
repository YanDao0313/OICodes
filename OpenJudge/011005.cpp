#include <bits/stdc++.h>
using namespace std;

struct stu {
	int k;
	int s;
} s[5050];
int l, cnt;

bool cmp(stu a, stu b) {
	if (a.s > b.s)
		return true;
	else if (a.s == b.s) {
		if (a.k < b.k)
			return true;
		else
			return false;
	} else
		return false;
}

int n, m;

int main() {
	cin >> n >> m;
	m = m * 3 / 2 - 1;
	for (int i = 0; i < n; i++)
		cin >> s[i].k >> s[i].s;
	sort(s, s + n, cmp);
	l = s[m].s;
	for (int i = 0; i < n; i++)
		if (s[i].s >= l)
			cnt++;
	cout << l << ' ' << cnt << endl;
	for (int i = 0; i < cnt; i++)
		cout << s[i].k << ' ' << s[i].s << endl;
	return 0;
}