#include <iostream>
using namespace std;

struct node {
    int val;
    node *next;
};

struct SinglyLinkedList {
    node *head, *tail;

    SinglyLinkedList() {
        head = NULL;
        tail = NULL;
        cout << "Singly Linked List initialized\n";
    }

    void enqueue(int x) {
        node *cur = new node;
         cur->val = x;
        cur->next = NULL;
        if (head == NULL && tail == NULL) {
            head = tail = cur;
            return;
        }
        tail->next = cur;
          tail = cur;
    }

    void printList() {
        cout << "SinglyLinkedList:";
        node *cur = head;
        if (cur == NULL) {
            cout << "List is Empty!\n";
              return;
        }
        while (cur != NULL) {
            cout << cur->val << " -> ";
            cur = cur->next;
        }
        cout << "NULL\n";
    }
    void insertAfterHead(int x){

        if(head==NULL){
            enqueue(x);
            return;
        }
        node*cur=new node;
        
    }