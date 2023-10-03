#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int money,cost,mom,flag=1,deathmonth;

int main() {
	for (int i=1; i<=12; i++) {
		money+=300;
		cin>>cost;
		money-=cost;
		if (money<0) {
			flag=0;
			deathmonth=i;
			break;
		} else {
			mom+=money/100;
			money%=100;
		}
	}
	if (flag==1) {
		money+=mom*120;
		cout<<money;
	} else {
		cout<<-deathmonth;
	}
	return 0;
}
