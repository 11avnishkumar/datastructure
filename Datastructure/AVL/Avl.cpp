#include<iostream>
using namespace std;

class Node{
public:
 	int data;
 	Node* lchild;
 	int height;
 	Node* rchild;
};

class AVL{
private:
 	Node* root;
public:
 	AVL(); /* constructor*/
 	int createAVL();
};

AVL::AVL(){
	root = NULL;
}

int AVL::createAVL() {
    if(root==NULL)


}


// Main Method
int main()
{
	/* code */
    AVL avl;
    avl.createAVL();
	return 0;
}