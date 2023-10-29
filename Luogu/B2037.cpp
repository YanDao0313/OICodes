#include<iostream>
#include<cstdio>
using namespace std;

int a;

int main()
{
	cin>>a;
	if(a%2==0&&a!=0){
		cout<<"even";
	}
	else{
		cout<<"odd";
	}
	return 0;
}