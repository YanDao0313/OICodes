#include<bits/stdc++.h>
using namespace std;

int n,m,l[100010];

int main() {
	cin>>n>>m;
	cout<<'1';
	for (int i=2; i<=m; i++) {
		for (int j=1; i*j<=n; j++)
			l[i*j]++;
	}
	for (int i=2; i<=n; i++)
		if (l[i]%2==0) cout<<','<<i;
	return 0;
}