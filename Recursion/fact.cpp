/* 
Write a Program to implement factorial using Recursion 
*/
#include<iostream>
using namespace std;

int fact(int n){
    if(n==0)
        return 1;
    return fact(n-1)*n;
}

int factorial(int n){
    int f=1;
    int i;
    for(i=1;i<=n;i++)
        f*=i;
    return f;
}

int main(){
    int r;
    r = fact(5);
    cout<<factorial(5)<<endl;
    cout<<r<<endl;
    return 0;
}



/* 

System has also built in stack if the fact() will go into
an infinite loop then at some point when the stack is overflow 
then it will stop 

*/ 