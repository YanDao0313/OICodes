#include <bits/stdc++.h>
using namespace std;

int n, m, p, x, y, a[25000010];

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
    cin >> n >> m >> p;
    for (int i = 1; i <= n * m; i++)
        a[i] = i;
    for (int i = 1; i <= m; i++) {
        cin >> x >> y;
        merge(x, y);
    }
    for (int i = 1; i <= n * m; i++)
        int t = find(i);
    for (int i = 1; i <= p; i++) {
        cin >> x >> y;
        if (a[x] == a[y])
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}