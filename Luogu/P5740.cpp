#include <bits/stdc++.h>
using namespace std;

struct student {
	string name;
	int chi, mat, eng, sum;
} t, ans;


int n;

int main() {
	cin >> n;
	ans.sum = -1;
	for (int i = 0; i < n; i++) {
		cin >> t.name >> t.chi >> t.mat >> t.eng;
		t.sum = t.chi + t.mat + t.eng;
		if (t.sum > ans.sum)
			ans = t;
	}
	cout << ans.name << ' ' << ans.chi << ' ' << ans.mat << ' ' << ans.eng;
	return 0;
}
