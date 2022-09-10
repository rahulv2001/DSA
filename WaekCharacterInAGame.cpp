#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define int long long int

bool mycamp(vector<int> &v1, vector<int> &v2)
{
    if (v1[0] == v2[0])
    {
        return v1[1] > v2[1];
    }
    return v1[0] < v2[0];
}
int numberOfWeakCharacters(vector<vector<int>> &properties)
{
    sort(properties.begin(), properties.end(), mycamp);
    int max_till_now = INT_MIN;
    int ans = 0;
    for (int i = properties.size() - 1; i >= 0; i--)
    {
        if (properties[i][1] < max_till_now)
        {
            ans++;
        }
        max_till_now = max(max_till_now, properties[i][1]);
    }
    return ans;
}
void solve()
{
    vector<vector<int>> v = {{5, 5}, {6, 3}, {3, 6}};
    // vector<vector<int>> v = {{1, 5}, {10, 4}, {4, 3}};
    numberOfWeakCharacters(v);
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[0].size(); j++)
        {
            cout << v[i][j] << " ";
        }
        cout << "\n";
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