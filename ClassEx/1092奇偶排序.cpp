#include<bits/stdc++.h>
using namespace std;

int n,x,y,a[110],j[110],o[110];

int main() {
	cin>>n;
	for (int i=0; i<n; i++) cin>>a[i];
	for (int i=0; i<n; i++) {
		if (a[i]%2==0) o[y++]=a[i];
		else j[x++]=a[i];
	}
	sort(j,j+x,greater<int>());
	sort(o,o+y);
	for (int i=0; i<x; i++) cout<<j[i]<<' ';
	for (int i=0; i<y; i++) cout<<o[i]<<' ';
	return 0;
}
