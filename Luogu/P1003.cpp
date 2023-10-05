#include <bits/stdc++.h>
using namespace std;

int n,x,y,cnt=-1;
int a[10086],b[10086],g[10086],k[10086];

int main() {
	cin>>n;
	for (int i=1; i<=n; i++) {
		cin>>a[i]>>b[i]>>g[i]>>k[i];
	}
	cin>>x>>y;
	for (int i=1; i<=n; i++) {
		if (a[i]<=x&&a[i]+g[i]>=x&&b[i]<=y&&b[i]+k[i]>=y) {
			cnt=i;
		}
	}
	cout<<cnt;
	return 0;
}