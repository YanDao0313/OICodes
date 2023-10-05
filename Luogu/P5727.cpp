#include <bits/stdc++.h>
using namespace std;

int n,t=1,a[10086];

int main() {
	cin>>n;
	a[0]=n;
	while (n!=1) {
		if (n%2==0) n/=2;
		else n=n*3+1;
		a[t]=n;
		t++;
	}
	for (int i=t-1; i>=0; i--) cout<<a[i]<<' ';
	return 0;
}
