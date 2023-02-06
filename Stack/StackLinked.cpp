/*
    Stack using linked list
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
    Stack s;
    int index,element,ch;
    do{
        cout<<"Choose from the follwing"<<endl;
        cout<<"1. Push"<<endl;
        cout<<"2. Pop"<<endl;
        cout<<"3. Peek"<<endl;
        cout<<"4. Display"<<endl;
        cin>>ch;
        switch (ch)
        {
        case 1:
            cout<<"Enter the element"<<endl;
            cin>>element;
            s.Push(element);
            break;
        case 2: 
            cout<<s.Pop()<<endl;
            break;
        case 3:
            cout<<"Enter the index"<<endl;
            cin>>index;
            cout<<s.Peek(index)<<endl;
            break;
        case 4:
             s.Display();    
             break;
        }
    }while(ch<5);
    return 0;
}