#include<iostream>
using namespace std;
int main(){
    // webkul pattern
    // Time limit 60mins
    // user input
    int n; 
    // cout<<"Enter the n!Please enter only odd n and must be greater then 1: ";
    // cin>>n;
    n = 5;

    int mid = (n+1)/2; // to print the vertical @
    for(int i=1; i<=n+2; i++){
        for(int j=1; j<=n+2; j++){
            if(i==1)
            printf("@ ");
        }
    }
    printf("\n");
    for(int i=1; i<=n+1; i++){
        for(int j=1; j<=n+2; j++){
            if(j==n+3-i || j>n+2-i)
            printf("* ");
            else
            printf("  ");
        }
        for(int j=2; j<=n+2; j++){
            if(i==j || i>=j)
            printf("* ");
            else
            printf("  ");
        }
        printf("\n");
    }
                
return 0;    
}
