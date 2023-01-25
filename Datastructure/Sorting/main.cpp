#include <iostream>
using namespace std;
class Sorting{
private:
    static void Swap(int *x,int *y);
    static int Partition(int A[], int l, int h);
    static int FindMax(int A[],int n);
public:
    static void BubbleSort(int arr[],int n);
    static void InsertionSort(int arr[],int n);
    static void SelectionSort(int A[],int n);
    static void QuickSort(int A[],int l,int h);
    static void MergeSort(int A[],int B[],int m,int n,int C[]);
    static void IMergeSort(int A[], int n);
    static void Merge(int A[],int l,int mid,int h);
    static void RecursiveMergeSort(int A[],int l,int h);
    void CountSort(int A[],int n);
    // Display method
    static void Display(char str[],int A[],int n);
};


// Swapping of two numbers
void Sorting::Swap(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
// Find Maximum element from the array
int Sorting::FindMax(int A[],int n){
    int maximum = INT32_MIN;
    for (int i = 0; i < n; ++i) {
      if(A[i] > maximum)  maximum = A[i];
    }
    return maximum;
}
// Bubble sorting
void Sorting::BubbleSort(int arr[],int n){
    int i,j;
    int flag;
    for (i = 0; i < n-1; i++)
    {	flag=0;
        for (j = 0; j < n-1-i; j++)
        {
            if(arr[j]>arr[j+1]){
                Swap(&arr[j],&arr[j+1]);
                flag = 1;
            }
        }
        if(flag==0) break;
    }
}


// Insertion Sort
void Sorting::InsertionSort(int arr[],int n) {
    int j=0;
    int x = 0;
    for (int i = 1; i < n; ++i) {
        j= i-1;
        x = arr[i];
        while (i>-1 && arr[j]>x){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = x;
    }
}


// Selection Sort
void Sorting::SelectionSort(int A[], int n) {
    int i ,j,k;
    for (i = 0; i < n-1; ++i) {
        j=k=i;
        while(j < n){
            if(A[j] < A[k]) k=j;
            else j++;
        }
        Swap(&A[i],&A[k]);
    }
}


// Partition
int Sorting::Partition(int A[], int l, int h){
    int pivot = A[l];
    int i = l,j=h;
    do{
        do{i++;}while(A[i]<= pivot);
        do{j--;}while(A[j]>pivot);
        if(i<j) Swap(&A[i],&A[j]);
    }while(i<j);
    Swap(&A[l],&A[j]);
    return j;
}

// Quick sort
void Sorting::QuickSort(int A[],int l,int h){
    int j;
    if (l<h)
    {
        j= Partition(A,l,h);
        QuickSort(A,l,j);
        QuickSort(A,j+1,h);
    }
}

// MergeSort
// Elements must be sorted in merge sort
void Sorting::MergeSort(int A[],int B[],int m,int n,int C[]){
    int i=0,j=0,k=0;
    while(i<m && j<n){
        if(A[i] < B[j]) C[k++] = A[i++];
        else  C[k++] = B[j++];
    }
    // Copy leftover elements
    for(; i<m; i++) C[k++] = A[i];
    for(; j<n; j++) C[k++] = B[j];
}

// Merging a two list into a single sorted list
// Here two list means both the list will be in a single array
void Sorting::Merge(int A[], int l, int mid, int h) {
    int  i = l, j = mid+1, k=l; // k will also start from the low because we don't in which part of the array, low will fall.
    int B[100];
    while(i<=mid && j<=h) {
        if (A[i] < A[j]) B[k++] = A[i++];
        else B[k++] = A[j++];
        }
        for(; i<=mid; i++) B[k++] = A[i];
        for(; j<=h; j++) B[k++] = A[j];
        // copy all the elements back to A
        for (i = l; i<=h ; i++) A[i] = B[i];
}

// Iterative Merge Sort
void Sorting::IMergeSort(int A[], int n){
    int p,l,h,mid,i;
    for(p=2; p<=n; p=p*2){
        for(i=0; i+p-1<n; i=i+p){
            l=i;
            h=i+p-1;
            mid = (l+h)/2;
            Merge(A,l,mid,h);
        }
    }
    if(p/2 < n) Merge(A,0,p/2-1,n);
}

// Recursive Merge Sort
void Sorting::RecursiveMergeSort(int A[],int l,int h){
    int mid;
    if(l<h){
        mid = l;
        RecursiveMergeSort(A,l,mid);
        RecursiveMergeSort(A,mid+1,h);
        Merge(A,l,mid,h);
    }
}


// Count Sort.
void Sorting::CountSort(int A[],int n) {
    int max,i,j,*c;
    max = FindMax(A,n);
    c = new int[max+1];
    for (i=0; i < max+1; i++) c[i] = 0;
    for (i=0; i < n; i++) c[A[i]]++;
    i=0,j=0;
    while(i<max+1){
        if(c[i]>0){
            A[j++] = i;
            c[i]--;
        }else i++;
    }
}
// Display method
void Sorting::Display(char str[],int A[],int n) {
    printf("%s ",str);
    for (int i = 0; i < n; ++i)
    {
        printf("%d ",A[i]);
    }
    printf("\n");
}


// Main Method
int main()
{
       Sorting s; /* Instance of the sorting class */
//     Input for Quick Sort
//     int A[] = {3,7,9,10,6,5,12,4,11,2,10,INT32_MAX},n=12;
//     input for mergeSort method
//     int B[] = {7,9,10,12,17,25},m=6;
//     int D[] = {2,3,4,5,6,7},n=6;
//     int C[m+n]={0}; // empty array

    int A[] = {3,7,9,10,6,5,12,4,11,2},n=10;

//  Bubble sort
//    s.BubbleSort(A,n);
//    s.Display("Bubble Sort",A,n);
//    Insertion Sort
//    s.InsertionSort(A,n);
//    s.Display("Insertion Sort",A,n);
//  Selection Sort
//    s.SelectionSort(A,n);
//    s.Display("Selection Sort",A,n);
//    s.QuickSort(A,0,n-1);
//    s.Display("Quick Sort",A,n);
//    s.MergeSort(D,B,m,n,C);
//    s.Display("Merge Sort",C,m+n);
//    s.Merge(A,0,((0+n-1)/2),n-1);
//    s.Display("Merge",A,n);

//      Iterative Merge Sort
//        s.IMergeSort(A,n);
//        s.Display("Iterative Merge Sort",A,n);

//      Recursive Merge Sort
//        s.RecursiveMergeSort(A,0,n-1);
//        s.Display("Recursive Merge Sort",A,n);
//     Count Sort
          s.CountSort(A,n);
          s.Display("Count Sort",A,n);
    return 0;
}
