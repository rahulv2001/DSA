#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define int long long int
void solve()
{
    string s[31];
    bool visited[256] = {0};
    double mark[256];
    for (int i = 0; i < 256; i++)
        mark[i] = 1000000000.0;
    int n, m;
    double x;
    cin >> n >> m >> x;
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (s[i][j] == 'S')
            {
                v.push_back(make_pair(i, j));
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (s[i][j] == 'S')
            {
                continue;
            }
            visited[s[i][j]] = 1;
            for (int k = 0; k < v.size(); k++)
            {
                double temp = sqrt((v[k].first - i) * (v[k].first - i) + (v[k].second - j) * (v[k].second - j));
                mark[s[i][j]] = min(mark[s[i][j]], temp);
            }
        }
    }
    int q;
    cin >> q;
    string w;
    cin >> w;
    int ans = 0;
    for (int i = 0; i < w.length(); i++)
    {
        if (visited[w[i]] == 1)
        {
            continue;
        }
        if (w[i] >= 'a' && w[i] <= 'z' && v.size() > 0)
        {
            if (visited[w[i] - 32] == 0)
            {
                ans = -1;
                break;
            }
            else
            {
                if (mark[w[i] - 32] > x)
                {
                    ans++;
                }
            }
        }
        else if (w[i] >= 'A' && w[i] <= 'Z' && v.size() > 0)
        {
            if (visited[w[i] + 32] == 0)
            {
                ans = -1;
                break;
            }
            else
            {
                if (mark[w[i] + 32] > x)
                {
                    ans++;
                }
            }
        }
        else
        {
            ans = -1;
            break;
        }
    }
    cout << ans << endl;
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