#include <bits/stdc++.h>
using namespace std;

int n;
string a[50];

bool cmp (string a, string b) {
	return (a + b) > (b + a);
}

int main() {
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	sort(a, a + n, cmp);
	for (int i = 0; i < n; i++)
		cout << a[i];
	return 0;
}
