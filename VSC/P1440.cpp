#include <bits/stdc++.h>
using namespace std;

int n, m, x, l = 1, r = 1, a[2000010], q[2000010];

int main() {
    scanf("%d%d", &n, &m);
    printf("0\n");
    for (int i = 1; i <= n - 1; i++) {
        scanf("%d", &a[i]);
        while (a[q[r - 1]] >= a[i] && l < r) r--;
        q[r++] = i;
        if (i - q[l] + 1 > m) l++;
        printf("%d", a[q[l]]);
        if (i != n - 1) printf("\n");
    }
    cout << endl; // For Powershell Debugging
    return 0;
}