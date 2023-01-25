/* 
Implementation of counting vowels and consonants
*/

#include<iostream>
using namespace std;
int main(){
    char *string;
    int i,vCount=0,cCount=0;
    cout<<"Enter the string"<<endl;
    gets(string);

    for(i=0; string[i] != '\0'; i++){

    if(string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u'|| string[i] == 'A' || string[i] == 'E' || string[i] == 'I' || string[i] == 'O' || string[i] == 'U')
        vCount++;
    else if(string[i]>=65 && string[i] <=90 || string[i]>=97 && string[i] <=122)
        cCount++;
    }
    cout<<vCount<<"vowels "<<cCount<<"consonants"<<endl;
    
return 0;
}