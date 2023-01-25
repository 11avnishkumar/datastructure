#include<iostream>
using namespace std;
int main(){
int n = 7;
int counter = 0; // to where bottom @ will start printing the patterns
// Program to print the patterns
// print the @ symbol
for(int i=1; i<=n; i++){
    for(int j=1; j<=n; j++){
        if(i==1)
		printf("@");
	}
}
printf("\n"); // the next pattern will start from a new line.
// print the star pattern
for(int i=1; i<=n; i++){
// print the pattern but instead of pattern just print the blank spaces so it will push the patterns
for(int j=1; j<n; j++){
    // run the loop less then n;
		   printf(" ");
}
// then print the star pattern adjacent to the white space
for(int j=1; j<=i; j++){
		   printf("*");
}
printf("\n");
}
// for downward pyramid
// print the star pattern
// The outerloop will run n-1 times because we need to form the arrow shape otherwise the midline will printed twice
for(int i=1; i<=n-1; i++){
// print the pattern but instead of pattern just print the blank spaces so it will push the patterns
for(int j=1; j<n; j++){
    // run the loop less then n;
		   printf(" ");
}
// then print the star pattern adjacent to the white space
for(int j=n-1; j>=i; j--){
		   printf("*");
}
printf("\n");
}


// to print the @
counter = (n + 1)/2;
for(int i=1; i<=n; i++){
// print the @ smbols
// here we need to handle the space carefully
// first we need to print the spaces.
// we need to define also from where to where the spaces will print
for(int j=counter; j<=n-1; j++){
    // run the loop less then n-1;
		   printf(" ");
}
// This will print the @ after the spaces has been printed.
for(int j=1; j<=n; j++){
    if(i==1)
    printf("@");
    
    }
}
    return 0;
}