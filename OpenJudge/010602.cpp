#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int h,height[10],sum;

int main() {
	for (int i=0; i<10; i++) {
		cin>>height[i];
	}
	cin>>h;
	h+=30;
	for (int i=0; i<10; i++) {
		if (height[i]<=h) sum++;
	}
	cout<<sum;
	return 0;
}
