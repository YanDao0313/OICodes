#include<iostream>
#include<cstdio>
using namespace std;

int a;

int main()
{
	cin>>a;
	if(a%3==0){
		if(a%5==0){
			cout<<"YES";
		}
		else{
			cout<<"NO";
		}
	}
	else{
		cout<<"NO";
	}
	return 0;
}