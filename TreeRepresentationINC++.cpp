#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define int long long int
struct Node{
    /* data */
    int data;
    struct Node* left;
    struct Node* right;
    Node(int val){ // constructor kind of thing
        data = val;
        left = right = NULL;
    }
};

void solve(){
   struct Node* root = new Node(1);
   root->left = new Node(2);
   root->right = new Node(3);
   root->left->left = new Node(5);
}
signed main(){
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    // cin >> t;
    while(t--){
       solve();
    }
return 0;
}