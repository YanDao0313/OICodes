#include<iostream>
#include<cmath>
using namespace std;

float xa,xb,xc,ya,yb,yc;
double a,b,c,p,s;

int main()
{
	cin>>xa>>ya>>xb>>yb>>xc>>yc;
	a=sqrt(pow(xa-xb,2)+pow(ya-yb,2));
	b=sqrt(pow(xa-xc,2)+pow(ya-yc,2));
	c=sqrt(pow(xb-xc,2)+pow(yb-yc,2));
	p=(a+b+c)/2.0;
	s=sqrt(p*(p-a)*(p-b)*(p-c));
	printf("%.2lf",s);
	return 0;
 } 