#include <bits/stdc++.h>
#define AC return 0
using namespace std;

int n, m, a[100010];
vector<int> q[100010];

void df(int x, int v) {
    a[x] = v;
    for (int i = 0; i < q[x].size(); i++)
        if (a[q[x][i]] == 0)
            df(q[x][i], v);
}

int main() {
    cin >> n >> m;
    for (int i = 1; i <= m; i++) {
        int u, v;
        scanf("%d%d", &u, &v);
        q[v].push_back(u);
    }
    for (int i = n; i > -1; i--)
        if (a[i] == 0)
            df(i, i);
    for (int i = 1; i <= n; i++)
        printf("%d ", a[i]);
    cout << endl; // For Debugging
    AC;
}