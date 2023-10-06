#include<bits/stdc++.h>
using namespace std;

int m,n,i,a[10086];
const int ll=-500000,hh=500000;
void QuickSort(int[], int, int);

int main() {
	cin>>n>>m;
	for (i=0; i<n; i++) cin>>a[i];
	QuickSort(a,ll,hh);
	for (i=m-1; i>-1; i--) cout<<a[i]<<' ';
	return 0;
}

int Paritition1(int A[], int low, int high) {
	int pivot = A[low];
	while (low < high) {
		while (low < high && A[high] >= pivot) {
			--high;
		}
		A[low] = A[high];
		while (low < high && A[low] <= pivot) {
			++low;
		}
		A[high] = A[low];
	}
	A[low] = pivot;
	return low;
}

void QuickSort(int A[], int low, int high) {
	if (low < high) {
		int pivot = Paritition1(A, low, high);
		QuickSort(A, low, pivot - 1);
		QuickSort(A, pivot + 1, high);
	}
}
