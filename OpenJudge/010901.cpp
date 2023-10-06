#include<bits/stdc++.h>
using namespace std;

int n,x,l=-1,a[10086];

int main() {
	cin>>n;
	for (int i=0; i<n; i++) cin>>a[i];
	cin>>x;
	for (int i=0; i<n; i++) {
		if (a[i]==x) {
			l=i+1;
			break;
		}
	}
	cout<<l;
	return 0;
}