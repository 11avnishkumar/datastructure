// Write a program to find GCD of two number
#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter two number:";
    cin>>m>>n;
    while(m!=n){
        if(n>m)
         n = n - m;
        else if(m>n)
         m = m - n;
    }
    cout<<"The gcd of two number is: "<<m<<endl;
    //We can put m or n any variable to get the answer because they both variable will
    //equal at the end
    return 0;
}
