/* 
    Comparing a string and checking for a palindrome.
    There is two ways to check for palindrom 
    1. Auxiliary array method
    2. Swapping method
*/

#include<iostream>
using namespace std;
int main(){
    int i,j,k=0,l;
    char string[30];
    char string2[30];
    cout<<"Enter the string"<<endl;
    cin>>string>>string2;
    /* check whether two string is equal */
    for(i=0,j=0; string[i] !='\0' && string2[j] != '\0'; i++,j++){
        if(string[i] != string2[j])
            break;    
    }
    if(string[i] == string2[j]){
        cout<<"string is equal"<<endl;
        /* palindrome checking */
        while(string[k]!='\0') k++; //increment k unless it is equal to NULL characters
            k = k - 1;
            for(l=0,k;l< k; l++,k--){
                char temp;
                temp = string[l];
                string[l] = string[k];
                string[k] = temp;
            }
            cout<<string<<endl;
    } 
    else if(string[i] < string2[j]) cout<<"smaller"<<endl;
    else cout<<"Greater"<<endl;        
    return 0;
}


/* 
What is palindrome string?
if a reverse of a string is exactly same.
for example
jojo
nitin
madam and so on...
 */