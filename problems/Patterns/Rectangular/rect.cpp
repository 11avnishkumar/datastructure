#include<iostream>
using namespace std;
int main(){
    for(int i=1; i<=6; i++){
        for(int j=1; j<=6; j++){
        if(i==1 || i==6 || j==1 || j==6)
            printf("# ");
        else
            printf("  "); // There will be two spaces on for # and one will be blank   
        }
        cout<<endl;
    }
    return 0;
}