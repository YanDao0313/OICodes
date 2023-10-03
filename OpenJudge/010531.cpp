#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int m,n;
bool l[5001];

int main() {
	cin>>n>>m;
	for (int i1=1; i1<=n; i1++) {
		for (int i2=1; i2<=m; i2++) {
			if (i1%i2==0) l[i1]=!l[i1];
		}
	}
	cout<<'1';
	for (int ii=2; ii<=n; ii++) {
		if (l[ii]) cout<<','<<ii;
	}
	return 0;
}
