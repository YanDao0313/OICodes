#include<iostream>
using namespace std;

int a[10000+50][150],b[10000+50][150];
int n,m,x;
int sum;
int main() {
	cin>>n>>m;
	for(int i=1; i<=n; i++) { //每一层
		for(int j=0; j<m; j++) {
			cin>>b[i][j]>>a[i][j];
			if(b[i][j]==1)b[i][m]++;
		}
	}
	cin>>x;
	for(int i=1; i<=n; i++) {
		int k=a[i][x];
		sum=(sum+k)%20123;
		k=k%b[i][m]+b[i][m];
		int t=0;
		for(int j=1; 1; j++) {
			if(b[i][x]==1)t++;
			if(t==k)break;
			x++;
			x%=m;//cout<<i<<",";
		}

	}
	cout<<sum;
	return 0;
}