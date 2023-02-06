/* 
Finding a misssing element in an sorted array that is if the element
in an array of first N natural number.
*/
#include<iostream>
using namespace std;

int sum(int A[],int n){
    int sum = 0;
    for(int i = 0; i<n; i++)
      sum += A[i];
    return (n * ( n + 1 )  / 2) - sum;  
}

int main(){

  int A[10] = {1,2,3,4,5,6,7,8,9};

  cout<<sum(A,10)<<endl;

}