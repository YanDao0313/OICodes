#include <bits/stdc++.h>
using namespace std;

int n, num, a[1024], c[1024];

int main() {
	cin >> n;
	cin >> a[1];
	for (int i = 2; i <= n; i++) {
		cin >> a[i];
		c[i] = abs(a[i] - a[i - 1]);
		num = c[i];
		int j;
		for (j = i - 1; j >= 1; j--) {
			if (c[j] < num)
				c[j + 1] = c[j];
			else
				break;
		}
		c[j + 1] = num;
	}
	//sort(c + 1, c + n + 1);
	/*for (int i = 1; i <= n - 1; i++)
		c[i] = a[i + 1] - a[i];*/
	for (int i = 1; i <= n - 1; i++) {
		//cout << c[i];
		if (c[i] != n - i) {
			cout << "Not jolly";
			return 0;
		}
	}
	cout << "Jolly";
	return 0;
}
