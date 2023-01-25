/* 
  Write a program to find whether the given number is prime or not
*/

#include<iostream>
using namespace std;

int checkForPrime(int number){
  int A[100] = {0};
  int i=2,index=0;
  while(i<number){
    if (i % 2 != 0){ 
        A[index] = i;
        index++;
      }
    i++;
  }
  for(int index=0; index< 100; index++){
    cout<<A[i]<<" ";
  }
  return 0;
}

int main(){
  int userInput;
  cout<<"Enter the number: ";
  cin>>userInput;
  checkForPrime(userInput);
}