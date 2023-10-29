#include<iostream>
using namespace std;

int a;

int main()
{
	cin>>a;
	if(a>0){
		cout<<"positive";
	}
	if(a==0){
		cout<<"zero";
	}
	if(a<0){
		cout<<"negative";
	}
	return 0;
}