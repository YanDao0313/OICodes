#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

double n,temp=1.0,e=1.0;

int main() {
	cin>>n;
	for (int i1=1; i1<=n; i1++) {
		temp=1;
		for (int i2=1; i2<=i1; i2++) {
			temp*=i2;
		}
		e+=1.0/temp;
	}
	printf("%.10lf",e);
	return 0;
}
