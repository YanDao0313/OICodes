#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int n;
double a=1,b=1,c,ans=0;

int main() {
	cin>>n;
	for (int i=1; i<=n; i++) {
		c=a+b;
		a=b;
		b=c;
		ans+=b/a;
	}
	printf("%.4lf",ans);
	return 0;
}
