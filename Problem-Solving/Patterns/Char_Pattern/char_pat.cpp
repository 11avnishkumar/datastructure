#include<iostream>
using namespace std;
int main(){
  int order_of_matrix;
  cout<<"Enter the Matrix rows: "<<endl;
  cin>>order_of_matrix;
  for(int rows = 0; rows<order_of_matrix; rows++){
    int ascii_char = 65;
      for(int cols = 0; rows>=cols; cols++){
        cout<<(char)ascii_char;
        ascii_char++;
      }
      cout<<endl;
  }
  return 0;
}
/*

// The above pogram will give us the following output

A
AB
ABC
ABCD
ABCDE....
....

*/
