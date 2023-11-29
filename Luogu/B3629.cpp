#include <bits/stdc++.h>
using namespace std;

int n;

bool check(int x) { //x已购冰棍数量
	int cnt = x, num = x;
	while (num >= 3) {
		cnt += num / 3;
		num = num / 3 + num % 3;
		//cout << cnt << ' ' << num << endl;
		if (cnt >= n)
			return true;
	}
	return false;
}

int main() {
	cin >> n;
	int L = 1, R = n + 1;
	while (L <= R) {
		int mid = (L + R) >> 1;
		if (check(mid))
			R = mid - 1;
		else
			L = mid + 1 ;
		//printf("L%d R%d\n", L, R);
	}
	cout << L;
	return 0;
}