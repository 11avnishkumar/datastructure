// This is a open hashing as we have consumed extra spaces for storing the element
// to prevent collision 
// The extra space is linked list
#include<iostream>
#include<vector>
#include<list> /* linked list or chains*/
using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::list;
class Hashing{
  // declare the array of linkedlist
  vector<list<int>> hashTable{10}; // will store 10 linked list
  // private method
  int hashfunction(int key){ return key % 10; }
  // The index returned by hashfunction will be stored in a hashtable
public:
  // insert method
  void insert(int element){
  hashTable[hashfunction(element)].push_front(element);
  }
  // delete method
  int deleteElement(int element){
   return 0; 
  }
  // display hashTable
  void display(){
  for (int i = 0; i < hashTable.size(); i++) {
    cout << "Elements at index " << i << ": ";
    for (auto it = hashTable[i].begin(); it != hashTable[i].end(); ++it)
      cout << *it << " ";
    cout << endl;
  } 
  }

  // Searching 

 list<int>::iterator search(int key) {
    int index = hashfunction(key);
    for (auto it = hashTable[index].begin(); it != hashTable[index].end(); ++it) {
        if (*it == key) {
            return it;
        }
    }
    return hashTable[index].end();
}

};

int main(){
  Hashing h;
  h.insert(16);
  h.insert(12);
  h.insert(25);
  h.insert(39);
  h.insert(6);
  h.insert(122);
  h.insert(35);
  h.insert(68);
  h.insert(75);
  h.deleteElement(10);
  h.display();
  auto it = h.search(10);
  cout << *it << endl;
  return 0;
}
