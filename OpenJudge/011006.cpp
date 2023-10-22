#include <bits/stdc++.h>
using namespace std;

int odd[20], even[20], t, cnto, cnte;

bool cmp(int a, int b) {
	return a > b;
}

int main() {
	for (int i = 0; i < 10; i++) {
		cin >> t;
		if (t % 2 != 0)
			odd[cnto++] = t;
		else
			even[cnte++] = t;
	}
	sort(odd, odd + cnto, cmp);
	sort(even, even + cnte);
	for (int i = 0; i < cnto; i++) {
		cout << odd[i] << ' ';
	}
	for (int i = 0; i < cnte; i++) {
		cout << even[i] << ' ';
	}
	return 0;
}