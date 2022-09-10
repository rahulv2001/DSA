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
    // // using 2 stack
    // // TC = O(n), ans SC = O(2n) ~= O(height of tree)
    // vector<int> postOrder(Node *node)
    // {
    //     stack<Node *> st1;
    //     stack<Node *> st2;
    //     vector<int> ans;
    //     if (node == NULL)
    //         return ans;
    //     st1.push(node);
    //     while (!st1.empty())
    //     {
    //         Node *temp = st1.top();
    //         st1.pop();
    //         st2.push(temp);
    //         if (temp->left != NULL)
    //         {
    //             st1.push(temp->left);
    //         }
    //         if (temp->right != NULL)
    //         {
    //             st1.push(temp->right);
    //         }
    //     }
    //     while (!st2.empty())
    //     {
    //         ans.push_back(st2.top()->data);
    //         st2.pop();
    //     }
    //     return ans;
    // }

    // using 1 stack
    // TC = O(n), ans SC = O(2n) ~= O(height of tree)
    vector<int> postOrder(Node *node)
    {
        stack<Node *> st;
        vector<int> ans;
        if (node == NULL)
            return ans;
        Node *curr = node;
        while (curr != NULL || !st.empty())
        {
            if (curr != NULL)
            {
                st.push(curr);
                curr = curr->left;
            }
            else
            {
                Node *temp = st.top()->right;
                if (temp == NULL)
                {
                    temp = st.top();
                    st.pop();
                    ans.push_back(temp->data);
                    while (!st.empty() && temp == st.top()->right)
                    {
                        temp = st.top();
                        st.pop();
                        ans.push_back(temp->data);
                    }
                }
                else
                {
                    curr = temp;
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