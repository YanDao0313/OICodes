#include <bits/stdc++.h>
using namespace std;

int m,n,x,i,j,k,ans,l;
int ex[10086][210],a[10086][210];

int main() {
	cin>>n>>m;
	for(i=1; i<=n; i++) {
		l=0;
		for(j=0; j<m; j++) {
			scanf("%d%d",&ex[i][j],&a[i][j]);
			if(ex[i][j]==1) l++;
		}
		ex[i][m]=l;
	}
	scanf("%d",&x);
	i=1;
	while (i<=n) {
		ans+=a[i][x];
		ans%=20123;
		for (j=x; ; j++) {
			if(j==m) j=0;
			if(ex[i][j]==1) k++;
			if(k==(a[i][x]-1)%ex[i][m]+1) break;
			x=j;
			i++;
		}
		printf("%d",ans);
		return 0;
	}
}