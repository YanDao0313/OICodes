#include <bits/stdc++.h>
using namespace std;

int a, b, c;

int main() {
	cin >> a >> b >> c;
	if (a < 60 && b >= 60 && c >= 60)
		cout << '1';
	else if (a >= 60 && b < 60 && c >= 60)
		cout << '1';
	else if (a >= 60 && b >= 60 && c < 60)
		cout << '1';
	else
		cout << '0';
	return 0;
}
