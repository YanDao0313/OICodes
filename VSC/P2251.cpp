#include <bits/stdc++.h>
using namespace std;

struct node {
    int num, z;
    node(int x, int y) {
        num = x;
        z = y;
    }
    bool operator<(const node x) const {
        return (z > x.z) || (z == x.z && num < x.num);
    }
};

priority_queue<node> q;
int n, m, t, top, Q[1000010];

int main() {
    cin >> n >> m;
    for (int i = 1; i <= m; i++) {
        scanf("%d", &t);
        q.push(node(i, t));
    }
    Q[++top] = q.top().z;
    for (int i = m + 1; i <= n; i++) {
        scanf("%d", &t);
        q.push(node(i, t));
        while (i - q.top().num >= m) q.pop();
        Q[++top] = q.top().z;
    }
    for (int i = 1; i <= top; i++)
        printf("%d\n", Q[i]);
    return 0;
}
