/*
  Implementation of Queue using Linked list
*/

#include<iostream>
using namespace std;

class Node{
  public:
  int data;
  Node *next;
};

class Queue{
  private:
    Node *Front;
    Node *Rear;
  public:
  Queue();
  void Enqueue(int element);
  int Dequeue();
  void Display();
  bool isFull();
  bool isEmpty();
  ~Queue();

};

Queue::Queue(){
  Front = Rear = NULL;
}

bool Queue::isEmpty(){
  if(Front == Rear)
    return true;
  else
    return false;
}

bool Queue::isFull(){
  Node *t = new Node;
  if(t == NULL)
    return true;
  else{
  delete t;
  return false;
  }
}

void Queue::Enqueue(int element){
if(isFull())
  cout<<"Queue is Full"<<endl;
else
  {
    Node *t = new Node;
    t->data = element;
    t->next = NULL;
    if(Front==NULL)
      Front = Rear = t;
    else{
      Rear->next = t;
      Rear = t;
      }
    }
}

int Queue::Dequeue(){
int x;
if(isEmpty())
    cout<<"Queue is empty"<<endl;
else{
  Node *t = Front;
  Front = Front->next;
  x = t->data;
  delete t;
}
return x;
}

void Queue::Display(){
Node *t = Front;
while(t != NULL){
    cout<<t->data<<endl;
    t = t->next;
  }
}

Queue::~Queue(){

}

int main(){
Queue q;
q.Enqueue(10);
q.Enqueue(20);
q.Enqueue(30);
q.Display();
q.Dequeue();
q.Display();
return 0;
}
