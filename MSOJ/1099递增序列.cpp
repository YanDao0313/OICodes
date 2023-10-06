#include<bits/stdc++.h>
using namespace std;

int n,i,a[100010];

int main() {
	cin>>n;
	for (i=0; i<n; i++) cin>>a[i];
	//n+=1;
	//for (int i=0; i<n; i++) {
	//	if (a[i]==a[i+1]) {
	//		n-=1;
	//		for (int j=i+1; j<n; j++) {
	//			a[j]=a[j+1];
	//		}
	//	}
	//}
	for (i=0; i<n-1; i++) {
		if (a[i]!=a[i+1]) cout<<a[i]<<' ';
	}
	cout<<a[i];
	return 0;
}