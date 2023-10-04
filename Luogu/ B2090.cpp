#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int n,a0,a1,a2,a3;
double ans[4];
const int maxn=100+50;
int age[maxn];
int main() {
	cin>>n;
	for (int i=0; i<n; i++) {
		cin>>age[i];
		if (age[i]<=18) ans[0]++;
		if (age[i]>=19&&age[i]<36) ans[1]++;
		if (age[i]>=36&&age[i]<61) ans[2]++;
		if (age[i]>=61) ans[3]++;
	}
	for (int i=0; i<4; i++) {
		printf("%.2lf%%\n",ans[i]*100/n);
	}
	return 0;
}