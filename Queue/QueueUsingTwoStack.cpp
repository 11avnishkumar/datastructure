/*
Implemenatation of Queue using two stack
The Purpose is two make the stack working as queue
*/
#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
};
class Stack{
    private:
        Node *Top;
    public:
        Stack();
        // Stack(int );
        void Push(int element);
        int Pop();
        int Peek(int index);
        void Display();
        bool isEmpty();
        bool isFull();
        bool isTop();
        // ~Stack();
};
Stack::Stack(){
    Top = NULL;
}

bool Stack::isEmpty(){
    if(Top == NULL)
        return true;
    else
        return false;       
}
bool Stack::isFull(){
    Node *t = new Node;
    if(t == NULL)
        return true; // if NULL then return True
    else
    {
        delete t; // Delete the Node and return false 
        return false;
    }
       
}
void Stack::Push(int element){
    if(isFull())
        cout<<"Stack is overflow"<<endl;
    else{
        Node *t = new Node;
        t->data = element;
        t->next = Top; // initially top will be NULL so it will assign NULL if this is first Node
        Top = t;
    }
}
int Stack::Pop(){
    Node *t;
    int deletedElement = -1;
    if(isEmpty())
        cout<<"Stack is Underflow"<<endl;
    else{
        t = Top; // hold the data in a temporary Node
        Top = Top->next; // move the top pointer
        deletedElement = t->data; // store the data
        delete t;
    }
    return deletedElement;
}

int Stack::Peek(int index){
    Node *p = Top;
    int x = -1;
    int i;    
    for(i = 0; p != NULL && i < index - 1; i++) p = p->next;
    if(p != NULL){
        x = p->data;
        return x;
    }
    else return x;

}

void Stack::Display(){
    if(Top == NULL)
        cout<<"Stack is Underflow"<<endl;
    else{
    Node *t = Top;
    while(t != NULL)
    {
        cout<<t->data<<endl;
        t = t->next;
    }
    }
}


int main(){
    int Arr [] = {6,3,9,5,4,2,8,12,10}; // elements
    Stack s;
    Stack s2;

    /* Insert all the elements in first stack*/
    for(int i=0; i<9; i++)
        s.Push(Arr[i]);

    /* Pop() all the elements and push it into the second stack */    
    for(int i=0; i<9; i++)
        s2.Push(s.Pop());
    s2.Display();
    return 0;
}