/* 
counting Number of words in a sentance
*/
#include<iostream>
using namespace std;
int main(){
    char *string;
    int i,word=0;
    cout<<"Enter the string"<<endl;
    gets(string);
    for(i=0; string[i]!='\0'; i++){
        if(string[i] == ' ' && string[i-1]!=' ')
            word++;
    }
    cout<<word + 1<<endl;
            
    return 0;
}