#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define int long long int

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* reverseList(ListNode* head){
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* Next;
        while(curr != NULL){
            Next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = Next;
        }
        return prev;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* L1 = reverseList(l1);
        ListNode* L2 = reverseList(l2);
        ListNode* p = new ListNode();
        ListNode* temp = p;

        int c = 0;
        while(L1 != NULL || L2 != NULL || c){
            int sum = 0;
            if(L1 != NULL){
                sum += L1->val;
                L1 = L1->next;
            }
            if(L2 != NULL){
                sum += L2->val;
                L2 = L2->next;
            }
            sum += c;
            c = sum/10;
            ListNode* node = new ListNode(sum%10);
            temp->next = node;
            temp = temp->next;
        }
        return reverseList(p->next);
    }
};
void solve(){
   
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