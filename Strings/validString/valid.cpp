/* 
Program to implement daigonal matrix
*/

#include<iostream>
using namespace std;
int isValid(char *name){
for(int i=0; name[i] != '\0'; i++){
    if(!(name[i]>=65 && name[i] <=90) && !(name[i] >= 97 && name[i] <= 122))
        return 0;
}
return 1;
}

int main(){
char *Userstring;
int result;
cout<<"Enter the string"<<endl;
cin>>Userstring;
cout<<"Your string"<<Userstring<<endl;
result = isValid(Userstring);
if(result) cout<<"valid String"<<endl;
else cout<<"Invalid string"<<endl;
return 0;
}