#include <bits/stdc++.h>
using namespace std;

int n, a[110], s[2][110], ans;

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++)
        scanf("%d", a + i);
    for (int i = 1; i <= n; i++)
        for (int j = 0; j < i; j++)
            if (a[i] > a[j])
                s[0][i] = max(s[0][i], s[0][j] + 1);
    a[n + 1] = 0;
    for (int i = n; i; i--)
        for (int j = n + 1; j > i; j--)
            if (a[i] > a[j])
                s[1][i] = max(s[1][i], s[1][j] + 1);
    for (int i = 1; i <= n; i++)
        ans = max(s[0][i] + s[1][i] - 1, ans);
    cout << n - ans << endl;
    return 0;
}