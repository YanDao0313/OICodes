#include <bits/stdc++.h>
using namespace std;

int n,a[1024],b[1024];
long long sum;

int main() {
	cin>>n;
	for (int i=1; i<=n; i++) {
		cin>>a[i];
	}
	for (int i=1; i<=n; i++) {
		cin>>b[i];
	}
	for (int i=1; i<=n; i++) {
		sum+=a[i]*b[i];
	}
	cout<<sum;
	return 0;
}