#include <iostream>
using namespace std;
class Heap{
public:
    void Insert(int H[],int n);
    void Display(int A[],int n);

};

// Insert Method
void Heap::Insert(int H[], int n) {
    int temp,i=n;
    temp = H[n];
    while(i>1 && temp>H[i/2]){
        H[i] = H[i/2];
        i = i / 2;
    }
    H[i] = temp;
}

// Display Heap
void Heap::Display(int A[], int n) {
    for (int i = 1; i<n; ++i) {
        printf("%d ",A[i]);
    }
    printf("\n");
}

// Main Method
int main() {
    Heap h;
    int H[] = {0,2,1,12,5,3,7};
    return 0;
}
