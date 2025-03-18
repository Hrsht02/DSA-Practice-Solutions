#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = nullptr;
    }
};

class List
{
    Node *head;
    Node *tail;

public:
    List()
    {
        head = nullptr;
        tail = nullptr;
    }

    void pushFront(int val)
    {
        Node *newNode = new Node(val);
         if (head == nullptr)
        {
            head = tail = newNode;
        }
        else
        {
            newNode->next = head;
            head = newNode;
        }
    }
    void pushBack(int val)
    {
        Node *newNode = new Node(val);
         if (tail == nullptr)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }
    void pushMid(int val, int pos)
    {
        Node *newNode = new Node(val);
        Node *temp = head;
        for (int i = 0; i < pos - 1; i++)
        {   if(temp == nullptr){
            cout << "Position is invalid\n";
            return;
        }
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }

    void printLL()
    {
        Node *temp = head;
        while (temp != nullptr)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int
main()
{
    List ll;
    ll.pushFront(3);
    ll.pushFront(2);
    ll.pushFront(1);

    ll.printLL();

    ll.pushBack(4);
    ll.pushBack(5);
    ll.pushBack(6);

    ll.printLL();

    ll.pushMid(25, 2);
    ll.pushMid(50,4);
    ll.printLL();

    return 0;
}
