#include<iostream>
#include<cstdio>
using namespace std;

int a;
double b,w;

int main()
{
	cin>>a;
	b=27.0+23.0+a/3.0;
	w=a/1.2;
	if(b>w){
		cout<<"Walk";
	}
	else{
		if(b==w){
			cout<<"All";
		}
		else{
			cout<<"Bike";
		}
	}
	return 0;
}