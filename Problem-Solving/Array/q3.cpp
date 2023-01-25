/* 
Finding multiple Missing element from the sorted array.
*/
#include<iostream>
using namespace std;

int main(){
    int prevResult;
    int currentResult;
    int i=0;
    int A[11]={10,11,12,13,14,15,16,17,19,25};
    prevResult = A[0] - 0;
    for(int i=0; i<11; i++){
        currentResult = A[i] - i; 
        if(prevResult != currentResult){
          while(prevResult < A[i] - i){
            cout<<prevResult + i<<" ";
            prevResult++;
          }
          
        }
    }
    return 0;
} 
