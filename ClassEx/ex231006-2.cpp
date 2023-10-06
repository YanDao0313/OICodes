#include <bits/stdc++.h>
using namespace std;

int m,n,t,cnt,a[10086];

int main() {
	cin>>m>>n;
	t=m;
	while (true) {
		a[cnt]=m%n;
		m/=n;
		if (m==0) break;
		cnt++;
	}
	cout<<'('<<t<<")10=(";
	for (int i=cnt; i>-1; i--) cout<<a[i];
	cout<<")="<<n;
	return 0;
}
