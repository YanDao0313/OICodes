#include<bits/stdc++.h>
using namespace std;

int a[10086],n,x,l,flag=0;

int main() {  
	cin>>n;
	for (int i=0; i<n; i++) cin>>a[i];
	cin>>x;
	for (int i=0; i<n; i++) {
		if (a[i]==x) {
			flag=1;
			l=i;
			break;
		}
		if (a[i]<x&&a[i+1]>x) {
			l=i+1;
			break;
		}
	}
	if (flag) {
		n-=1;
		for (int i=l; i<n; i++) a[i]=a[i+1];
		for (int i=0; i<n; i++) cout<<a[i]<<' ';
	} else {
		n+=1;
		for (int i=n; i>l; i--) a[i]=a[i-1];
		a[l]=x;
		for (int i=0; i<n; i++) cout<<a[i]<<' ';
	}
	return 0;  
}
