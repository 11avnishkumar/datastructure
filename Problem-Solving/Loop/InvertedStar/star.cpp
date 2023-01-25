#include<iostream>
using namespace std;
int main(){
    // Printing inverted star patterns without condition
    //In this program we don't need the columns because we are using rows as columns 
    //we are printing one star less then the previus one
    int rows,cols;
    cout<<"Enter the no of rows: ";
    cin>>rows;
    // cout<<"Enter the no of cols: ";
    // cin>>cols;
    for(int i=0; i <=rows; i++){
        for(int j=0; j<rows-i+1; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}