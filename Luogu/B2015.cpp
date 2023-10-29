#include<iostream>
#include<cmath>
using namespace std;

float a,b,ans;

int main()
{
	cin>>a>>b;
	ans=1/(1/a+1/b);
	printf("%.2lf",ans);
	return 0;
 } 