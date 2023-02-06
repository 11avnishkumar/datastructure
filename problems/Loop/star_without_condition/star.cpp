#include<iostream>
using namespace std;
int main(){
    // Printing star patterns without condition
    int rows,cols;
    cout<<"Enter the no of rows: ";
    cin>>rows;
    // cout<<"Enter the no of cols: ";
    // cin>>cols;
    for(int i=0; i <=rows; i++){
        for(int j=0; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}