/* 
    Method 2:
    Finding the single missing element from an sorted array.
*/
#include<iostream>
using namespace std;

int main(){
    int prevResult;
    int currentResult;
    int i=0;
    int A[10]={10,11,12,13,14,15,16,17,19};
    prevResult = A[0] - 0;
    for(int i=0; i<10; i++){
        currentResult = A[i] - i; 
        if(prevResult != currentResult){
          cout<<"Number is Missing "<<(prevResult+i)<<endl;     
          break;
        }
    }
    
  return 0;
}