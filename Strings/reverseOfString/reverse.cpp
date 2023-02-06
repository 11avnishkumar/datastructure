/* 
program to implement reverse of a string
There is two method of reversing a string 
1. Auxiliary array
2. Swapping method

We are doing swapping method here
*/

#include<iostream>
using namespace std;

int main(){
char *Userstring,temp;
int i,j;
cout<<"Enter the string"<<endl;
cin>>Userstring;
for(i = 0; Userstring[i] != '\0'; i++){} // this loop will be blank it used only to take i at the end of the string
i = i - 1;
for(j = 0; j<i; i--,j++)
{
 temp = Userstring[j];
 Userstring[j] = Userstring[i];
 Userstring[i] = temp;
}
cout<<Userstring<<endl;
return 0;
}