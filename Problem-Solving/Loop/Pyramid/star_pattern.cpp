//Printing pyramid with condtion
#include<iostream>
using namespace std;
int main(){
    int rows,cols;
    cout<<"Enter the no of rows: ";
    cin>>rows; //this is for rows
    cout<<"Enter the no of cols: ";
    cin>>cols; //this is for columns
    for(int i=0; i < rows; i++){
        for(int j=0; j<cols; j++){
            if(i+j>rows)
                cout<<"* "; //if i + j > rows then print * otherwise print space(" ")
            else
                cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}