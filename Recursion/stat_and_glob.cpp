// Simple program to demonstate the working of recursion
#include<iostream>
using namespace std;
int fun(int n){
    if(n>0){
        return fun(n-1) + n;
    }
    return 0;
}
int main(){
    int result,x = 5;
    result = fun(x);
    cout<<result<<endl;
    return 0;
}
// output => 15
