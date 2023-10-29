#include<iostream>
#include<cstdio>
using namespace std;

double a,b,ans;

int main()
{
	cin>>a>>b;
	ans=b/a;
	printf("%.3lf",ans*100);
	printf("%%");
	return 0;
 } 