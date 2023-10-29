#include<iostream>
using namespace std;

int h,r,t;
float pi=3.14;
int main()
{
	cin>>h>>r;
	t=20000/(h*r*r*pi)+1;
	cout<<t<<endl;
	return 0;	
}