/*

Conversion of Infix to Postfix

*/

#include<iostream>
#include<string.h>
using namespace std;

class Stack{
private:
    char *S;
    int Top;
    int Size;
public:
    Stack(int n);
    void Push(char element);
    char Pop();
    bool isEmpty();
    bool isFull();
    bool isOperand(char x);
    int precedence(char x);
    bool isBalance(char *exp);
};

Stack::Stack(int n){
    Size = n;
    S = new char[Size];
    Top = -1;
}

void Stack::Push(char element){
  if(Top == Size - 1)
    cout<<"Stack is overflow"<<endl;
  else{
    Top++;
    S[Top] = element;
  }
}

char Stack::Pop(){
char deletedElement; // used to store the deleted element

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


bool Stack::isBalance(char *exp){
int i;
for(i = 0; exp[i] != '\0'; i++)
   if(exp[i] == '(' || exp[i] == '{' || exp[i] == '[') Push(exp[i]);
   else if(exp[i] == ')' || exp[i] == '}' || exp[i] == ']'){
    if(isEmpty()) return false;
    Pop();
   }
   return isEmpty() ? true : false; // At last check whether the stack is empty or Not if Not then parenthesis unbalanced
}

bool isOperand(char x){
  if(x == '+' || x == '-' || x == '*' || x == '/')
    return 0;
  else
    return 1;
}

int precedence(char x){
if(x == '+' || x == '-')
  return 1;
else if(x == '*' || x == '/')
  return 2;
return 0;
}

int main(){
    char *exp = "{[((a+b)*(c-d))}";
    Stack s(strlen(exp));
    cout<<s.isBalance(exp)<<endl;
    return 0;
}
