/*

Implementation of circular queue Using Array

*/
#include<iostream>
using namespace std;
class Queue{
private:
  int Size;
  int *Q;
  int Front;
  int Rear;
public:
  Queue(int n);
  void Enqueue(int element);
  int Dequeue();
  bool isEmpty();
  bool isFull();
  void Display();
  ~Queue();

};

Queue::Queue(int n){
  Size = n;
  Q = new int[Size];
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

void Queue::Enqueue(int element){
    if(isFull())
      cout<<"Queue is Full"<<endl;
    else
      Rear = (Rear + 1) % Size;
      Q[Rear] = element;
}
int Queue::Dequeue(){
    int deletedElement = -1;
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

int main(){
  Queue q(10);
  int element,index,ch;
  do{
    cout<<"\nEnter from the following"<<endl;
    cout<<"1. Enqueue"<<endl;
    cout<<"2. Dequeue"<<endl;
    cout<<"3. Display"<<endl;
    cout<<"4. Peek"<<endl;
    cout<<"5. isFull"<<endl;
    cout<<"6. isEmpty"<<endl;
    cout<<"Quit"<<endl;
    cin>>ch;
    switch (ch)
    {
    case 1:
         cout<<"Enter the element"<<endl;
         cin>>element;
         q.Enqueue(element);
         break;
    case 2:
       cout<<q.Dequeue()<<endl;
       break;
    case 3:
        q.Display();
        break;
    case 4:
        cout<<"Enter the index"<<endl;
        cin>>index;
        // cout<<"Top element is "<<q.Peek(index)<<endl;
        break;
    case 5:
       cout<<q.isFull()<<endl;
       break;
    case 6:
       cout<<q.isEmpty()<<endl;
       break;
    }
  }while(ch<7);
return 0;
}
