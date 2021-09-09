#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            v.push_back(temp);
        }
        int odd = 0, even = 0;
        for (int i = 0; i < n; i++)
        {
            if ((i + 1 + v[i]) % 2 == 0)
            {
                if (v[i] % 2 == 0)
                    even++;
                else
                    odd++;
            }
        }
        int ans = 0;
        ans = abs(even - odd);
        ans = n - ans;
        cout << ans << endl;
    }
    return 0;
}