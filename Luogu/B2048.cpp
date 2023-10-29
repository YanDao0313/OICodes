#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int a,c,z;
char b,b1='n';

int main()
{
	cin>>a>>b;
	if(a<=1000){
		if(b==b1){
			z=8;
		}
		else{
			z=8+5;
		}
	}
	else{
		c=ceil((a-1000)/500.0);
		if(b==b1){
			z=8+c*4;
		}
		else{
			z=8+5+c*4;
		}
	}
	cout<<z;
	return 0;
}