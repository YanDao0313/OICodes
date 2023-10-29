#include<iostream>
#include<cstdio>
using namespace std;

int a;

int main()
{
	cin>>a;
	if(a>=10){
		if(a<=99){
			cout<<"1";
		}
		else{
			cout<<"0";
		}
	}
	else{
		cout<<"0";
	}
	return 0;
}