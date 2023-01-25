#include<iostream>
using namespace std;
#ifndef Queue_h
#define Queue_h
class Node{
    public:
        int data; // data
        Node *lchild; // left child
        Node *rchild; // right child
};

class Queue{
private:
  int Size;
  int Front;
  int Rear;
  Node **Q;
public:
  Queue(int n);
  void Enqueue(Node* element);
  Node* Dequeue();
  bool isEmpty();
  bool isFull();
  void Display();
  ~Queue();

};

Queue::Queue(int n){
  Size = n;
  Q = new Node*[Size];
  Front = Rear = -1;
}

bool Queue::isEmpty(){
  if(Front == Rear)
      return 1;
  else
      return 0;
}

bool Queue::isFull(){
  if(Rear == Size - 1)
    return 1;
  else
    return 0;
}

void Queue::Enqueue(Node* element){
    if(isFull())
      cout<<"Queue is Full"<<endl;
    else
      Q[++Rear] = element;
}
Node* Queue::Dequeue(){
    Node* deletedElement = NULL;
    if(isEmpty())
      cout<<"Queue is Empty"<<endl;
    else
      deletedElement = Q[++Front];
  return deletedElement;
}

void Queue::Display(){
int i;
if(isEmpty())
  cout<<"Queue is Empty"<<endl;
else{

for(i=Front+1; i <= Rear; i++)
  cout<<Q[i]<<" ";
cout<<endl; // print new line after printing all the element of the queue.
}
}

Queue::~Queue(){
  delete []Q;
}
#endif