#include<bits/stdc++.h>
using namespace std;

int n,a[100010],num,maxx=-1;

int main() {
	cin>>n;
	for (int i=0; i<n; i++) {
		cin>>num;
		if (num>maxx) maxx=num;
		a[num]++;
	}
	for (int i=0; i<=maxx; i++) {
		cout<<a[i]<<endl;
	}
	return 0;
}