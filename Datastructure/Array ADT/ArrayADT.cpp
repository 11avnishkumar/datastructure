/* 
    Program to implement array ADT using static memory 
*/

#include<iostream>
#include<math.h>
using namespace std;

class Array{

private:

    int *A; //  array pointer
    int size; // size of the array
    int length; // length of the array
    void Swap(int *x, int *y); // private we need it inside another function only

public:

    /* 
        This will be used to initialize all the data inside the class
        Non Parametrized constructor.
    */

    Array(){

        size = 10;
        length = 0;
        A = new int[size];

    }
    /* Parameterized constructor */
    Array(int sz){

        size = sz;
        length = 0;
        A = new int[size];

    }
    /*
    1. The reason we have made two constructor,parameterized and non-parameterized
    the non-parameterized is used to create the array of default size.
    2. while the second one is used to create the array of desired size.
    
    
    
    */
    ~Array(){
        delete []A;
    }
    void InsertElement(int index,int element);
    void InsertSorted(int element);
    int isSorted();
    void DisplayElement();
    void AppendElement(int element);
    int Sum();
    int RSum(int A[],int n);
    float Avg();
    int DeleteElement(int index);
    int Max();
    int Min();
    int Get(int index);
    void Set(int index, int element);
    void Rearrange();
    Array* Merge(Array arr2);
    Array* Union(Array arr2);
    Array* Intersection(Array arr2);
    Array* Difference(Array arr2);
    int LinearSearch(int key);
    int RLinearSearch(int key);
    int LSTransposition(int key);
    int LSMoveToHead(int key);
    int BinarySearch(int key);
    int RBinarySearch(int low, int high, int key);

};
/* Insert */
void Array::InsertElement(int index, int element){
    // check if the user has given the valid index or not
    // valid index =  0 to length of the array;
    int i=0; // counter variable
    if(index>=0 && index<=length){
        //shift the elements in the array
        for(i=length; i>index; i--){
            A[i] = A[i - 1]; // backward shifting element
        }
        A[index] = element; // insert the element at the position
        length++; // update the length of the array
    }
}

/* Insert at sorted position */
void Array::InsertSorted(int element){
    int i = length - 1;
    if(length == size)
        return;
    while(A[i]>element){
        A[i+1] = A[i];
        i--;
    }
    A[i+1] = element;
    length++;
}

/* To display elements into the array */
void Array::DisplayElement(){
  for(int i=0; i<length; i++){
    cout<<A[i]<<" ";
  }
  cout<<endl;
}

/* Append Method */
void Array::AppendElement(int element){
    // Before appending the element we must check whether there is free space available
    if(length<size){
        // if true then space available, append the element
        A[length++] = element;
    }

}


/* Sum of  Element  */
int Array::Sum(){
 int sum = 0;
 for(int i = 0; i < length; i++){
        sum += A[i];
 }
 return sum;
}


/* Using Recursion Sum of N natural Number */
int Array::RSum(int A[] ,int n){
    if(n >= 0)
      return RSum(A, n - 1) + A[n];
    else
      return 0;
}

/* Average  */
float Array::Avg(){
 return (float)Sum()/length;
 
}

/* Delete elements from the array */
int Array::DeleteElement(int index){
int deleted_element = 0;
// check whether the index is valid or not
  if(index >= 0 && index <=  length){
    deleted_element = A[index]; // store the deleted element
    for(int i = index; i <  length-1; i++) // shift the element
        A[i] = A[i + 1];
     length--; // update the length of the array    
    return deleted_element;  // return deleted element  
  }
  return 0; // if the index is invalid
}

/* Maximum Element  */
int Array::Max(){
 int max = A[0];
 for(int i = 0; i < length; i++){
    if(A[i] > max )
        max = A[i];
 }
 return max;
}

/* Minimum Element  */
int Array::Min(){
 int min = A[0];
 for(int i = 0; i < length; i++){
    if(A[i] < min )
        min = A[i];
 }
 return min;
}

/* Set Method */
void Array::Set(int index, int element){
 if(index<length && index>=0)
    A[index] = element;
}

