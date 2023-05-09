#include<iostream>
#include<vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
class Hashing{
private:
  int hashfunction(int key){ return key % 10; }
  //constructor
public:
  Hashing(int size){
    vector<int> linearProbing{size};
  }
  void Insert(int element){

  }
}
