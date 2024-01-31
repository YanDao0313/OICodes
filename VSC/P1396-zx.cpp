#include <bits/stdc++.h>
#define AC return 0
using namespace std;

struct node {
    int from, to, dis;
} a[300000];
int n, m, s, t, fa[300000];

bool cmp(node x, node y) {
    return x.dis < y.dis;
}

int find(int x) {
    if (fa[x] == x)
        return x;
    fa[x] = find(fa[x]);
    return fa[x];
}

void merge(int x, int y) {
    int fx = find(x);
    int fy = find(y);
    if (fx != fy) fa[fy] = fx;
}

int main() {
    cin >> n >> m >> s >> t;
    for (int i = 1; i < 300000; i++)
        fa[i] = i;
    for (int i = 1; i <= m; i++)
        scanf("%d%d%d", &a[i].from, &a[i].to, &a[i].dis);
    sort(a + 1, a + m + 1, cmp);
    for (int i = 1; i <= m; i++) {
        int ta = find(a[i].from), tb = find(a[i].to);
        merge(ta, tb);
        if (find(s) == find(t)) {
            cout << a[i].dis << endl;
            AC;
        }
    }
}