#include <bits/stdc++.h>
#define AC return 0
using namespace std;

int n, m, k, f, a[100000], num[100000], ans = 0x7f;
bool mapp[500][500];
struct node {
    int from, to;
} n1[100000], n2[100000];

int find(int x) {
    if (a[x] == x)
        return x;
    a[x] = find(a[x]);
    return a[x];
}

void merge(int x, int y) {
    int fx = find(x);
    int fy = find(y);
    if (fx != fy) a[fy] = fx;
}

int main() {
    cin >> n >> m >> k >> f;
    for (int i = 1; i <= n; i++) a[i] = i;
    for (int i = 1; i <= m; i++) cin >> n1[i].from >> n1[i].to;
    for (int i = 1; i <= f; i++) cin >> n2[i].from >> n2[i].to;
    for (int i = 1; i <= f; i++) merge(n2[i].from, n2[i].to);
    for (int i = 1; i <= m; i++)
        if (!mapp[find(n1[i].from)][n1[i].to])
            num[find(n1[i].from)]++, mapp[find(n1[i].from)][n1[i].to] = true;
    for (int i = 1; i <= n; i++)
        if (num[i]) ans = min(ans, num[i]);
    ans = min(n, ans + k);
    cout << ans << endl;
    AC;
}