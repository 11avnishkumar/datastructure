/*
  Implementation of the stack using arrays
*/

#include<iostream>
using namespace std;

class Stack{
private:
  int *S;
  int Size;
  int Top;
public:
  Stack(int n);
  void Push(int element);
  int Pop();
  void Display();
  int Peek(int index);
  bool isEmpty();
  bool isFull();
  ~Stack();
};

Stack::Stack(int n){
  Size = n;
  S = new int[n];
  Top = -1;
}

void Stack::Push(int element){
  if(Top == Size - 1){
    cout<<"Stack is overflow"<<endl;
  }
  else{
    // Top++;
    S[++Top] = element;
  }
}

int Stack::Pop(){
int deletedElement = -1; // used to store the deleted element

if(Top == -1)
  cout<<"Stack is underflow"<<endl;
else
    deletedElement = S[Top--];
return deletedElement;
}

void Stack::Display(){
int i;
if(Top == -1)
  cout<<"There is nothing to display"<<endl;
else{
  for(i=Top; i>=0; i--)
  cout<<S[i]<<" ";
}
}

int Stack::Peek(int index){
int x = -1; // returned value will be stored here
if(Top-index+1 < 0)
  cout<<"Invalid Position"<<endl;
else
  x =  S[Top-index+1];
return x;
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

int main(){
  Stack s(5);
  int element,index,ch;
  do{
    cout<<"\nEnter from the following"<<endl;
    cout<<"1. Push"<<endl;
    cout<<"2. Pop"<<endl;
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
         s.Push(element);
         break;
    case 2:
       cout<<s.Pop()<<endl;
       break;
    case 3:
        s.Display();
        break;
    case 4:
        cout<<"Enter the index"<<endl;
        cin>>index;
        cout<<"Top element is "<<s.Peek(index)<<endl;
     break;
    case 5:
       cout<<s.isFull()<<endl;
       break;
    case 6:
       cout<<s.isEmpty()<<endl;
       break;
    }
  }while(ch<7);
  return 0;
}
