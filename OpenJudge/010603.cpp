#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int num[10];
float sum;

int main() {
	for (int i=0; i<10; i++) {
		cin>>num[i];
	}
	sum+=(float)num[0]*28.9+num[1]*32.7;
	sum+=(float)num[2]*45.6+num[3]*78;
	sum+=(float)num[4]*35+num[5]*86.2;
	sum+=(float)num[6]*27.8+num[7]*43;
	sum+=(float)num[8]*56+num[9]*65;
	printf("%.1lf",sum);
	return 0;
}
