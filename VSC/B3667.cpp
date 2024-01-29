#include <bits/stdc++.h>
using namespace std;

deque<int> ans;
int n, k;
unsigned long long a[1000010];

int main() {
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        scanf("%llu", a + i);
        if (ans.size() && ans.front() + k - 1 < i)
            ans.pop_front();
        while (ans.size() && (a[i] >= a[ans.back()]))
            ans.pop_back();
        ans.push_back(i);
        if (i >= k)
            printf("%d\n", ans.size());
    }
    return 0;
}