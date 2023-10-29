#include <bits/stdc++.h>
using namespace std;

int n;
double ans;

struct locate {
	int x, y, z;
} l[50010];

bool cmp(locate x, locate y) {
	return x.z < y.z;
}

int main() {
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> l[i].x >> l[i].y >> l[i].z;
	sort(l, l + n, cmp);
	for (int i = 1; i < n; i++)
		ans += sqrt((l[i].x - l[i - 1].x) * (l[i].x - l[i - 1].x) + (l[i].y - l[i - 1].y) * (l[i].y - l[i - 1].y) +
		            (l[i].z - l[i - 1].z) * (l[i].z - l[i - 1].z));
	printf("%.3lf", ans);
	return 0;
}
