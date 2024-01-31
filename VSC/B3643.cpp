#include <bits/stdc++.h>
#define AC return 0
using namespace std;

priority_queue<int, vector<int>, greater<int>> e[1000010];
int n, m, a[1024][1024];

int main() {
    cin >> n >> m;
    for (int i = 1; i <= m; i++) {
        int u, v;
        scanf("%d%d", &u, &v);
        a[u][v] = a[v][u] = 1;
        e[u].push(v), e[v].push(u);
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
    for (int i = 1; i <= n; i++) {
        if (!e[i].empty()) {
            printf("%d ", e[i].size());
            while (!e[i].empty()) {
                printf("%d ", e[i].top());
                e[i].pop();
            }
            printf("\n");
        }
    }
    AC;
}