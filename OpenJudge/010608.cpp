#include <bits/stdc++.h>

using namespace std;

int n,na,nb,ta,tb,wa,wb,a[101],b[101];

int main() {
	cin>>n>>na>>nb;
	for (int i=0; i<na; i++) {
		cin>>a[i];
	}
	for (int i=0; i<nb; i++) {
		cin>>b[i];
	}
	for(int i=0; i<n; i++) {
		if(ta==na) {
			ta=0;
		}
		if(tb==nb) {
			tb=0;
		}
		if(a[ta]==0 && b[tb]==2) wa++;
		if(a[ta]==2 && b[tb]==0) wb++;
		if(a[ta]==0 && b[tb]==5) wb++;
		if(a[ta]==5 && b[tb]==0) wa++;
		if(a[ta]==2 && b[tb]==5) wa++;
		if(a[ta]==5 && b[tb]==2) wb++;
		ta++;
		tb++;
	}
	if(wa>wb) {
		cout<<"A";
	} else if(wa<wb) {
		cout<<"B";
	} else {
		cout<<"draw";
	}
	return 0;
}