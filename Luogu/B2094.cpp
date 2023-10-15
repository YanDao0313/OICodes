#include<bits/stdc++.h>
using namespace std;

int n,a[110],maxx=-1000010,sum;

int main() {
	cin>>n;
	for (int i=0; i<n; i++) {
		cin>>a[i];
		//sum+=temp;
		if (a[i]>maxx) maxx=a[i];
	}
	for (int i=0; i<n; i++) {
		if (a[i]<maxx) sum+=a[i];
	}
	cout<<sum;
	return 0;
}