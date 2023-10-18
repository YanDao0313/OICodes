#include<bits/stdc++.h>
using namespace std;

int n,m,x,y,t,sum[200010];

int main() {
	cin>>n;
	for (int i=1; i<=n; i++) {
		cin>>t;
		sum[i]=sum[i-1]+t;
	}
	cin>>m;
	for (int i=1; i<=m; i++) {
		cin>>x>>y;
		cout<<sum[y]-sum[x-1];
	}
	return 0;
}