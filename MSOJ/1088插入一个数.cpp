#include<bits/stdc++.h>
using namespace std;

int a[100010],n,i,x;

int main() {
	cin>>n;
	for (i=0; i<n; i++) cin>>a[i];
	cin>>x;
//	if (x<a[0]) {
//		for (int i=n; i>0; i--) a[i]=a[i-1];
//		a[0]=x;
//	} else if (x>a[n-1]) {
//		a[n]=x;
//	} else {
//		for (int i=0; i<n; i++) {
//			if (a[i]<x&&a[i+1]>x) {
//				for (int j=n; j>i+1; j--) a[j]=a[j-1];
//				a[i+1]=x;
//				break;
//			}
//		}
//	}
//	n+=1;
//	for (int i=0; i<n; i++) cout<<a[i]<<' ';
	for (i=n-1; i>=0; i--) {
		if (a[i]>x) a[i+1]=a[i];
		else break;
	}
	a[i+1]=x;
	for (i=0; i<=n; i++) cout<<a[i]<<' ';
	return 0;
}