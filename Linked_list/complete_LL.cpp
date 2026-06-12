#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = NULL;
    }
};
class List
{
    Node *head;
    Node *tail;

public:
    List()
    {
        head = tail = NULL;
    }
    void push_front(int value)
    {
        Node *newnode = new Node(value); // dynamic
        // Node newnode(val) //is also a way but its static and it doesnt persist after we leave the function
        if (head == NULL)
        {
            head = tail = newnode;
            return;
        }
        else
        {
            newnode->next = head;
            head = newnode;
        }
    }
    void push_back(int val)
    {
        Node *newnode = new Node(val);
        if (head == NULL)
        {
            head = tail = newnode;
            return;
        }
        else
        {
            tail->next = newnode;
            tail = newnode;
        }
    }
    void pop_front()
    {
        if (head == NULL)
        {
            cout << "empty list" << endl;
            return;
        }
        Node *temp = head;
        // temp->next==NULL is not required but good for understanding that basically after we unlink it doesnt point to anything
        head = head->next;
        if (head == NULL)
        {
            tail = NULL;
        }
        // above point is very important to not leave "dangling tail pointer" in ll of 1 size.because after delete temp tail is still pointing to a deleted Node and hence is dangling so gotta update it before deleting
        delete temp;
    }
    void pop_back()
    {
        if (head == NULL)
        {
            cout << "empty list" << endl;
            return;
        }
        Node *temp = head;
        // below if case handles ll with 1 el which shradha di didnt.
        if (head == tail)
        {
            delete head;
            head = tail = NULL;
            return;
        }
        while (temp->next != tail)
        {
            temp = temp->next;
        }
        // Node* last=temp->next;
        temp->next = NULL;
        delete tail;
        tail = temp;
        // delete last;
    }
    void insert(int val, int pos)
    {
        // to handle emply ll insertion following if block is added .
        if (head == NULL)
        {
            if (pos == 0)
            {
                push_front(val);
            }
            else
            {
                cout << "invalid position" << endl;
            }
            return;
        }
        if (pos < 0)
        {
            cout << "invalid position" << endl;
        }
        else if (pos == 0)
        {
            push_front(val);//shouldnt be push_back cz for 8->2->3 if u wanna put 5 at pos=0 u wanna push-front.
        }
        else
        {
            Node *newnode = new Node(val);
            Node *temp = head;
            int i = 1;
            while (i < pos)
            {
                if (temp == NULL)
                {
                    cout << "invalid position" << endl;
                    return;
                }
                temp = temp->next;
                i++;
            }
            newnode->next = temp->next;
            temp->next = newnode;
            // below is important bcz tail wasnt getting updated when node was added at last.
            if (newnode->next == NULL)
            {
                tail = newnode;
            }
        }
    }
    int search(int key)
    {
        int i = 0;
        Node *temp = head;
        while (temp != NULL)
        {
            if (temp->data == key)
            {
                return i;
            }
            temp = temp->next;
            i++;
        }
        return -1;
    }
    int size()
    {
        int i = 0;
        Node *temp = head;
        while (temp != NULL)
        {
            temp = temp->next;
            i++;
        }
        return i;
    }
    void print()
    {
        Node *temp = head; // node* points to node while int* point to integer char* to character
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
        return;
    }
};
int main()
{
    List ll;
    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);
    ll.push_back(4);
    ll.push_back(5);
    ll.print();
    ll.pop_front();
    ll.print();
    ll.pop_back();
    ll.print();
    ll.insert(8, 2);
    ll.print();
    cout << ll.search(8) << endl;
    cout << "size of ll= " << ll.size() << endl;
}