#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve()
{
    int n;
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int op = 0, eq = 0;

    for (int i = n - 1; i > 0; i--)
    {
        if (a[i] < a[i - 1])
            op++;
        else if (a[i] == a[i - 1])
            eq++;
    }

    int ans = op;
    if (ans > n / 2)
    {
        ans = n - ans;
        ans -= eq;
    }

    cout << ans << "\n";

    if (op > n / 2)
    {
        cout << 3 << " " << n << " " << (1ll << 30) - 1 << "\n";
        for (int i = 0; i < n; i++)
            a[i] ^= (1ll << 30) - 1;
    }

    for (int i = n - 1; i > 0; i--)
    {
        if (a[i] < a[i - 1])
        {
            cout << 2 << " " << i + 1 << " " << (1ll << 30) - 1 << "\n";
        }
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}
