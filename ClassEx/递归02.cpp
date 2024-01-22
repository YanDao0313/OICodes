#include <bits/stdc++.h>
using namespace std;

int n, t;
long long ff[10086];

long long f(int x) {
	if (ff[x] == 0) {
		t++;
		ff[x] = f(x - 1) + f(x - 2);
	}
	return ff[x];
}

int main() {
	ff[1] = ff[2] = 1;
	cin >> n;
	cout << f(n) << endl;
	cout << "Calculation Time: " << t;
	return 0;
}
