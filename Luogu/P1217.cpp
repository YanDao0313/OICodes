#include <bits/stdc++.h>
using namespace std;

bool ws(int x) {
	if ((1000 <= x && x <= 9999) ||
	        (100000 <= x && x <= 999999))
		return false;
	else
		return true;
}

bool pal(int x) {
	int a[20], flag = 1;
	while (x > 0) {
		a[flag] = x % 10;
		x /= 10;
		flag++;
	}
	for (int i = 1; i <= flag / 2; i++)
		if (a[i] != a[flag - i])
			return false;
	return true;
}

bool prime (int x) {
	for (int i = 2; i * i <= x; i++) {
		if (x % i == 0)
			return false;
	}
	return true;
}

int l, r;

int main() {
	scanf("%d%d", &l, &r);
	if (l == 2)
		cout << '2' << endl;
	if (l % 2 == 0)
		l++;
	r = min(9999999, r);
	for (int i = l; i <= r; i = i + 2) {
		if (ws(i) && pal(i) && prime(i))
			printf("%d\n", i);
	}
	return 0;
}
