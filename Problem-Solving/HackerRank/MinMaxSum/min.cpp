#include<bits/stdc++.h>
using namespace std;

void MiniMaxSum(vector<int> &arr){
int long min=0; // to store minimum value
int long max=0; // to store the maximum value
sort(arr.begin(),arr.end());
for(int i=0; i<arr.size()-1; i++){
	min += arr[i];
	max += arr[arr.size()-1-i]; // very important
  	
 }
 cout<<min<<" "<<max<<endl;
}

int main(){
	vector<int> arr; // store the standard console elements

	int element;
	/* read all the values from the standard console */
	for(int i=0; i<5; i++){
		cin>>element;
		arr.push_back(element);
	}

	MiniMaxSum(arr);
	return 0;
}