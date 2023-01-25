/*
source: Leetcode
Problem: Desgin a linked list
Problem No: 707
Accepted but submission failed

*/
#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
};

class MyLinkedList {
private:
Node* head;
Node* tail;
int size;
public:

    MyLinkedList() {
        head = tail = NULL;
        size = 0;
    }

    int get(int index) {
        int i;
        if(index < 0 || index >= size)
            return -1;
        else{
            Node* p = head;
            for(i = 0; i < index; i++)
                p = p->next;
            return p->data;

        }

    }

    void addAtHead(int val) {
        if(head == NULL)
        {
            head = new Node;
            head->data = val;
            head->next = NULL;
            tail = head;
            size++;
        }
        else
        {
         Node *t = new Node;
         t->data = val;
         t->next = head;
         head = t;
         size++;
        }
    }

    void addAtTail(int val) {
        Node *t = new Node;
        t->data = val;
        tail->next = t;
        tail = t;
        size++;
    }

    void addAtIndex(int index, int val) {
        if(index < 0 || index >= size)
            return;
        if(index == 0){
            if(head == NULL){
                head->data = val;
                head->next = NULL;
                tail = head;
                size++;
            }
            else{
               Node *t = new Node;
                t->data = val;
                t->next = head;
                head = t;
                size++;
            }
        }else{
            int i;
            Node *p = head;
            Node *t = new Node;
            t->data = val;
            for(i = 0; i < index - 1; i++)
                p = p->next;
            t->next = p->next;
            p->next = t;
            size++;

        }

    }

    void deleteAtIndex(int index) {
        int i;
        Node* p;
        Node* q=NULL;
        if(index < 0 || index >= size)
            return;
        if(index == 0){
            Node *t = head;
            head = head->next;
            delete t;
            size--;
        }else{
        p = head;
        for(i = 0; i < index - 1; i++)
            p = p->next;
        q = p->next;
        p->next = q->next;
        delete q;
        size--;
        }
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */
