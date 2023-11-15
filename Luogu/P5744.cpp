#include <bits/stdc++.h>
using namespace std;

struct student {
	string name;
	int yr, gr;
} a[100];

int n;

int main() {
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i].name >> a[i].yr >> a[i].gr;
	for (int i = 0; i < n; i++) {
		cout << a[i].name << ' ' << a[i].yr + 1 << ' ';
		if (a[i].gr * 1.2 > 600)
			cout << "600" << endl;
		else
			cout << a[i].gr * 1.2 << endl;
	}
	return 0;
}
