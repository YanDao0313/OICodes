#include<bits/stdc++.h>
using namespace std;

int n,m,x,a[10086],b[10086];

int main() {
	cin>>n;
	for (int i=0; i<n; i++) cin>>a[i];
	cin>>m;
	for (int i=0; i<m; i++) cin>>b[i];
	for (int i=0; i<m; i++) {
		x=b[i];
		//	if (x<a[0]) {
		//		for (int j=n; j>0; j--) a[j]=a[j-1];
		//		a[0]=x;
		//	} else if (x>a[n-1]) {
		//		a[n]=x;
		//	} else {
		//		for (int j=0; j<n; j++) {
		//			if (a[j]<x&&a[j+1]>x) {
		//				for (int ii=n; ii>i+1; ii--) a[ii]=a[ii-1];
		//				a[j+1]=x;
		//				break;
		//			}
		//		}
		//	}
		int j;
		for (j=n-1; j>=0; j--) {
			if (a[j]>x) a[j+1]=a[j];
			else break;
		}
		a[j+1]=x;
		n++;
	}
	for (int i=0; i<n; i++) cout<<a[i]<<' ';
	return 0;
}