#include<iostream>
#include<cstdio>
using namespace std;

double a;

int main()
{
	cin>>a;
	if(a>=0){
		printf("%.2f",a);
	}
	else{
		a=-a;
		printf("%.2f",a);
	}
	return 0;
}