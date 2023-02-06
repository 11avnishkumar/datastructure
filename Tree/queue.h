#include<iostream>
using namespace std;
#ifndef Queue_h
#define Queue_h
class Node{
    public:
      int data; // data
      Node* lchild; // left child
      Node* rchild; // right child
      // constructor
      Node(int data);

};

Node::Node(int data){
  this->data = data;
  this->lchild = nullptr;
  this->rchild = nullptr;
}

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
  Front = Rear = 0; // front and rear will be 0 in circular queue
}

bool Queue::isEmpty(){
  if(Front == Rear)
      return 1;
  else
      return 0;
}

bool Queue::isFull(){
  if(Rear + 1 % Size == Front)
    return 1;
  else
    return 0;
}

void Queue::Enqueue(Node* element){
    if(isFull())
      cout<<"Queue is Full"<<endl;
    else
      Rear = (Rear + 1) % Size;
      Q[Rear] = element;
}
Node* Queue::Dequeue(){
    Node *deletedElement = NULL;
    if(isEmpty())
      cout<<"Queue is Empty"<<endl;
    else
      Front = (Front + 1) % Size;
  return deletedElement;
}

void Queue::Display(){
int i=Front + 1;
if(isEmpty())
  cout<<"Queue is Empty"<<endl;
else{

do{
  cout<<Q[i]<<" ";
  i=(i+1)%Size;
}while(i!=(Rear + 1) % Size);
  
cout<<endl; // print new line after printing all the element of the queue.
}
}

Queue::~Queue(){
  delete []Q;
}

/*
Since it is a header file we don't need the main file just the funcitonality,
so here all the methods of queue defined

*/
#endif