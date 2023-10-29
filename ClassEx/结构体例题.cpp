#include <bits/stdc++.h>
using namespace std;

int n;

struct stu {
	string name;
	int id;
	char sex;
	int chi;
	int mat;
	int eng;
	int sum;
} a[1024];

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i].name >> a[i].id >> a[i].sex >> a[i].chi >> a[i].mat >> a[i].eng;
		a[i].sum = a[i].chi + a[i].mat + a[i].eng;
	}
	for (int i = 0; i < n - 1; i++) {
		int k = i;
		for (int j = i + 1; j < n; j++) {
			if (a[j].sum > a[k].sum)
				k = j;
			else if (a[j].sum == a[k].sum && a[j].id < a[k].id)
				k = j;
		}
		swap(a[i], a[k]);
	}
	for (int i = 0; i < n; i++) {
		cout << a[i].name << ' ' << a[i].sum << endl;
	}
	return 0;
}
