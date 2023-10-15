#include<bits/stdc++.h>
using namespace std;

int a[10][10],maxh[10],loh[10],minl[10],lol[10];

int main() {
	for (int i=0; i<11; i++) {
		maxh[i]--;
		minl[i]=99999;
	}
	for (int i=1; i<6; i++) { //iÐÐ jÁÐ
		for (int j=1; j<6; j++) {
			cin>>a[i][j];
			if (a[i][j]>maxh[i]) {
				maxh[i]=a[i][j];
				loh[i]=j;
			}
		}
	}
	for (int j=1; j<6; j++) { //iÐÐ jÁÐ 
		for (int i=1; i<6; i++) {
			if (a[i][j]<minl[j]) {
				minl[j]=a[i][j];
				lol[j]=i;
			}
		}
	}
	for (int i=1; i<6; i++) {
		if (lol[loh[i]]==i) {
			cout<<i<<' '<<loh[i]<<' '<<a[i][loh[i]];
			return 0;
		}
	}
	cout<<"not found";
	return 0;
}