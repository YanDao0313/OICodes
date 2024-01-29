#include <bits/stdc++.h>
using namespace std;

struct node {
    int num, z;
    node(int x, int y) {
        num = x;
        z = y;
    }
    bool operator<(const node x) const {
        return (z < x.z) || (z == x.z && num < x.num);
    }
};

priority_queue<node> q;
int n, k, top, a[2000010], ans[2000010];

int main() {
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        scanf("%d", a + i);
    for (int i = 1; i <= k; i++)
        q.push(node(i, a[i]));
    ans[++top] = q.top().z;
    for (int i = k + 1; i <= n; i++) {
        q.push(node(i, a[i]));
        while (i - q.top().num >= k) q.pop();
        ans[++top] = q.top().z;
    }
    for (int i = 1; i <= top; i++) printf("%d\n", ans[i]);
    return 0;
}
