#include<iostream>
using namespace std;
 int main(){
    char *string;
    int i;
    cout<<"Enter the string"<<endl;
    cin>>string;
    for(i=0; string[i] != '\0'; i++){}
    cout<<"Length of String is "<<i<<endl;

    return 0;
 }