#include<iostream>
using namespace std;
int main(){
    for(int rows = 0; rows < 6; rows++){
        for(int cols = 0; cols<6; cols ++){
            if(rows+cols>6-1)
                cout<<"* ";       
        }
        cout<<endl;
    }
    return 0;
}