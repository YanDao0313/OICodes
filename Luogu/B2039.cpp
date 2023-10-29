#include<iostream>
#include<cstdio>
using namespace std;

long long a,b;

int main()
{
	cin>>a>>b;
	if(a>b){
		cout<<">";
	}
	if(a==b){
		cout<<"=";
	}
	if(a<b){
		cout<<"<";
	}
	return 0;
}