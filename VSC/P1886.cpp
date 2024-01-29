#include <bits/stdc++.h>
using namespace std;

struct n1 {
    int num, z;
    n1(int x, int y) {
        num = x;
        z = y;
    }
    bool operator<(const n1 x) const {
        return (z > x.z) || (z == x.z && num < x.num);
    }
};
struct n2 {
    int num, z;
    n2(int x, int y) {
        num = x;
        z = y;
    }
    bool operator<(const n2 x) const {
        return (z < x.z) || (z == x.z && num < x.num);
    }
};

priority_queue<n1> q;
priority_queue<n2> p;
int n, k, top, a[1000010], ans1[1000010], ans2[1000010];

int main() {
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        scanf("%d", a + i);
    for (int i = 1; i <= k; i++) {
        q.push(n1(i, a[i]));
        p.push(n2(i, a[i]));
    }
    ans1[++top] = q.top().z, ans2[top] = p.top().z;
    for (int i = k + 1; i <= n; i++) {
        q.push(n1(i, a[i]));
        p.push(n2(i, a[i]));
        while (i - q.top().num >= k) q.pop();
        while (i - p.top().num >= k) p.pop();
        ans1[++top] = q.top().z, ans2[top] = p.top().z;
    }
    for (int i = 1; i <= top; i++) printf("%d ", ans1[i]);
    cout << endl;
    for (int i = 1; i <= top; i++) printf("%d ", ans2[i]);
    cout << endl;
    return 0;
}