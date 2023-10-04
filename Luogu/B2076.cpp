#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

double h,temp,s,ht;

int main() {
	cin>>h;
	temp=h;
	for (int i=1; i<=10; i++) {
		s+=temp;
		temp=(double)temp/2;
		ht=temp;
		s+=temp;
	}
	s-=temp;
	cout<<s<<endl<<ht;
	return 0;
}