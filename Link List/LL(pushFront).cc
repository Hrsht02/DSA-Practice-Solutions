#include <iostream>
using namespace std;

class Node(){
    int data;
    Node* next;
    

public:
    Node(int val) {
        data = val;
        next = Null;

    }
};

class List() {
    Node* head;
    Node* tail;

public:
    List(){
        head = Null;
        tail = Null;

    }
}

void push_front(int val){
    Node* newNode = new Node(val); // dynamic
    if (head == Null){
        head = tail = newNode
    }
    else {
        newNode -> next = head;
        head = newNode;
    }
}

int main(){
    List ll();
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    // 1 -> 2 -> 3 -> Null
    return 0;
}
