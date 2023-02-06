#include<iostream>
using namespace std;
int fun(int n){
    static int x = 0; // static variable
    if(n>0){
        x++;
        return fun(n-1) + x;
    }
    return 0;
}
int main(){
    int result,x = 5;
    result = fun(x);
    cout<<result<<endl;
    return 0;
}
