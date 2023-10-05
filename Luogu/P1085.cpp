#include <bits/stdc++.h>
using namespace std;

int a,b,t,maxx=0,maxd=0;

int main() {
	for (int i=1; i<8; i++) {
		cin>>a>>b;
		t=a+b;
		if (t>maxx&&t>8) maxx=t, maxd=i;
	}
	cout<<maxd;
	return 0;
}