/*
Successfully accepted 2-10-2022
memory 19.6;

*/


class Node{
    public:
    int data;
    Node* next;
    // constructor
    Node(int value){
        this->data = value;
        this->next = nullptr;
    }
};

class MyLinkedList {
public:
    Node* head;
    Node* tail;
    int size;
    // constructor
    MyLinkedList() {
        head = tail = nullptr;
        size = 0;
    } // it will initialize the constructor as well as the size

    int get(int index) {
        int i;
        if(index < 0 || index >= size)
            return -1;
        /* if the index is valid */    
        Node* current = head;
        for(i = 0; i < index; i++)
            current = current->next;    
        return current ? current->data : -1;
    }

    void addAtHead(int val) {
        // if(head == nullptr)
        // {
        //     head = new Node(val);
        //     tail = head;
        //     size++;
        // }
        // else
        // {
        //  Node* t = new Node(val);
        //  t->next = head;
        //  head = t;
        //  size++;
        // }
        addAtIndex(0,val);
    }

    void addAtTail(int val) {
        // Node* t = new Node(val);
        // tail->next = t;
        // tail = t;
        // size++;
        addAtIndex(size,val);
    }

    void addAtIndex(int index, int val) {
        if(index < 0 || index > size)
            return;
        Node *p = head;    
        Node* t = new Node(val); // node with data filled
        if(index == 0){
            if(head == nullptr){
                head = t;
                tail = head;
                size++;
            }
            else{
                t->next = head;
                head = t;
                size++;
            }
        }else{
            for(int i = 0; i < index - 1; i++)
                p = p->next;
            t->next = p->next;
            p->next = t;
            size++;

        }

    }

    void deleteAtIndex(int index) {
        Node* p=head;
        Node* q=nullptr;
        if(index < 0 || index >= size)
            return;
        if(index == 0){
            Node *t = head;
            head = head->next;
            delete t;
            size--;
        }else{
        for(int i = 0; i < index - 1; i++)
            p = p->next;
        if(p){
        q = p->next;
        p->next = q->next;
        delete q;
        size--;
        }    
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