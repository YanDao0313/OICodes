#include <bits/stdc++.h>
using namespace std;

double n1, n2, n3, m1, m2, m3;
double cnt1, cnt2, cnt3, ans;

double sum(double X1, double Y1, double X2, double Y2) {
	return sqrt((X1 - X2) * (X1 - X2) + (Y1 - Y2) * (Y1 - Y2));
}

int main() {
	scanf("%lf %lf %lf %lf %lf %lf", &n1, &m1, &n2, &m2, &n3, &m3);
	cnt1 = sum(n1, m1, n2, m2);
	cnt2 = sum(n1, m1, n3, m3);
	cnt3 = sum(n2, m2, n3, m3);
	ans = cnt1 + cnt2 + cnt3;
	printf("%.2lf", ans);
}
