#include<bits/stdc++.h>
using namespace std;

int m,n,temp,pic[103][103],picc[103][103];
string x;
void A();

int main() {
	cin>>m>>n;
	for (int i=1; i<=m; i++) {
		for (int j=1; j<=n; j++) {
			cin>>pic[i][j];
			picc[i][j]=pic[i][j];
		}
	}
	cin>>x;
	for (int z=0; z<x.length(); z++) {
		if (x[z]=='A') {
			A();
		} else if (x[z]=='B') {
			A();A();A();
		} else if (x[z]=='C') {
			for (int i=1; i<=m; i++) {
				for (int j=1; j<=n; j++) {
					pic[i][j]=picc[i][n-j+1];
				}
			}
			memset(picc,0,sizeof(picc));
			for (int i=1; i<=m; i++) {
				for (int j=1; j<=n; j++) {
					picc[i][j]=pic[i][j];
				}
			}
		} else {
			for (int i=1; i<=m; i++) {
				for (int j=1; j<=n; j++) {
					pic[i][j]=picc[m-i+1][j];
				}
			}
			memset(picc,0,sizeof(picc));
			for (int i=1; i<=m; i++) {
				for (int j=1; j<=n; j++) {
					picc[i][j]=pic[i][j];
				}
			}
		}
	}
	for (int i=1; i<=m; i++) {
		for (int j=1; j<=n; j++) printf("%d ",pic[i][j]);
		cout<<endl;
	}
	return 0;
}

void A() {
	for (int i=1; i<=m; i++) {
		for (int j=1; j<=n; j++) {
			pic[j][m-i+1]=picc[i][j];
		}
	}
	temp=m;
	m=n;
	n=temp;
	memset(picc,0,sizeof(picc));
	for (int i=1; i<=m; i++) {
		for (int j=1; j<=n; j++) {
			picc[i][j]=pic[i][j];
		}
	}
}