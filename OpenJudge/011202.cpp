#include <bits/stdc++.h>
using namespace std;

int n,msg;
double sum,noa(int l);

int main() {
	cin>>n;
	for (int i=0; i<n; i++) {
		cin>>msg;
		sum+=noa(msg);
	}
	printf("%.1lf",sum);
	return 0;
}

double noa(int l) {
	double s;
	if (l<=70) s++;
	else s=ceil(l*1.0/70);
	return s*0.1;
}