/* Get method */
int Array::Get(int index){
    if(index<length && index>=0)
        return A[index];
    return -1;
}

/*  Linear Search  */

 int Array::LinearSearch(int key){
    for(int index = 0; index<length; index++){
        if(A[index] == key)
            return index;
    }
    return - 1;
    
}

void Array::Swap(int *x, int *y){
        int temp;
        temp = *x;
        *x  = *y;
        *y  = temp;
}

/* Transposition: Linear search */

int Array::LSTransposition(int key){
    for(int index = 0; index<length; index++){
        if(A[index] == key){
            Swap(&A[index], &A[index - 1]);
            return index;
        }
    }
    return - 1;
   
}

/* Move to Head: Linear Search */

int Array::LSMoveToHead(int key){
    for(int index = 0; index<length; index++){
        if(A[index] == key){
            Swap(&A[index], &A[0]);
            return index;
        }
    }
    return - 1;
    
}

/* Binary Search: To implement Binary Search the array must be in sorted order. */

int Array::BinarySearch(int key){
    int mid = 0;
    int low = 0;
    int high = length - 1;

    while(low <= high){
        mid = ceil((low + high) / 2); 
        if(key == A[mid]) return mid; // return index
        else if(key < A[mid]) high = mid - 1;
        else low = mid + 1;            
    }
    return - 1; // if the search is Unsuccessful
}


/* Recursive Method for Binary Search */
// int Array::RBinarySearch(int A[], int low, int high, int key){
//     int mid = 0;
//     if(low <=high){
//         mid = ceil((low + high ) / 2);
//         if(key == A[mid])
//             return mid;
//         else if(key < A[mid])
//             return RBinarySearch(A, low, mid - 1, key);
//             // check left hand side
//         else 
//             return RBinarySearch(A, mid + 1, high, key);    
//             // check right hand side
//     }
//     return -1; // if no element found
// }
    

/* check whether the Array is sorted or not */
int Array::isSorted(){
    int i;
    for(i=0; i<length-1; i++){
        if(A[i] > A[i+1])
            return 0;
    }        
    return 1;    
}

/* Negative on left side and positive on right side */
void Array::Rearrange(){
    int i = 0;
    int j = length - 1;
    while(i < j)
    {
        while(A[i] < 0) i++;
        while(A[j] > 0) j--;
        if(i < j) Swap(&A[i],&A[j]);

    }
}

/* Merging two arrays */
Array* Array::Merge(Array arr2){
int i,j,k; 

i = j = k = 0;

Array *arr3 = new Array(length+arr2.length);
while (i < length && j < arr2.length)
{
    if(A[i] < arr2.A[j]) 
        arr3->A[k++] = A[i++];
    else 
        arr3->A[k++] = arr2.A[j++];  
}
for(;i<length; i++) 
    arr3->A[k++] = A[i];

for(;j<arr2.length; j++) 
    arr3->A[k++] = arr2.A[j];

arr3->length = length + arr2.length;
arr3->size = size + arr2.size;
return arr3;
}

/* Union in sorted array */
Array* Array::Union(Array arr2){
    int i,j,k;
    i = j = k = 0;
    Array *arr3 = new Array(length+arr2.length);
    while (i < length && j < arr2.length)
    {
        if(A[i] < arr2.A[j]) 
            arr3->A[k++] = A[i++];
        else if(arr2.A[j] < A[i])
            arr3->A[k++] = arr2.A[j++];
        else{
            arr3->A[k++] = A[i++];
            j++;
        }      
    }
    for(;i < length; i++) 
        arr3->A[k++] = A[i];

    for(;j < arr2.length; j++) 
        arr3->A[k++] = arr2.A[j];

    arr3->length = k;
    arr3->size = size + arr2.size;
    return arr3;    
}

/* Intersection sorted array */

