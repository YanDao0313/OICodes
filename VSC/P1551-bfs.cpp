#include <bits/stdc++.h>
#define AC return 0
using namespace std;

int n, m, c, s, t, mapp[5010][5010], b[5010];
bool flg = false;
int ss[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};

void bfs() {
    queue<int> q;
    q.push(s);
    while (!q.empty()) {
        int t = q.front();
        for (int i = 1; i <= n; i++) {
            if (b[i] == 1 || mapp[t][i] == 0)
                continue;
            q.push(i);
            b[i] = 1;
            if (i == t)
                return;
        }
        q.pop();
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
        scanf("%d%d", &s, &t);
        b[s] = 1;
        bfs();
        if (b[t] == 1)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    AC;
}