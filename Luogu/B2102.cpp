#include<bits/stdc++.h>
using namespace std;

int a[6][6],maxh[6],h[6],minl[6],l[6];

int main() {
	for (int i=0; i<5; i++) {
		for (int j=0; j<5; j++) {
			cin>>a[i][j];
			if (maxh[i]<a[i][j]) {
				maxh[i]=a[i][j]; //i>ËùÔÚÐÐ j>ËùÔÚÁÐ 
				h[i]=j;
			}
		}
	}
	for (int i=0; i<5; i++) {
		for (int j=0; j<5; j++) {
			if (minl[i]>a[j][i]) {
				minl[i]=a[j][i]; //i>ËùÔÚÁÐ j>ËùÔÚÐÐ 
				l[i]=j;
			}
		}
	}
	for (int i=0; i<5; i++) {
		if (l[h[i]]==i) {
			cout<<i<<' '<<h[i]<<' '<<a[i][h[i]];
			return 0;
		}
	}
	cout<<"not found";
	return 0;
}