#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define int long long int
struct Node
{
    int data;
    Node *left;
    Node *right;
};
class Solution
{
public:
    // TC = O(n), ans SC = O(n) ~= O(height of tree)
    vector<int> inOrder(Node *root)
    {
        stack<Node *> st;
        vector<int> ans;
        if (root == NULL)
        {
            return ans;
        }
        Node *node = root;
        while (true)
        {
            if (node != NULL)
            {
                st.push(node);
                node = node->left;
            }
            else
            {
                if (st.empty())
                {
                    break;
                }
                else
                {
                    node = st.top();
                    st.pop();
                    ans.push_back(node->data);
                    node = node->right;
                }
            }
        }
        return ans;
    }
};
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