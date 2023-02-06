#include<iostream>
using namespace std;
int main(){
    
    for(int rows=0;rows<5;rows++){
        for(int cols = 0; cols<5; cols++){
            if(cols>=rows)
                cout<<"*";
            else
                cout<<" ";           
        }
        cout<<endl;
    }
    return 0;
}