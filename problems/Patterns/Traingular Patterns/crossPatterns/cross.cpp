#include<iostream>
using namespace std;
int main(){
    // First Pattern
    for(int i=1; i<=6; i++){
        for(int j=i; j<=6; j++){
            if(j==6 || i==1 || i==j) // here n=6 so we directly uses 6 instead of n
                printf("# ");
            else
                printf("  "); 
        }
        cout<<endl;
    }

    // Second Pattern
    for(int i=1; i<=6; i++){
        for(int j=1; j<=6; j++){
            if(j==6 || i==1 || i==j) // here n=6 so we directly uses 6 instead of n
                printf("# ");
            else
                printf("  "); 
        }
        cout<<endl;
    }

    // Third pattern
    for(int i=1; i<=6; i++){
        for(int j=1; j<=i; j++){
            if(j==1 || i==6 || i==j) // here n=6 so we directly uses 6 instead of n
                printf("# ");
            else
                printf("  "); 
        }
        cout<<endl;
    }

    return 0;
}