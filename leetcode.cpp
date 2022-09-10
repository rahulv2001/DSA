#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define int long long int
bool lemonadeChange(vector<int> &bills)
{
    unordered_map<int, int> m;
    for (int i = 0; i < bills.size(); i++)
    {
        if (bills[i] == 5)
        {
            m[5]++;
        }
        else if (bills[i] == 10)
        {
            m[10]++;
            if (m[5] > 0)
            {
                m[5]--;
            }
            else
            {
                return false;
            }
        }
        else
        {
            m[20]++;
            if (m[5] > 0 && m[10] > 0)
            {
                m[5]--;
                m[10]--;
            }
            else
            {
                return false;
            }
        }
    }
    return true;
}

//[5,5,10,20,5,5,5,5,5,5,5,5,5,10,5,5,20,5,20,5]
void solve()
{
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