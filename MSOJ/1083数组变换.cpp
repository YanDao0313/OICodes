#include<bits/stdc++.h>
using namespace std;

int n,i,x,a[110];

int main() {  
	cin>>n;
	for (int j=0; j<n; j++) cin>>a[j];
	cin>>i>>x;
	for (int j=n+1; j>i; j--) {
		a[j]=a[j-1];
	}
	a[i]=x;
	for (int j=0; j<n+1; j++) cout<<a[j]<<' ';
    return 0;  
}
