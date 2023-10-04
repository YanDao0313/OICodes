#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int n;
double x,ans;

int main() {
	cin>>x>>n;
	for (int i=0; i<=n; i++) {
		ans+=pow(x,i);
	}
	printf("%.2lf",ans);
	return 0;
}