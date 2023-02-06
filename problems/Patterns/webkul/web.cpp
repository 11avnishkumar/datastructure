#include<iostream>
using namespace std;
int main(){
    // webkul pattern
    // Time limit 60mins
    // user input
    int n; 
    cout<<"Enter the Number!Please enter only odd n and must be greater then 1: ";
    cin>>n;


    int mid = (n+1)/2; // to print the vertical @
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n+2; j++){
            printf("e");
        }
        printf("\n");
    }
    // for vertical @ and horizontal @
    // here the outer forloop will be run for n + 2 times.
    // and inner foloop also run for n +2 times.
    for(int i=1; i<=n+2; i++){
        // for vertical @
        for(int j=1; j<=n+2; j++){
            if(j==mid+1) // These two condition must be handled gracefully
            printf("@");
            if(j<=mid) // This condition must be handled carefully otherwise below pattern will not work properly,The spaces will be printed left side of the vertical line.
            printf(" ");
        }
        // below loop is for horizontal @
        // for horizontal @ will run n+1 times,that is even times.
        // The below loop start immidiately after the vertical @
        for(int j=1; j<=n+1; j++){
            if(i==n+2)
            printf("@");
            else
            printf(" ");
        }
        // start printing the arrow whatever the mid value  + 2
        // mid + 2,this we have done because as n of odd input will increase the upper half of the arrow will move in upward direction.Therefore we must start the arrow after calculating the horizontal @ and then we decide from where to start the j loop.
        for(int j=mid+2; j<=i; j++){
            printf("#");
        }
        printf("\n");
    }
    /* Start of downward pyramid */
    /*
    Print the white spaces first
    */
    for(int i=1; i<=n+2; i++){
        // for vertical @
        for(int j=1; j<=n+2; j++){
            if(j==mid+1) // These two condition must be handled gracefully
            printf(" ");
            if(j<=mid) // This condition must be handled carefully otherwise below pattern will not work properly,The spaces will be printed left side of the vertical line.
            printf(" ");
        }
        // start printing the arrow whatever the mid value is,otherwise it will print the mid line twice.
        // if you don't understand just remove the mid from the bottom and use any n from 1 onwards.
        for(int j=1; j<=n+1; j++){
            if(i==n+2)
            printf(" ");
            else
            printf(" ");
        }
        for(int j=mid; j<=n-i; j++){
            printf("#");
        }
        printf("\n");
    }
            
return 0;    
}
