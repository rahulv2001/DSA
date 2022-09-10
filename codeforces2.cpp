#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define int long long int
void solve()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    bool f = false;
    for (int i = 0; i < n - 2; i++)
    {
        if (a[i] + a[i + 1] > a[i + 2])
        {
            f = true;
            break;
        }
    }
    if (f && n >= 3)
    {
        cout << "YES"
             << "\n";
    }
    else
    {
        cout << "NO"
             << "\n";
    }
}
signed main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}