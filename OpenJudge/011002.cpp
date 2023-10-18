#include<bits/stdc++.h>
using namespace std;

int n,t,cnt,l[505];

int main() {
	cin>>n;
	for (int i=0; i<n; i++) {
		cin>>t;
		if (t%2!=0) l[cnt++]=t;
	}
	sort(l,l+cnt);
	cout<<l[0];
	for (int i=1; i<cnt; i++) cout<<','<<l[i];
	return 0;
}