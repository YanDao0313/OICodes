#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int a,b,c;

int main()
{
	cin>>a>>b>>c;
	if(a+b>c&&a-b<c){
		if(a+c>b&&a-c<b){
			if(b+c>a&&b-c<a){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}else{
			cout<<"0";
		}
	}else{
		cout<<"0";
	}
	return 0;
}