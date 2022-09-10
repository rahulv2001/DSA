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
    // TC = O(3n), ans SC = O(4n);
    vector<int> AllTraversalIterative(Node *root)
    {
        stack<pair<Node *, int>> st;
        st.push({root, 1});
        vector<int> preOrder;  // list of preorder
        vector<int> inOrder;   // list of inorder
        vector<int> postOrder; // list of postorder
        if (root == NULL)
            return;
        while (!st.empty())
        {
            auto it = st.top();
            st.pop();
            if (it.second == 1) // making preorder
            {
                preOrder.push_back(it.first->data);
                it.second++;
                st.push(it);
                if (it.first->left != NULL)
                {
                    st.push({it.first->left, 1});
                }
            }
            else if (it.second == 2) // making inorder
            {
                inOrder.push_back(it.first->data);
                it.second++;
                st.push(it);
                if (it.first->right != NULL)
                {
                    st.push({it.first->right, 1});
                }
            }
            else
            { // making postorder
                postOrder.push_back(it.first->data);
            }
        }
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