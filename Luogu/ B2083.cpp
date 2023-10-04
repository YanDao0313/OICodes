#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int h,w,b;
char l;

int main() {
	cin>>h>>w>>l>>b;
	if (b==0) {
		for (int i1=0; i1<w; i1++) cout<<l;
		cout<<endl;
		for (int i2=0; i2<h-2; i2++) {
			cout<<l;
			for (int i3=0; i3<w-2; i3++) {
				cout<<' ';
			}
			cout<<l<<endl;
		}
		for (int i1=0; i1<w; i1++) cout<<l;
		cout<<endl;
	} else {
		for (int i1=0; i1<h; i1++) {
			for (int i2=0; i2<w; i2++) {
				cout<<l;
			}
			cout<<endl;
		}
	}
	return 0;
}