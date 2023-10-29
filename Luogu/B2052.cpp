#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;

int x,y;
char z;

int main()
{
	cin>>x>>y>>z;
	if(z=='+'){
		cout<<x+y;
	}if(z=='-'){
		cout<<x-y;
	}if(z=='*'){
		cout<<x*y;
	}if(z=='/'){
		if(y==0){
			cout<<"Divided by zero!";
		}else{
			cout<<x/y;
		}
	}if(z!='+'&&z!='-'&&z!='*'&&z!='/'){
		cout<<"Invalid operator!";
	}
	return 0;
 } 