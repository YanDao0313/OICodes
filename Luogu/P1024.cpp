#include <bits/stdc++.h>
using namespace std;

double a, b, c, d;
double eps = 0.001;

double f(double x) {
	return a * x * x * x + b * x * x + c * x + d;
}

int main() {
	cin >> a >> b >> c >> d;
	for (int i = -100; i <= 100; i++) {
		double L = i, R = i + 1, mid;
		if (fabs(f(L)) < eps)
			printf("%.2lf ", L);
		else if (fabs(f(R)) < eps)
			continue;
		else if (f(L) * f(R) < 0) {
			while (R - L > eps) {
				mid = (L + R) / 2;
				if (f(mid) * f(R) > 0)
					R = mid;
				else
					L = mid;
			}
			printf("%.2lf ", L);
		}
	}
	return 0;
}