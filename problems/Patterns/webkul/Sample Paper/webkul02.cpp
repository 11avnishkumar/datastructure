#include<iostream>
using namespace std;
int main(){
int n = 5;
int counter = 0; //add two in counter every time cunter + 2
// Program to print the patterns
// print the e symbol
for(int i=1; i<=n; i++){
    for(int j=1; j<=n; j++){
        if(j==1)
		printf("e");
	}
printf("\n");

}
// second loop
counter = (n + 1)/2; // to start the loop

for(int i=1; i<=counter+2; i++){
    for(int j=1; j<=n; j++){
        if(j==1)
		printf("e");
	}
// then print the star pattern adjacent to the white space
for(int j=1 ; j<=i; j++){
		   printf("0");
}
for(int j=1; j<i; j++){
        //    if(i%2 !=0)
		   printf("*");
}

printf("\n");

}

return 0;
}