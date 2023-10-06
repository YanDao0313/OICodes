#include<bits/stdc++.h>
using namespace std;

int n,k,a[100010];

int main() {
	cin>>n;
	for (int i=0; i<n; i++) cin>>a[i];
	cin>>k;
	sort(a,a+n,greater<int>());
	for (int i=0; i<k; i++) cout<<a[i]<<' ';
	return 0;
}
