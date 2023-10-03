#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

long long n,temp;

int main() {
	cin>>n;
	if (n!=1) {
		while (n!=1) {
			if (n%2!=0) {
				temp=n*3+1;
				cout<<n<<"*3+1="<<temp<<endl;
			} else {
				temp=n/2;
				cout<<n<<"/2="<<temp<<endl;
			}
			n=temp;
		}
	}
	cout<<"End";
	return 0;
}
