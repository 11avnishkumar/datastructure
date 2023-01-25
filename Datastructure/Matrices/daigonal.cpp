/*
  Program to Implement Diagonal Matrix
*/

#include<iostream>
using namespace std;

class Matrix{
private:
  int *A;
  int n; // Dimensions
public:
  Matrix(int n);
  void Set(int i,int j,int element);
  int Get(int i,int j);
  void Display();
  ~Matrix(); // Distructor
};

/* Constructor */

Matrix::Matrix(int n){
  this->n = n;
  A = new int[n]; // Allocate memory Dynamically
}

/* Method for setting the values of the Matrix*/
void Matrix::Set(int i,int j,int element){
if(i==j)
  A[i-1] = element;
}

/* Method for getting the values from the matrix*/
int Matrix::Get(int i,int j){
if(i==j)
  return A[i-1];
else
  return 0;
}

/* Program to display the matrix */

void Matrix::Display(){
int i,j;
for(i=0; i<n; i++){
  for(j=0; j<n; j++){
    if(i==j)
      cout<<A[i-1]<<" ";
    else
      cout<<"0 ";
  }
  cout<<endl;
}
}

Matrix::~Matrix(){
delete []A;
}
int main(){
  Matrix m(4);
  m.Set(1,1,12);
  m.Set(2,2,12);
  m.Set(3,3,12);
  m.Set(4,4,12);
  m.Display();
  return 0;
}


/*

*********************************** Explanation ********************************

Most of the elements in daigonal matrix is zero to save the memory we avoid storing zero
elements into the arrays and store only Non-Zero elements.


*/
