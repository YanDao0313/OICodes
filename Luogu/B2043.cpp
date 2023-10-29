#include<iostream>
#include<cstdio>
using namespace std;

int a,b=0,c=0,d=0;

int main()
{
	cin>>a;
	if(a%3==0){
		b=1;
	}
	if(a%5==0){
		c=1;
	}
	if(a%7==0){
		d=1;
	}
	if(b==1){
		cout<<"3 ";
	}
	if(c==1){
		cout<<"5 ";
	}
	if(d==1){
		cout<<"7";
	}
	if(b!=1&&c!=1&&d!=1){
		cout<<"n";
	}
	return 0;
}