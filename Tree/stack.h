/*
  Implementation of the stack using arrays
*/
#include<iostream>
#include "queue2.h"
#ifndef stack_h
#define stack_h
class Stack{
private:
  Node** S;
  int Size;
  int Top;
public:
  Stack(int n);
  void Push(Node* element);
  Node* Pop();
  bool isEmpty();
  bool isFull();
  ~Stack();
};

Stack::Stack(int n){
  Size = n;
  S = new Node*[n];
  Top = -1;
}

void Stack::Push(Node* element){
  if(Top == Size - 1){
    cout<<"Stack is overflow"<<endl;
  }
  else{
    // Top++;
    S[++Top] = element;
  }
}

Node* Stack::Pop(){
Node* deletedElement = NULL; // used to store the deleted element

if(Top == -1)
  cout<<"Stack is underflow"<<endl;
else
    deletedElement = S[Top--];
return deletedElement;
}


bool Stack::isEmpty(){
  if(Top == -1)
    return true;
  else
    return false;
}

bool Stack::isFull(){
  if(Top == Size -1)
     return true;
  else
    return false;
}

Stack::~Stack(){
delete []S;
}
#endif
