#include <bits/stdc++.h>
using namespace std;

class ListNode {
public:
    int data;
    ListNode* next;

    ListNode(int val) {
        data = val;
        next = nullptr;
    }
};

class List {
    ListNode* head;
    ListNode* tail;

public:
    List() {
        head = tail = nullptr;
    }

    void push_front(int value) {
        ListNode* newnode = new ListNode(value);

        if (head == nullptr) {
            head = tail = newnode;
            return;
        }

        newnode->next = head;
        head = newnode;
    }

    void push_back(int val) {
        ListNode* newnode = new ListNode(val);

        if (head == nullptr) {
            head = tail = newnode;
            return;
        }

        tail->next = newnode;
        tail = newnode;
    }

    void pop_front() {
        if (head == nullptr) {
            cout << "empty list" << endl;
            return;
        }

        ListNode* temp = head;
        head = head->next;

        if (head == nullptr) {
            tail = nullptr;
        }

        delete temp;
    }

    void pop_back() {
        if (head == nullptr) {
            cout << "empty list" << endl;
            return;
        }

        if (head == tail) {
            delete head;
            head = tail = nullptr;
            return;
        }

        ListNode* temp = head;

        while (temp->next != tail) {
            temp = temp->next;
        }

        temp->next = nullptr;
        delete tail;
        tail = temp;
    }

    void deleteNode(int value) {
        if (head == nullptr) {
            cout << "empty ll" << endl;
            return;
        }

        // delete first node
        if (head->data == value) {
            pop_front();
            return;
        }

        ListNode* temp = head;

        while (temp->next != nullptr &&
               temp->next->data != value) {
            temp = temp->next;
        }

        if (temp->next == nullptr) {
            cout << "value not found" << endl;
            return;
        }

        ListNode* nodeToDelete = temp->next;

        if (nodeToDelete == tail) {
            pop_back();
            return;
        }

        temp->next = nodeToDelete->next;
        delete nodeToDelete;
    }

    void print() {
        ListNode* temp = head;

        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }

        cout << endl;
    }
};

int main() {
    List ll;

    ll.push_back(1);
    ll.push_back(2);
    ll.push_back(3);
    ll.push_back(4);
    ll.push_back(5);

    cout << "Before deletion: ";
    ll.print();

    ll.deleteNode(3);

    cout << "After deletion: ";
    ll.print();

    return 0;
}