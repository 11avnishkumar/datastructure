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
            if(i == mid || j == mid ||(j==n && i>=mid /* for horizontal */) ||  /*for top right*/(i==1 && j>=mid) || (j==1 && i<=mid) || (i==n && j<=mid)/* below bottom left*/ )
                printf("# ");
            // To print the stars we have used it.
            // Explanation mid + 1 and mid - 1 print the stars after the vertical line and before the horizontal line respectively.
            // i == mid + 1 and i == mid - 1 print the line after and before the horizontal line respectively.
            else if(
                ((i && j == mid+1)&& i==mid-1) || ((i && j == mid+1)&& i==mid+1) || ((i && j == mid-1)&& i==mid-1) || ((i && j == mid-1)&& i==mid+1)
                )
            printf("0 ");    
            else
                printf("  ");
    }
    cout<<endl;
    }
    return 0;
}