#include<iostream>
#include<cmath>
using namespace std;
int main(){
// Patterns always work for odd number
int n = 7;
int mid = (n+1)/2;
// printf("%d",mid);
for(int i=1; i<=n; i++){
    for(int j=1; j<=n; j++){        
            if(i == mid || j == mid || i==j || j==n+1-i)
                printf("# ");
            else
                printf("  ");
    }
    cout<<endl;
    }
    return 0;
}