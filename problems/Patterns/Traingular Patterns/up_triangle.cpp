#include<iostream>
using namespace std;
/* Write a program to print the star patterns */
int main(){
    for(int rows=0; rows<6; rows++){
        for(int cols=0; rows>=cols; cols++){ 
              cout<<"* ";
        }
        cout<<endl; 
    }    
    return 0;
}


/*
Follwing Output will be generated

* 
* *
* * *
* * * *
* * * * * 
* * * * * *

*/
