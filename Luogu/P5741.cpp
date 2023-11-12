#include <bits/stdc++.h>
using namespace std;

struct student {
	string name;
	int chi, mat, eng, sum;
} stu[1024];

bool check(int x, int y, int z) {
	return (x <= y + z) && (y <= x + z);
}

int n, x, ans;

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> stu[i].name >> stu[i].chi >> stu[i].mat >> stu[i].eng;
		stu[i].sum = stu[i].chi + stu[i].mat + stu[i].eng;
	}
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (check(stu[i].chi, stu[j].chi, 5)
			        && check(stu[i].mat, stu[j].mat, 5)
			        && check(stu[i].eng, stu[j].eng, 5)
			        && check(stu[i].sum, stu[j].sum, 10))
				cout << stu[i].name << ' ' << stu[j].name << endl;
		}
	}
	return 0;
}
