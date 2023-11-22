//by ChatGPT
#include <bits/stdc++.h>
using namespace std;

long long calculateWood(vector<int> &trees, int height) {
	long long wood = 0;
	for (int i = 0; i < trees.size(); i++) {
		if (trees[i] > height) {
			wood += trees[i] - height;
		}
	}
	return wood;
}

int main() {
	int N, M;
	cin >> N >> M;
	vector<int> trees(N);
	for (int i = 0; i < N; i++) {
		cin >> trees[i];
	}
	int left = 0;
	int right = *max_element(trees.begin(), trees.end());
	int result = 0;
	while (left <= right) {
		int mid = (left + right) / 2;
		long long wood = calculateWood(trees, mid);
		if (wood >= M) {
			result = mid;
			left = mid + 1;
		} else {
			right = mid - 1;
		}
	}
	cout << result << endl;
	return 0;
}