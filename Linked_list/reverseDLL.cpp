#include <iostream>
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

class DoublyList
{
private:
    Node *head;
    Node *tail;

public:
    DoublyList()
    {
        head = nullptr;
        tail = nullptr;
    }

    void push_back(int val)
    {
        Node *newNode = new Node(val);

        if (head == nullptr)
        {
            head = tail = newNode;
            return;
        }

        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }

    void print()
    {
        Node *temp = head;

        while (temp != nullptr)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    void reverse()
    {
        if (head == nullptr || head->next == nullptr)
        {
            return;
        }

        Node *temp = head;
        Node *current = nullptr;

        while (temp != nullptr)
        {
            current = temp->prev;

            temp->prev = temp->next;
            temp->next = current;

            temp = temp->prev;
        }

        current = head;
        head = tail;
        tail = current;
    }
};

int main()
{
    DoublyList dll;

    dll.push_back(1);
    dll.push_back(2);
    dll.push_back(3);
    dll.push_back(4);
    dll.push_back(5);

    cout << "Original DLL: ";
    dll.print();

    dll.reverse();

    cout << "Reversed DLL: ";
    dll.print();

    return 0;
}