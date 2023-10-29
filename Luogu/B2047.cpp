#include<iostream>
#include<cstdio>
using namespace std;

double x,y;

int main()
{
	cin>>x;
	if(x>=0&&x<5){
		y=-x+2.5;
		printf("%.3lf",y);
	}
	else{
		if(x>=5&&x<10){
			y=2-1.5*(x-3)*(x-3);
			printf("%.3lf",y);
		}
		else{
			if(x>=10&&x<20){
				y=x/2-1.5;
				printf("%.3lf",y);
			}
		}
	}
	return 0;
}