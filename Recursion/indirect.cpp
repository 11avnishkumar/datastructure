/* 
Program to show the concept of indirect recursion
*/
#include<iostream>
using namespace std;

void funB(int n);
// Function A
void funA(int n){
    cout<<n<<endl;
    funB(n - 1);
}

// Function B
void funB(int n){
    if(n > 1){
    cout<<" "<<n;
    funA(n / 2);
    }
}

int main(){
    funA(20);
    return 0;
}
