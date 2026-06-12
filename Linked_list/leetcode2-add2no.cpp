#include <bits/stdc++.h>
using namespace std;
        
// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
//WHAT THE AI CODE FIXES IS THAT IT CANDLES CARRY MATHEMATICALLY AND INSTEAD OF DUMMY JUST CREATES A NODE AND POINTS THE TAIL TO IT DEPENDING WHETHER THERE IS CARRY OR NAH. 
// class Solution {
// public:
//     ListNode* reverse(ListNode* head){
//         if(head==nullptr || head->next==nullptr){
//             return head;
//         }
//         ListNode* temp=head;
//         ListNode* newhead= reverse( temp->next);
//         ListNode* tail=temp->next;
//         tail->next=temp;
//         temp->next=nullptr;
//         return newhead;
//     }
//     ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//         reverse(l1);
//         reverse(l2);
//         ListNode* temp1=l1;
//         ListNode* temp2=l2;
//         ListNode* newhead=l1;
//         ListNode dummy(0);
//         int carry=0;
//         while(true){
//             if(l1==nullptr && l2!=nullptr){
//                 newhead=temp2;
//                 l2->val+=carry;
//                 if(l2->val<10){
//                     carry=0;
//                 }
//                 else{
//                     l2->val-=10;
//                     carry=1;
//                 }
//                 if(l2->next==nullptr){
//                     if(carry==1){
//                         dummy.val=1;
//                         l2->next=&dummy;
//                     }
//                     break;
//                 }
//                 l2=l2->next;
//             }
//             else if(l2==nullptr && l1!=nullptr){
//                 newhead=temp1;
//                 l1->val+=carry;
//                 if(l1->val<10){
//                     carry=0;
//                 }
//                 else{
//                     l1->val-=10;
//                     carry=1;
//                 }
//                 if(l1->next==nullptr){
//                     if(carry==1){
//                         dummy.val=1;
//                         l1->next=&dummy;
//                     }
//                     break;
//                 }
//                 l1=l1->next;
//             }
//             else{
//                 l1->val+=l1->val+carry;
//                 l2->val=l1->val;
//                 if(l1->val<10){
//                     carry=0;
//                 }
//                 else{
//                     l1->val-=10;
//                     l2->val=l1->val;
//                     carry=1;
//                 }
//                 if(l1->next==nullptr && l2->next==nullptr){
//                     if(carry==1){
//                         dummy.val=1;
//                         l1->next=&dummy;
//                     }
//                     break;
//                 }
//                 l1=l1->next;
//                 l2=l2->next;
//             }
//         }
//         return newhead;
//         }
//  };
        class Solution {
public:

    ListNode* reverse(ListNode* head){
        if(head==nullptr || head->next==nullptr){
            return head;
        }

        ListNode* newhead = reverse(head->next);

        head->next->next = head;
        head->next = nullptr;

        return newhead;
    }

    int len(ListNode* head){
        int cnt=0;
        while(head){
            cnt++;
            head=head->next;
        }
        return cnt;
    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        l1 = reverse(l1);
        l2 = reverse(l2);

        int n1=len(l1);
        int n2=len(l2);

        if(n2>n1){
            swap(l1,l2);
        }

        ListNode* newhead=l1;

        int carry=0;

        while(l1 && l2){

            int sum=l1->val+l2->val+carry;

            l1->val=sum%10;
            carry=sum/10;

            if(l1->next==nullptr && l2->next==nullptr){
                break;
            }

            l1=l1->next;
            l2=l2->next;
        }

        while(l1){

            int sum=l1->val+carry;

            l1->val=sum%10;
            carry=sum/10;

            if(l1->next==nullptr){
                break;
            }

            l1=l1->next;
        }

        if(carry){
            l1->next=new ListNode(carry);
        }

        return reverse(newhead);
    }
};
ListNode* createList(vector<int> arr) {
    ListNode *head = new ListNode(arr[0]);
    ListNode *temp = head;
    for (int i = 1; i < arr.size(); i++) {
        temp->next = new ListNode(arr[i]);
        temp = temp->next;
    }
    return head;
}

// Helper to print a linked list
void printList(ListNode* head) {
    while (head) {
        cout << head->val;
        if (head->next) cout << " -> ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    vector num1 = {2, 4, 3}; // represents 342
    vector num2 = {5, 6, 4}; // represents 465
    ListNode* l1 = createList(num1);
    ListNode* l2 = createList(num2);

    Solution sol;
    ListNode* result = sol.addTwoNumbers(l1, l2);
    printList(result); // Output: 7 -> 0 -> 8
    return 0;
}
