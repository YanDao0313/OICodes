#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;

int n,temp,sum,i=1;

int main()
{
	cin>>n;
	while(i<=n){
		cin>>temp;
		sum=sum+temp;
		i++;
	}
	printf("%.2lf",sum*1.00/n);
	return 0;
}