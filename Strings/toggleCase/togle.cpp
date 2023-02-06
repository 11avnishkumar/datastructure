/* 
Program to implement toggle case for exampel "wELcOme"

 */
#include<iostream>
using namespace std;
int main(){
    int ch;
    int i;
    int result;
    char *string;
    do{
    cout<<"Menu"<<endl;
    cout<<"1. Upper Case String to Lower Case string"<<endl;
    cout<<"2. Lower Case String to Upper Case string"<<endl;
    cout<<"3. Exit"<<endl;
    cout<<"Choose Menu"<<endl;
    cin>>ch;
    switch(ch){
        case 1:
             cout<<"Enter the string in Upper Case"<<endl;
             cin>>string;
             for(i=0; string[i] != '\0'; i++){
                if(string[i]>=65 && string[i]<=90)
                    string[i] = string[i] + 32;
             }
             cout<<"string is "<<string<<endl;
             break;
        case 2:
             cout<<"Enter the string in Lower Case"<<endl;
             cin>>string;
             for(i=0; string[i] != '\0'; i++){
                if(string[i]>=97 && string[i]<=122)
                string[i] = string[i] - 32;
             }
             cout<<"string is "<<string<<endl;
             break;     
    }
   }while(ch<3); 
}