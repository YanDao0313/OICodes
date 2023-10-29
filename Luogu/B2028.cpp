#include<iostream>
using namespace std;

int a,i1,i2,i3,o;
int main()
{
	cin>>a;
	i1=a/100;
	i2=(a%100)/10;
	i3=a%10;
	cout<<i3<<i2<<i1<<endl;
	return 0;	
} 