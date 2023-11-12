#include <bits/stdc++.h>
using namespace std;

struct student {
	int num, xy, sz;
	double all;
	student (int _n, int _ac, int _qu) {
		this->num = _n;
		this->xy = _ac;
		this->sz = _qu;
		this->all = _ac * 7 + 3 * _qu;
	}
	student () {}
	int sum () {
		return xy + sz;
	}
};

int is_ex(student a) {
	return a.all >= 800 && a.sum() > 140;
}

int n, tn, ta, tq;

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> tn >> ta >> tq;
		student one(tn, ta, tq);
		if (is_ex(one))
			cout << "Excellent" << endl;
		else
			cout << "Not excellent" << endl;
	}
	return 0;
}
