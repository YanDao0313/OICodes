#include <bits/stdc++.h>
using namespace std;

struct student {
	int num;
	int chin;
	int math;
};

int main() {
	student stu[20];
	cin>>stu[1].num>>stu[1].chin>>stu[1].math;
	cin>>stu[2].num>>stu[2].chin>>stu[2].math;
	student temp;
	temp=stu[1];
	stu[1]=stu[2];
	stu[2]=temp;
	cout<<stu[1].num<<' '<<stu[1].chin<<' '<<stu[1].math<<endl;
	cout<<stu[2].num<<' '<<stu[2].chin<<' '<<stu[2].math;
	return 0;
}