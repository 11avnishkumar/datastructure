#include<iostream>
using namespace std;
int x = 0; // global variable
int fun(int n){
    if(n>0){
        x++;
        return fun(n-1) + x;
    }
    return 0;
}
int main(){
    int result,x = 5;
    // First call
    result = fun(x);  
    cout<<result<<endl; // output = 25

    // Second call
    result = fun(x);
    cout<<result<<endl; // output = 50

    // Third call
    result = fun(x);
    cout<<result<<endl; // output = 75 
    return 0;
}

/*

The above function called three times and the result will we get is 25 ,50 and 75
we can debug the program and can see the reason of it.
*/
