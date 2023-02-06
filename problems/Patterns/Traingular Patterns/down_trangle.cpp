#include<iostream>
using namespace std;
// Program to print patterns
int main(){
    for(int rows=0;rows<6;rows++){
        for(int cols=0;cols<6;cols++){
            if(cols>=rows)
              cout<<"* ";   
        }
        cout<<endl;
    }
    return 0;
}

/*
Follwing Output will be generated
* * * * * *
* * * * *
* * * *
* * *
* *
*
*/