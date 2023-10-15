#include<bits/stdc++.h>
using namespace std;

int n,a[1024]={0},l,cnt;

int main() {
	cin>>n;
	for (int i=1; i<=n; i++) {
		cin>>a[i];
		if (a[i]==a[i-1]) l++;
		else l=1;
		if (l>cnt) cnt=l;
	}
	cout<<cnt;
	return 0;
}