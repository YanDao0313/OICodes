#include <bits/stdc++.h>
#define AC return 0
using namespace std;

vector<vector<int>> e;
int n, m, ans, b[100010];

void dfs(int u, int k, int s) {
    if (k == 3) {
        for (int i = 0; i < e[u].size(); i++) {
            int t = e[u][i];
            if (b[t] == 0 || t == s)
                ans++;
        }
        return;
    }
    for (int i = 0; i < e[u].size(); i++) {
        int t = e[u][i];
        if (b[t] == 0) {
            b[t] = 1;
            dfs(t, k + 1, s);
            b[t] = 0;
        }
    }
}

int main() {
    cin >> n >> m;
    e.resize(100010);
    for (int i = 1; i <= m; i++) {
        int u, v;
        scanf("%d%d", &u, &v);
        e[u].push_back(v), e[v].push_back(u);
    }
    for (int i = 1; i <= n; i++) {
        if (!e[i].empty()) {
            b[i] = 1;
            dfs(i, 1, i);
            b[i] = 0;
        }
    }
    cout << ans << endl;
    AC;
}
