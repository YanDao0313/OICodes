#include <bits/stdc++.h>
using namespace std;

int x, y, s, yr[2000], cnt;

void run(int a, int b) {
	s = a;
	while (s <= b) {
		if ((s % 4 == 0 && s % 100 != 0) || s % 400 == 0)
			yr[cnt++] = s;
		s++;
	}
}

int main() {
	cin >> x >> y;
	run(x, y);
	cout << cnt << endl;
	int i = 0;
	while (yr[i] != 0)
		cout << yr[i++] << ' ';
	return 0;
}
