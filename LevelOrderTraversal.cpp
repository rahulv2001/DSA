#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define int long long int

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
    vector<vector<int>> levelOrder(TreeNode *root)
    {
        // TC - O(n);
        // SC - O(n);
        vector<vector<int>> ans;
        queue<TreeNode *> q;
        q.push(root);
        while (!q.empty())
        {
            int n = q.size();
            vector<int> v;
            for (int i = 0; i < n; i++)
            {
                TreeNode *node = q.front();
                q.pop();
                if (node->left != NULL)
                {
                    q.push(node->left);
                }
                if (node->right != NULL)
                {
                    q.push(node->right);
                }
                v.push_back(node->val);
            }
            ans.push_back(v);
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