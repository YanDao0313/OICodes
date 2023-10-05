#include <bits/stdc++.h>
using namespace std;

int n,t,a[110]= {0};

int main() {
	cin>>n;
	for (int i=1; i<=n; i++) cin>>a[i];
	for (int i=1; i<=n; i++) {
		t=0;
		for (int j=i; j>0; j--) {
			if (a[i]>a[j]) t++;
		}
		cout<<t<<" ";
	}
	return 0;
}