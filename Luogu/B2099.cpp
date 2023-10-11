#include<bits/stdc++.h>
using namespace std;

int a[7][7]={0},m,n;

int main() {
	for (int i=0; i<5; i++) {
		for (int j=0; j<5; j++) {
			cin>>a[i][j];
		}
	}
	cin>>m>>n;
	m-=1;
	n-=1;
	swap(a[m],a[n]);
	for (int i=0; i<5; i++) {
		for (int j=0; j<5; j++) {
			cout<<a[i][j]<<' ';
		}
		cout<<endl;
	}
	return 0;
}