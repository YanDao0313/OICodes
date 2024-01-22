#include <bits/stdc++.h>
using namespace std;

int n;

long long sum(int x) {
	if (x == 0)
		return 0;
	else
		return x + sum(x - 1);
}

int main() {
	cin >> n;
	cout << sum(n);
	return 0;
}
