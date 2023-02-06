#include<iostream>
using namespace std;
int main(){
    // webkul pattern
    // Time limit 60mins
    // user input

    // This program in incomplete right now****
    int n; 
    // cout<<"Enter the n!Please enter only odd n and must be greater then 1: ";
    // cin>>n;
    n = 5;

    int mid = (n+1)/2; // to print the vertical @
    for(int i=1; i<=n+n+1; i++){
        for(int j=1; j<=n; j++){
            if(i==(n+n+2)/2)
            printf(" ");
            else
            printf("*");
        }
        for(int j=1; j<=n; j++){
            if(i==(n+n+2)/4 || i==(((n+n+2)/4)+((n+n+2)/4)+((n+n+2)/4)))
            printf("@");
            else
            printf(" ");
        }

        for(int j=1; j<=n; j++){
            if(i==(n+7)/2 || (j==1 && i>=(n+n+2)/4) && i<=(((n+n+2)/4)+((n+n+2)/4)+((n+n+2)/4)))
            printf("*");
            else
            printf(" ");
        }
        for(int j=1; j<=n; j++){
            if(i>=(n+n+2)/4 && i<=(((n+n+2)/4)+((n+n+2)/4)+((n+n+2)/4)))
            printf("@");
        }
        printf("\n");
    }
    
                
return 0;    
}
