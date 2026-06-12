#include <bits/stdc++.h>
using namespace std;

// Definition for singly-linked list
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    // Recursive function to reverse the linked list
    ListNode* reverseList(ListNode* head) {
       if(head==nullptr || head->next==nullptr){
        return head;
       }
       ListNode* newhead=reverseList(head->next);
       ListNode* tail=head->next;
       tail->next=head;
       head->next=nullptr;
       return newhead;
    }
};

// Driver code
int main() {
    // Creating linked list 1 -> 2 -> 3 -> 4 -> 5
    // ListNode* head = new ListNode(1);
    // head->next = new ListNode(2);
    // head->next->next = new ListNode(3);
    // head->next->next->next = new ListNode(4);
    // head->next->next->next->next = new ListNode(5);
    vector<int> vals = {1, 2, 3, 4, 5};

    ListNode* head = new ListNode(vals[0]);
    ListNode* curr = head;
    int n=vals.size();
    for (int i = 1; i < n; i++) {
        curr->next = new ListNode(vals[i]);
        curr = curr->next;
    }
    Solution sol;
    ListNode* reversed = sol.reverseList(head);

    // Printing reversed list
    while (reversed != NULL) {
        cout << reversed->val << " ";
        reversed = reversed->next;
    }
    cout << endl;
    return 0;
}
