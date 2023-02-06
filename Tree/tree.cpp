#include<iostream>
using namespace std; // need to include here so that it can be accessible here as well as in queue header file
#include "queue2.h"
#include "stack.h"

class Tree{
    public:
        Node* root;
    Tree(); // constructor
    void createTree(); // method for creating a tree
    /* Traversal */
    void Preorder(Node* p);
    void Inorder(Node* p);
    void Postorder(Node* p);
    void IterativePreorder(Node* p);
    void IterativeInorder(Node* p);
    void IterativePostorder(Node* p);
    void LevelOrder(Node* p);
    void Height(Node* p);
    int CountNode(Node* p);
    int Sum(Node* p);
    int Avg(Node* p);
    int Min(Node* p);
    int MaX(Node* p);
};
Tree::Tree(){root=nullptr;}
void Tree::createTree(){
Node *p,*t; // Need to temporary Pointer
int element;
Queue q(100); // initialize the size of the queue;
cout<<"Enter the root value"<<endl;
cin>>element;

/* root Node with data, this will the very first Node in the tree */
root = new Node;
root->data = element;
root->lchild = nullptr;
root->rchild = nullptr;

q.Enqueue(root); // insert the address into the queue

while(!q.isEmpty()){
    p = q.Dequeue(); // store the address of the parent so that we can add the children element
    cout<<"Enter the left child of "<<p->data<<endl;
    cin>>element;
    if(element!=-1){
        t = new Node;
        t->data = element;
        t->lchild=t->rchild=nullptr;
        p->lchild = t;
        q.Enqueue(t);
    }
    cout<<"Enter the right child of "<<p->data<<endl;
    cin>>element;
    if(element != -1){
    t = new Node;
    t->data = element;
    t->lchild=t->rchild=nullptr;
    p->rchild = t;
    q.Enqueue(t);
    }
}

}

void Tree::Preorder(Node* p){
   if(p){
    cout<<p->data<<" ";
    Preorder(p->lchild);
    Preorder(p->rchild);
  }
}

void Tree::Inorder(Node* p){
  if(p){
    Inorder(p->lchild);
    cout<<p->data<<" ";
    Inorder(p->rchild);
  }
}

void Tree::Postorder(Node* p){
  if(p){
    Postorder(p->lchild);
    Postorder(p->rchild);
    cout<<p->data<<" ";
  }
}


void Tree::IterativePreorder(Node* p){
  Stack s(100); // take the stack
  while(p != nullptr || !s.isEmpty()){
  if(p){ 
    cout<<p->data<<" "; // print the data
    s.Push(p); // push the address
    p = p->lchild; // move tho the left child
  }else{
    p = s.Pop(); // Pop the address so that we can move on right child
    p = p->rchild;
  }
  }
}


// In order Traversal Iterative version
void Tree::IterativeInorder(Node* p){
  Stack s(100); // create a stack
  while(p != nullptr || !s.isEmpty()){
    if(p){ // check whether p is null
      s.Push(p); // push the address before moving to next left child
      p = p->lchild;
    }else{
      p = s.Pop(); // take out the address so that we can move on the right child 
      cout<<p->data<<" "; // print the data before moving on to the right child
      p = p->rchild;
    }
  }
}


/* Iterative Post Order Traversal */
void Tree::IterativePostorder(Node* p){
  Stack s(100);
  while(p != nullptr || s.isEmpty()){
     
  }
}


// Level Order Taversal
void Tree::LevelOrder(Node* p){
  Queue q(100);
  cout<<p->data<<endl; // print the data
  q.Enqueue(p); // insert the address

  while(!q.isEmpty()){
    p = q.Dequeue(); // dequeue the address
    if(p->lchild){ // check whether the left child available
      cout<<p->lchild->data<<endl; // then print the data of left child Node
      q.Enqueue(p->lchild); // insert the address of left Node
    }

    if(p->rchild){ //  
      cout<<p->rchild->data<<endl;
      q.Enqueue(p->rchild);
    }
  }
}


// count the Node we use Postorder Traversal

int Tree::CountNode(Node* p){
int x,y;
if(p){
  x = CountNode(p->lchild);
  y = CountNode(p->rchild);
  return x+y+1;
}
return 0;
}

// Sum of the all Nodes
int Tree::Sum(Node* p){
 int x,y;
 if(p){
  x = Sum(p->lchild);
  y = Sum(p->rchild);
  return x+y+p->data;
 }
 return 0; 
}

/* Main Method */
int main(){
    Tree T;
    Node* temp;
    T.createTree();
    // T.IterativePreorder(T.root);
    // T.Preorder(T.root);
    // T.IterativeInorder(T.root);
    // T.Inorder(T.root); 
    // T.Postorder(T.root); // recursive
    // // T.Height(T.root);
    // T.LevelOrder(T.root); // Iterative method
    cout<<T.CountNode(T.root);
    cout<<T.Sum(T.root);
    return 0;
}