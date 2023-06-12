#include<iostream>
using std::cout;
using std::cin;
using std::endl;
int fun(int n){
  static int i=1;
  if(n>=5) return n;
  n = n + i;
  i++;
  return fun(n);
}

int main(){
  cout<<fun(1)<<endl;
  return 0;
}
