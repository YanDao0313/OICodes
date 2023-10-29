#include<iostream>
#include<cmath>
using namespace std;

double xa,ya,xb,yb,ans;

int main()
{
	cin>>xa>>ya;
	cin>>xb>>yb;
	ans=sqrt(pow((xa-xb),2)+pow((ya-yb),2));
	printf("%.3lf",ans);
	return 0;
 } 