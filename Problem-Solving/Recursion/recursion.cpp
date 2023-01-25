#include<iostream>
using namespace std;
// Function for factorial
int fact(int n){
    if(n < 0 || n == 1)
       return 1; // factorial of 0 and 1 are == 1
    else
       return n * fact(n-1);
}

int main(){
    int fact(int n); // prototype
    int number;
    cout<<"Enter the factorial: ";
    cin>>number;
    cout<<fact(number)<<endl;
    return 0;
}
