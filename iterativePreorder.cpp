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
    vector<int> preOrder(Node *root)
    {
        stack<Node *> st;
        vector<int> ans;
        if (root == NULL)
            return ans;
        st.push(root);
        while (!st.empty())
        {
            root = st.top();
            ans.push_back(root->data);
            st.pop();
            if (root->right != NULL)
            {
                st.push(root->right);
            }
            if (root->left != NULL)
            {
                st.push(root->left);
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