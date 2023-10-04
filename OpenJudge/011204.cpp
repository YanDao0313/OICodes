#include <bits/stdc++.h>
using namespace std;

#define MAX_INT ~((unsigned int)0) >> 1;
#define N 100

int m,n,r,s,a[101][101],b[101][101],c[101][101];
int drow,dcol,k,l,sum;

int main() {
	int min=MAX_INT;
	cin>>m>>n;
	for (int i=0; i<m; i++) {
		for (int j=0; j<n; j++) {
			cin>>a[i][j];
		}
	}
	cin>>r>>s;
	for (int i=0; i<r; i++) {
		for (int j=0; j<s; j++) {
			cin>>b[i][j];
		}
	}
	for (int i=0; i<m-r+1; i++) {
		for (int j=0; j<n-s+1; j++) {
			sum=0;
			for (int k=0; k<r; k++)
				for (int l=0; l<s; l++)
					sum+=abs(a[i+k][j+l]-b[k][l]);
			if (sum<min) {
				drow=i, dcol=j;
				min=sum;
			}
		}
	}
	for (int i=0; i<r; i++) {
		for (int j=0; j<s; j++) printf("%d ",a[drow+i][dcol+j]);
		printf("\n");
	}
	return 0;
}