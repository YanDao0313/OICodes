#include <iostream>
using namespace std;

int n, ans;

int c(int n) {
	if (n > 1)
		return n * c(n - 1);
	else
		return 1;
}

int main() {
	cin >> n;
	cout << c(n);
	return 0;
}