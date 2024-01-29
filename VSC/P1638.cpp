#include <bits/stdc++.h>
using namespace std;

int p[2024];    // 记录种类画最后一次出现的位置
int a[1000010]; // 画、左端点和已经包含了多少种类的画
int n, m, na, l = 1, cnt;
int ml = 0x7f, L, R; // 记录答案

int main() {
    cin >> n >> m;
    memset(p, -1, sizeof(p));
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        if (p[a[i]] == -1) cnt++;          // 如果没有出现，统计+1
        p[a[i]] = i;                       // 更新位置
        while (l != i && l < p[a[l]]) l++; // 更新左端点
        if (cnt == m && i - l + 1 < ml)
            ml = i - l + 1, L = l, R = i; // 如果已经包含了所有种类的画，而且区间较之前更小，更新答案
    }
    cout << L << ' ' << R << endl;
    return 0;
}
