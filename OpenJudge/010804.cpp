#include<bits/stdc++.h>
using namespace std;

int a[1001][1001],h[1001],l[1001],cx,cy,n;
int it,jt,toth,totz;

int main() {
	cin>>n;
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=n; j++) {
			cin>>a[i][j];
			h[i]=(a[i][j]+h[i])%2;
			l[j]=(a[i][j]+l[j])%2;
		}
	}
	for (int i=1; i<=n; ++i) {
		if (h[i]==1) it=i;
		if (l[i]==1) jt=i;
		toth+=h[i];
		totz+=l[i];
	}
	if (toth==0&&totz==0)cout<<"OK"<<endl;
	else if (toth==1&&totz==1)cout<<it<<' '<<jt<<endl;
	else cout<<"Corrupt";
	return 0;
}