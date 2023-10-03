#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

double n,x,y,a,l,t;

int main() {
	cin>>n;
	for (int i=1; i<=n; i++) {
		cin>>x>>y>>a;
		l=(double)sqrt(x*x+y*y);
		t+=(double)a*1.5+2*l/50;
	}
	cout<<ceil(t);
	return 0;
}
