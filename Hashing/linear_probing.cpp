#include<iostream>
#include<vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
class Hashing{
  //constructor
public:
  Hashing(int size){
    vector<int> hashTable{size};
  }
    
private:
  // hash fuction
  int hashFunction(int key){ return key % 10; }

  int probe(int element){
    for (int i = 0; i < hashTable.size(); i++) {
      int index = (hashFunction(element)+i) % 10;
      if(hashTable[index] == 0) return index;
    }
  }


  void Insert(int element){
    // calculate the element and store the element
   int index = hashFunction(element);
   if(hashTable[index] != 0){
      probe(element);
    }
   hashTable[index] = element;
  }
};

int main(){
  Hashing h(10);
  h.Insert(10);
  return 0;
}
