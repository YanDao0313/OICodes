#include <bits/stdc++.h>
#define AC return 0
using namespace std;

int n, m, c, p, q, mapp[5010][5010], b[5010];
bool flg = false;
int ss[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};

void dfs(int k) {
    if (k == q)
        return;
    for (int i = 1; i <= n; i++) {
        if (b[q] == 1)
            return;
        if (b[i] != 1 && mapp[k][i] != 0) {
            b[i] = 1;
            dfs(i);
        }
    }
}

int main() {
    cin >> n >> m >> c;
    for (int i = 1; i <= m; i++) {
        int a, b;
        scanf("%d%d", &a, &b);
        mapp[a][b] = mapp[b][a] = 1;
    }
    for (int i = 0; i < c; i++) {
        memset(b, 0, sizeof(b));
        scanf("%d%d", &p, &q);
        b[p] = 1;
        dfs(p);
        if (b[q] == 1)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    AC;
}