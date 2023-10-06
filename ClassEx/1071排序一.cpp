#include<bits/stdc++.h>
using namespace std;

int m,n;
long long a[10086];

int main() {
	cin>>n>>m;
	for (int i=0; i<n; i++) cin>>a[i];
	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) {
			if (a[j]>a[j+1]) {
				a[10086]=a[j];
				a[j]=a[j+1];
				a[j+1]=a[10086];
			}
		}
	}
	for (int i=m-1; i>=0; i--) cout<<a[i]<<' ';
	return 0;
}
