#include<bits/stdc++.h>
using namespace std;

int m,n,num,w[10086],ans;

int main() {
	cin>>n>>m;
	for (int i=1; i<=n; i++) {
		cin>>w[i];
	}
	num=m+1;
	while (num<=n+m) {
		for (int i=1; i<=m; i++) {
			w[i]--;
			if (w[i]==0) {
				w[i]=w[num];
				num++;
			}
		}
		ans++;
	}
	cout<<ans;
	return 0;
}