#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    Node(int val)
    {
        data = val;
        next = nullptr;
        prev = nullptr;
    }
};

class doubly_list
{
    Node *head;
    Node *tail;

public:
    doubly_list()
    {
        head = nullptr;
        tail = nullptr;
    }

    void push_front(int val)
    {
        Node *newnode = new Node(val);

        if (head == nullptr)
        {
            head = tail = newnode;
            return;
        }
        else
        {
            head->prev = newnode;
            newnode->next = head;
            head = newnode;
        }
    }

    void push_back(int val)
    {
        Node *newnode = new Node(val);

        if (head == nullptr)
        {
            head = tail = newnode;
            return;
        }
        else
        {
            newnode->prev = tail;
            tail->next = newnode;
            tail = newnode;
        }
    }

    void pop_front()
    {
        if (head == nullptr)
        {
            cout << "invalid function:empty dll" << endl;
        }
        else if (head == tail)
        {
            tail = nullptr;
            delete head;
            head = nullptr;
        }
        else
        {
            Node *temp = head;
            head = head->next;
            head->prev = nullptr;
            delete temp;
        }
    }

    void pop_back()
    {
        if (head == nullptr)
        {
            cout << "invalid function:empty dll" << endl;
        }
        else if (head == tail)
        {
            tail = nullptr;
            delete head;
            head = nullptr;
        }
        else
        {
            Node *temp = tail;
            tail = tail->prev;
            tail->next = nullptr;
            delete temp;
        }
    }

    void print()
    {
        if (head == nullptr)
        {
            cout << "empty doubly list" << endl;
        }
        else
        {
            Node *temp = head;
            while (temp != nullptr)
            {
                cout << temp->data << " ";
                temp = temp->next;
            }
            cout << endl;
        }
    }
};

int main()
{
    doubly_list dll;

    dll.push_front(3);
    dll.push_front(2);
    dll.push_front(1);
    dll.print();

    dll.push_back(4);
    dll.push_back(5);
    dll.print();

    dll.pop_front();
    dll.print();

    dll.pop_back();
    dll.print();
}