#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define int long long int
int countSetBits(unsigned int n)
{
    int count = 0;
    while (n)
    {
        count += n & 1;
        n >>= 1;
    }
    return count;
}
void solve()
{
    int a[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> a[i];
    }
    sort(a, a + 3);
    if (a[0] == 0 && a[1] == 0 && a[2] == 0)
    {
        cout << 1 << "\n";
    }
    else
    {
        int ans = 1;
        int count = 0;
        while (a[0] > 0 || a[1] > 0 || a[2] > 0)
        {
            if (count > 0)
            {
                a[0] = a[0] / 2;
                a[1] = a[1] / 2;
                a[2] = a[2] / 2;
            }
            int sum = (a[0] % 2) + (a[1] % 2) + (a[2] % 2);
            if (sum == 1)
            {
                ans = 0;
                break;
            }
            else if (sum == 3)
            {
                ans = ans * 4;
            }
            count++;
        }

        cout << ans << "\n";
    }
}
signed main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}