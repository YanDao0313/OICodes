#include <bits/stdc++.h>
using namespace std;

int t, n, m, cnt;

void dfs(int step, int k, int left) {
	if (step == n && left == 0) {
		/*cout << "这是第" << step << "层第"
		     << cnt + 1 << "次记录，有k="
		     << k << ", left=" << left << endl;*/
		cnt++;
		return;
	}
	if (step == n || left < 0)
		return;
	for (int i = k ; i <= left; i++) {
		/*cout << "这是第" << step << "层，有i="
		     << i << ", k=" << k
		     << ", left=" << left << endl;*/
		dfs(step + 1, i, left - i);
	}
}

int main() {
	cin >> t;
	while (t--) {
		cnt = 0;
		cin >> m >> n;
		dfs(0, 0, m);
		cout << cnt << endl;
	}
	return 0;
}