Array* Array::Intersection(Array arr2){

    int i,j,k;
    i = j = k = 0;
    Array *arr3 = new Array(length+arr2.length);

    while (i < length && j < arr2.length)
    {
        if(A[i] < A[j]) 
            i++; 
            /*
            if elements in first array are less then the second array then just move i  
            */
        else if(arr2.A[j] < A[i]) 
            j++;
            /* if elements in second array is less then first array's element
            then just move
            */ 
        else if(A[i] == arr2.A[j])
        {
            arr3->A[k++] = A[i++];
            j++;
            /*
                if elements in both the arrays are equal then simpley copy them into the 
                third array.
            */
        }      
    }

    arr3->length = k;
    arr3->size = size + arr2.size;
    return arr3;    
}

/* Difference in Sorted Array */
Array* Array::Difference(Array arr2){
    int i,j,k;
    i = j = k = 0;
    Array *arr3 = new Array(length+arr2.length);

    while (i < length && j < arr2.length)
    {
        if(A[i] < arr2.A[j]) 
            arr3->A[k++] = A[i++];
        else if(arr2.A[j] < A[i])
            j++;
        else{
            i++;
            j++;
        }      
    }

    for(;i<length; i++) 
        arr3->A[k++] = A[i];

    arr3->length = k;
    arr3->size = size + arr2.size;
    return arr3;    
}


int main(){
  
  /* instance of the class */
  Array *arr;
  int arraySize,index,element,ch;
  cout<<"Enter the size of the array"<<endl;
  cin>>arraySize;
  arr = new Array(arraySize); // allocate memory dynamically

  do
  {
  cout<<"Menu"<<endl;
  cout<<"1. Insert"<<endl;
  cout<<"2. Delete"<<endl;
  cout<<"3. Search"<<endl;
  cout<<"4. Sum"<<endl;
  cout<<"5. Display"<<endl;
  cout<<"6. Exit"<<endl;

  cout<<"Enter your choice"<<endl;
  cin>>ch;
  switch (ch)
  {
  case 1:
    cout<<"Enter an index and element"<<endl;
    cin>>index>>element;
    arr->InsertElement(index,element);
    break;
  case 2:
    cout<<"Enter the index of the element you want to delete"<<endl;
    cin>>index;
    cout<<"Deleted element is "<<arr->DeleteElement(index);
    break;
  case 3:
   cout<<"Enter the element you want to search"<<endl;
   cin>>element;
   cout<<"Element found at "<<arr->LinearSearch(element)<<endl;
   break;
  case 4:
   cout<<"Sum of elements "<<arr->Sum()<<endl;
   break;
  case 5:
    arr->DisplayElement();
    break;
  }
  }while(ch<6);
  
/*
    Here we have added only few programs, we can add all the operations on array that 
    to make a menu driven program.

*/



/* Array operations */
//   cout<<"Display"<<endl;
//   arr->DisplayElement();
//   arr->InsertElement(4,15); 
//   arr->AppendElement(17);   
//   arr->AppendElement(18); 
//   arr->AppendElement(19); 
//   cout<<("Deleted elements:"<<arr->DeleteElement(2))<<endl;
//   cout<<("Display: ");
//   arr->DisplayElement();
//   cout<<"Iterative:Sum of elements"<<arr->Sum())<<endl;  
//   cout<<"Recursive:Sum of elements "<<arr->RSum(A,5));  
//   cout<<"Average "<<arr->Avg());
//   cout<<"Set Operations"<<endl;
//   arr->Set(9,100);
//   cout<<"Maximum "<<arr->Max());
//   cout<<"Minimum "<<arr->Min());
//   cout<<"Display"<<endl;
//   arr->DisplayElement();
//   cout<<"Iterative: Binary Search "<<arr->BinarySearch(100));
//   cout<<("Recursive: Binary Search "<<arr->RBinarySearch(A,A[0],length,5));
//   cout<<("Linear Search:Key found at: "<<arr->LinearSearch(100));
//   cout<<("Transposition:Key found at: "<<arr->LSTransposition(100));
//   cout<<("MoveToHead:Key found at: "<<arr->LSMoveToHead(15));
//   cout<<("Display: ");
//   arr->DisplayElement();

return 0;

}