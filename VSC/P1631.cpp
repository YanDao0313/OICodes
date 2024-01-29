#include <bits/stdc++.h>
using namespace std;

priority_queue<int, vector<int>, greater<int>> q;
int n, a[100010], b[100010];

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++)
        scanf("%d", a + i);
    for (int i = 1; i <= n; i++)
        scanf("%d", b + i);
    for (int i = 1; i <= n; i++)
        for (int j = 1; i * j <= n; j++)
            q.push(a[i] + b[j]);
    for (int i = 1; i <= n; i++) {
        printf("%d ", q.top());
        q.pop();
    }
    return 0;
}