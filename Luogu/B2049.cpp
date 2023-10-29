#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int a,b,c;

int main()
{
	cin>>a>>b>>c;
	if(a>b){
		if(a>c){
			cout<<a;
		}else{
			cout<<c;
		}
	}else{
		if(b>c){
			cout<<b;
		}else{
			cout<<c;
		}
	}
	return 0;
}