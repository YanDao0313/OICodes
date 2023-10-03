//by GPT-3.5, related to OpenAI
//仅供参考！ 
#include<iostream>
using namespace std;
int main() {
	int n,m,j=0,sum=0;
	int s[10];    //定义存放七进制每一位的数组
	for(int i=100; i<1000; i++) {
		n=i;
		while(n>=7) {
			s[j]=n%7;    //计算并存储七进制每一位
			n=n/7;
			j++;
		}
		for(int l=0; l<j; l++) {
			m=s[l];
			for(int k=j-1; k>=0; k--) {
				m*=9;
			}
			sum+=m;
		}
	//输出结果
		if(i==sum+n) {
			cout<<i<<endl;
			cout<<n;
			for(int l=j-1; l>=0; l--) {
				cout<<s[l];
			}
			cout<<endl;
			for(int l=0; l<=j-1; l++) {
				cout<<s[l];
			}
			cout<<n<<endl;
		}
		sum=0;
		j=0;
	}
	return 0;
}
