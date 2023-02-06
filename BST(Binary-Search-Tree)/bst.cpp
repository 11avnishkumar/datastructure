/*

Implementation of Binary search Tree

*/

#include<iostream> 
using namespace std;

class Node{
    public:
        int data;
        Node* lchild;
        Node* rchild;
        Node(int data); // constructor
};

Node::Node(int data){
    this->data = data;
    this->lchild = nullptr;
    this->rchild = nullptr;
}

class Tree{
    public:
        Node* root;
        Tree();
        Node* RInsert(Node* p,int element); // recursive insert
        void IterativeInsert(Node* p, int element);
        Node* RSearch(Node* p ,int key); // recursive search 
        Node* ISearch(Node* p ,int key); // Iterative search
        void Inorder(Node* p);
        int Delete(int element);
};

/* constructor */
Tree::Tree(){
    root = nullptr; // root Node
}


/* Insert Method */
Node* Tree::RInsert(Node* p, int element){
Node* t=nullptr;
if(p == nullptr){ 
    t = new Node(element); // call the constructor
    // root = t; 
    return t;
}

if(element < p->data) p->lchild = RInsert(p->lchild,element);

else if(element > p->data) p->rchild = RInsert(p->rchild,element);

return p;
}

/* Iterative insert */

void Tree::IterativeInsert(Node* p , int element){
Node* t = new Node(element); // make a node ready with a data;
Node* r = nullptr;
if(p == nullptr){
    root = t;
    return;
}    
while(p != nullptr){
        r = p;
    if(t->data == p->data)
        return;
    if(t->data < p->data) p = p->lchild;
    else if(t->data > p->data) p = p->rchild; // if we remove all the else and just put if 'segment fault error will occur'   
}
if(t->data < r->data) r->lchild = t;
else r->rchild = t;
}

/* Inorder Traversal */
void Tree::Inorder(Node* p){
    if(p != nullptr){
    Inorder(p->lchild);
    cout<<p->data<<" ";
    Inorder(p->rchild);
    }
}

/* Iterative Search */
Node* Tree::ISearch(Node* p, int key){
    while(p != nullptr){
    if(p->data == key) return p;
    else if(key < p->data) p = p->lchild;
    else if(key > p->data) p = p->rchild;
    }
    return nullptr;
}

/* Recursive Binary Search Tree */
Node* Tree::RSearch(Node*p ,int key){
    if(p->data == key) return p;
    else if(key < p->data) return RSearch(p->lchild,key);
    else if(key > p->data) return RSearch(p->rchild,key);
    return nullptr;
}

// Recursive Delete method


int main(){
Tree T;
Node* temp;
T.root = T.RInsert(T.root,50);
T.RInsert(T.root,25);
T.RInsert(T.root,70);
T.RInsert(T.root,65);
T.RInsert(T.root,90);
T.RInsert(T.root,65);
// T.IterativeInsert(T.root,50);
// T.IterativeInsert(T.root,65);
// T.IterativeInsert(T.root,20);
// T.IterativeInsert(T.root,75);
// T.IterativeInsert(T.root,95);

T.Inorder(T.root);

temp = T.ISearch(T.root,65);
cout<<"\nAddress of key "<<temp<<endl;
temp = T.RSearch(T.root,65);
cout<<"\nAddress of key "<<temp<<endl;

return  0;
}