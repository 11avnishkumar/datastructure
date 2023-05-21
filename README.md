<!-- TOC -->
* [Introduction to Datastructures](#introduction-to-datastructures)
  * [What is a data structure?](#what-is-a-data-structure)
  * [Recursion](#recursion)
  * [Array](#array)
  * [String](#string)
  * [Matrices](#matrices)
  * [Linked List](#linked-list)
    * [Array Vs Linked List](#array-vs-linked-list)
    * [Comparison of Linked List](#comparison-of-linked-list)
  * [Stack](#stack)
  * [Queue](#queue)
  * [Tree](#tree)
  * [Graph](#graph)
  * [What is STL?](#what-is-stl)
<!-- TOC -->

# Introduction to Datastructures
Data Structure is -
A way to store elements so that they can be used efficiently and effectively.

## Recursion

  * When a function call itself then it is called recursion.

  * Recursion is costly because it uses stack internally.

## Array

* Array stores element in memory at contigious location.

* If we are not sure whether there is space avilable to store further element then how we do so that is why we say that size of aray can not be increased.

* Once array is declared with the specified size then it can not be increased on decreased later.

* To Increase the size of array there is only option that is create a new array and transfer all the elements from previous array to this new array.

* Note: We must delete the unused dynamic memory otherwise it will cause memory leakage problem.

* Operations on Array
  * Append
    * insert element at the end only.
  * Insert
  * Insert Only at Sorted Position
  * Display
  * Delete
  * Avg
  * Sum
  * Get
  * Set Replaces the element
  * Min
  * Max
  * Search (Liner and Binary)
  * Concatenate
  * Merge
  * Set Opeations on Array(Union,Intersection,Difference)
  * Reverse
    * Array can be reverse using two methods  
      * Method 1: With using an Auxiliary array
      * Method 2: In this method, first element is swapped with the last element and second with second last and third with third last and so on.
  * Rotation
    * Copy first element to the end of the array and it will continue.
    * Flashing the content on the LED screen is one of the example.
  * Shifting (Left Shift and Right Shift)
    * In shifting we loose element of either side if we shift left the we loose left element and if we shift right then we loos right element.

| Operations on Array       | Time Complexity | Space Complexity |
|:--------------------------|:----------------|:-----------------|
| Append                    | O(1)            | O(1)             |
| Insert                    | O(n)            | O(n)             |
| Insert at sorted position | O(n)            | O(n)             |
| Delete                    | O(1)            |
| Sum/Recursive             | O(n)            | O(1)/O(n)        |
| Min                       | O(n)            |
| Max                       | O(n)            |
| Merge                     | O(m+n)          |
| Union                     | O(n^2)          |
| Intersection              | O(n^2)          |
| Difference                ||

## String

What is character set and ASCII codes?

* It is the set of code that are supported by various programming languages.
* we know that computer only support binary language then how a computer can understand
  characters.
* For every characters there is predefined number associated that is what we know as ASCII codes.
* Those Numbers are standard number and every electronics device must follow and those numbers are only meant for electronic device communication.

| ASCII Codes | Description                                                                                                                                     |
|:------------|:------------------------------------------------------------------------------------------------------------------------------------------------|
| A-Z, 65-90  | Upper Case alphabets                                                                                                                            |
| a-z, 97-122 | Lower Case alphabets                                                                                                                            |
| 0-9, 48-57  | For Numerical value                                                                                                                             |
| Note:       | Apart from above characters there are some special characters available for like (,),?,+,-,`*` and son on.                                        |
| Note        | There are total 128 ASCII characters that is from  0 - 127 ASCII characters are availble.To represent a single ASCII characters it take 7 bits. |

* Unicode's - are represented using 2 byte memory that is 16-bit.  
* Unicode's supports all the english, hindi, mathematics etc.
* For more info about unicode [visit](https://unicodes.org).  
* Example

```c++
/* Ways to store characters */
#include<iostream>
using namespace std;
int main(){
char A[5] = {'A','B','C',0,0}; /* Initialization + Declaration, In memory their ASCII values will be stored.
*/
char A[] = {'A','B','C'} // it will takes the size of the arra according to the number of elements in the array.

/*
  Working with array of characters
*/

char name[10] = {'j','o','h','n',0,0,0,0,0,0}; // rest are initialized with zeroes.


/*
Working with string
*/

char name[10] = {'j','o','h','n','\0',0,0,0,0,0}; // Now the array of characters became string.

char name[] = {'j','o','h','n','\0'};
char name[] = "john"; // string delimeter automatically will be added.
char *name = "john" // this one will be created in Heap even though we didn't initialized it wih new or malloc.

/*

'\0' The NULL character is known by following name:

1. String Delimeter
2. End of the string
3. Null character
4. String terminator

*/

/*  very important note
if string declared like using pointer method "char *string" this can cause problem because some compiler treat string as immutable that is they can't be changed.

To overcome with the above problem we have to use the traditional method which array of characters

char name[20] // this will solve the above problems

*/

}
```
## Matrices

What is Matrices?  

* A matrices are an array of some kind of elements.  
* Matrix used to represent statistical data.
* Matrix mostly used in the field of computer science to represent various type of data.

What is Diagonal Matrix?
A matrix having all the elements are zero except the daigonal.

Representation of Matrix?
Generally Matrix represented in 2D array in computer.

What is Lower Triangular Matrix?
* A matrix which have Upper Traingular elements are all zero and lower elements are all Non-zero.
* Lower Triangular Matrix can be represented using two ways:
  * Row Major Mapping
  * Column Major Mapping

## Linked List

Why Linked List?

* Linked List is used to store any type of elements unlike arrays which stores element from same domain.

* Linked List is fast as compare to array.

* Flexible as compared to array.

* It can grow and shrink on demand.

### Array Vs Linked List

| Parameters                         | Array                                                                                                 | Linked List                                                |
|:-----------------------------------|:------------------------------------------------------------------------------------------------------|:-----------------------------------------------------------|
| Size                               | Arrays have limited size.                                                                             | Linked List can grow and shrink dynamically.               |
| Data Type                          | Array stores only same type of element.                                                               | Linked List can store any type of data.                    |
|| Array is primitive datastructures. | Linked List is Derived.                                                                               |     |
| Type                               | Array is a linear datastructure.                                                                      | Linked List is also a linear datastructure.                |
| Nature                             | Physical datastructure                                                                                | Physical datastructure                                     |
| Memory Allocation                  | Created in stack                                                                                      | It is always created in Heap                               |
| Accessing                          | Random access, And Faster                                                                             | No Random access, And Slower                               |
| Space                              | No extra Space                                                                                        | extra space for string next node address                   |
| Insertion and Deletion             | In left side insertion in Array takes O(n),need to shift the element,and for the right it always O(1) | left side O(1) and right side O(n), because of traversing. |

| Operations on Linked List | Time Complexity | Space Complexity |
|:--------------------------|:----------------|:-----------------|
| Append                    | O(n)            | O(1)             |
| Insert At the begining    | O(1)            | O(1)             |
| Insert At the middle      | O(1)            | O(1)             |
| Insert At the end         | O(n)            | O(1)             |
| Display/Recursive         | O(n)/O(n)       | O(1)/O(n)        |
| Delete first Node         | O(1)            | O(1)             |
| Delete last Node          | O(n)            | O(1)             |
| Sum/RSum                  | O(n)/O(n)       | O(1)/O(n)        |
| Max/RMax                  | O(n)/O(n)       | O(1)/O(n)        |
| Counting Node/RCount      | O(n)/O(n)       | O(1)/O(n)        |

Types of Linked List?
1. Singly Linked List
2. Doubly Linked List
3. Circular Linked List

Creating a very first Node in Linked List

**Singly Linked List**

1. Create pointer of type Node called `head` and assigned it to NULL value.  
2. Then create a separate node again filled it with data.  
3. Then link the node with previously created Node.  
4. Make the last Node point to Newly created Node.  
5. Repeat step 2 to 4.  
  Note: Even we can do step 3 and then go for step 4, this work same either link the node head and then fill the data or fill the data and then link the node.

**Reverse a Linked List**

* There is two method of reversing a liked list.
  * Reverse a linked list using reversing elements, In revesing element we takes first element of first Node and interchange it with the Last Node and so on.
  But this approach is not good we prefer revering linkes rather then reversing data itself, as movement of data can be problamatic, right now we have integer data suppose we have float and other data it could be create problem to move them.
* Reversing a linked list using sliding pointers or reversing links
* Reverse a linked list using recursion.
  * we will take and tail pointer that will follow the head pointer.

**Searching Method**

* Here we are using linear search, Binary search is not compatible with linked list.
* There is no way to reach the middle node randomly, therefore binary search is not possible.  
* There are two ways of searching;
  * Iterative
    * Iterative version is efficient in terms of space.  
    * Time complexity is O(n).  
    * Space complexity is O(1).
  * Recursive
    * Recursive Method is costly in terms of space.  
    * Time complexity is O(n).  
    * Space complexity is O(n).

* There are two search methods

  * Transposition  
    * Transposition method suitable for arrays only in Linked List we avoid it, it works on the principle of swapping, swapping data in case of liked list is very complex.so we only use move to head method.   
  * Move to Head  
    * If the element found then the Node brought at the begining of the linked list so that when element get search next time then the time complexity get reduced by O(1) constant time Remember we avoid Movement of data instead we move Nodes.  
    * Time complexity O(1).  
    * Note: if we want to see the value when move to Head return the address we need to take a pointer of type   and store the address and the use arrow method as we did in case of linear search.     

**Doubly Linked List**

* Doubly Linked List contains two pointer unlike singly linked list.
* previous pointer is used to hold the address of the previous Node and Next pointer is used to hold the address of the Next Node.
* In doubley Linked List we can move forward as well as backward this is the advantage in doubley linked list over singley linked list.

**Operations on Doubley Linked List**

* We can perform all the operations on doubley linked list that we can perform on singley linked list.
  * Reverse of Doubley Linked List.
    * Reversing Doubley linked list using Iterative method is just swapping  the links.

**Circular Linked List**

* In circular Linked List the the last Node of Linear linked list or singley linked list contains the address of the first Node instead of NULL and it form a circular shape.  
  * Advantages of Circular Linked List.  
    * Backward Traversing, which is not possible in singley Linked List.

**Operations of Circular Linked List**
* Insertion
  * Insertion takes O(1) time only if the node is inserted after the Head Node that is on position first and after that it takes O(n) time.
  * Insertion in circular linked list at the 0th position that is before first Node need to modify the last node as well and it not need to modify the head Node it is up to us whether we want to modify the head Node or not generally we prefer to leave the head Node unchanged.

**Doubley Circular**  
* Advantage of doubley linked list, is that we do not have to traverse for inserting a Node at the begining of the Linked List,Just take a previous pointer and go their.

### Comparison of Linked List

| Criteria               | Singley Linked list | Doubley Linked list                             | Circular Linked List        | Doubley Circular               |
|:-----------------------|:--------------------|:------------------------------------------------|:----------------------------|:-------------------------------|
| Space                  | Less Space          | Takes more pointer space as compared to singley | Less Space                  | Takes space of double pointer  |
| Traversing             | Forward             | forward and backward                            | Forward and circular        | forward, backward and circular |
| Insertion at beginning | O(1)                | O(1)                                            | O(n), becuase of Traversing | O(1)                           |

Doubley circular liked list is the mostly used.

## Stack

* Stack is a logical datastructures.
* It works on the principle of LIFO (Last in First Out).
* it is used to store elements.
* Can be Implement either using array or linked list.

**Operations on Stack**

| Operations | Description                                       | Time Complexity | Space Complexity |
|:-----------|:--------------------------------------------------|:----------------|:-----------------|
| Push       | Used to Insert the element                        | O(1)            | O(1)             |
| Pop        | Used to delete the element                        | O(1)            | O(1)             |
| Peek       | Used to get the very first element from the stack | O(1)            | O(1)             |

**Working of Peek**

| Pos | Index=(Top-Pos-1) |
|:----|:------------------|
| 1   | 3 = 3 - 1 + 1     |
| 2   | 2 = 3 - 2 + 1     |
| 3   | 1 = 3 - 3 + 1     |
| 4   | 0 = 3 - 4 + 1     |

**Stack Using Linked List**

* Two ways to Perform insertion on stack using linked list.
* Insertion from the left Most side takes O(1) Time.
* and insertion from the right most side takes O(n) time.
* The best choice is to use insertion from the left Most side as it has constant time complexity.

* Since we are creating stack using a linked list we can insert as many nodes as we want, but when we do say that the satck is overflow that is the question?
  * We will say a stack is overflow when it is failed to create a Node in a Heap that is when the heap is full.

**Applications of Stack**

* Parenthesis Matching
* Redo and Undo


## Queue

* Queue is a logical datastructures.
* It works on the discipline of FIFO (first in first out).

**Queue ADT**  
* Need space for storing the elements
* Front => for Deletion
* Rear => for insertion

**Operations on queue**

| Operations | Description                                       | Time Complexity | Space Complexity |
|:-----------|:--------------------------------------------------|:----------------|:-----------------|
| Enque      | Used to Insert the element                        | O(1)            | O(1)             |
| Deque      | Used to delete the element                        | O(1)            | O(1)             |
| isEmpty    | To check Whether the queue is Empty               | O(1)            | O(1)             |
| isFull     | To chekc whether the queue is Full                | O(1)            | O(1)             |
| first      | Used to get the very first element from the stack | O(1)            | O(1)             |
| last       | Used to get the very first element from the stack | O(1)            | O(1)             |

**Application of Queue**

* customer care management


## Tree

* A tree is the collection of Nodes or Vertices and edges.
* If there are (N) nodes then there will be (N - 1) edges.
* Some terminologies related to tree.
  * Root
  * Parent
  * Child
  * Siblings
  * Descendants
  * Ancestors
  * Degree of a Node
  * Internal and External Node
  * Levels
  * Height
  * Forest  
* What is Binary Tree?
  * A Tree having atmost two children.

## Graph

* A graph G (V, E) is the set of vertices and edges.  
* There are various type of graph available, below are some examples.  
  * Directed Graph
    * A directed graph is a graph that has some directions.
    * In directed graph edges are represented by arrows and they tells the directions.
  * Undirected Graph
    * An undirected graph is a graph that has no directions and the edges in undirected graph is simply represented by lines.
  
**Applications of Graph**

* XML parser

## What is STL?

* STL stands for 'Standard Template Language'.
* It contains a list of class - Algorithm, containers, iterator.
* In Real world we use STL to perform operations on a large collection of data.
* Some Example of STL are:
  * Vector
  * List
  * Forward_list
  * Dequeue
  * Priority Queue
  * Stack
  * Set
  * Multiset
  * Map
  * Multimap

| STL            | Type                | Description                                                                                            | Method                                                                                          |
|:---------------|:--------------------|:-------------------------------------------------------------------------------------------------------|:------------------------------------------------------------------------------------------------|
| vector         | Array               | It is an self managed array                                                                            | push_back(),pop_back(),size(),insert(),remove(),empty()                                         |
| list           | Doublys Linked List | It is an doubly linked list                                                                            | push_front,pop_front,push_back(),pop_back(),size(),insert(),remove(),empty(),front(),back()     |
| forword_list   | Singly Linked List  | It is an singly linked list                                                                            | push_front(),pop_front(),push_back(),pop_back(),size(),insert(),remove(),empty(),front(),back() |
| deque          | Queue               | It is an double ended Queue                                                                            | push_front(),pop_front(),push_back(),pop_back(),size(),insert(),remove(),empty(),front(),back() |
| priority queue | Queue               | It is an Heap data structure and always largest element get deleted whenever we perform pop operations | push(),pop(),size()empty(),front()                                                              |
| stack          | stack Lifo          | used to insert elements                                                                                | push()                                                                                          |
| set            | set Unique          | Always store unique elements                                                                           | All set operations                                                                              |
| Multiset       | set Duplicate       | Always store Duplicate elements                                                                        | All set operations                                                                              |
| map            | Hash Table          | Always store unique key value pairs                                                                    | None                                                                                            |
| multimap       | Hash Table          | Duplicate Keys are allowed but value must be different.                                                | None                                                                                            |

```c++
/* Example of Vector */
#include<iostream>
#include<vector> // header file for the vector
int main(){
  vector<int> v() /* we can mention the size v(10) like this By default the size of vector is 16.*/
  v = {10,20,40,90};
  v.push_back(25); // first it will insert
  v.push_back(70); // then this will insert
  v.pop_back(70) // remove 70

  /* For each Loop */
  for(x:v){
    cout<<x<<endl;
  }

  /* Loop using iterator class */
  vector<int>::iterator itr v.begin(); // begin() method available in all the containers.
  /*
  itr is a object of type pointer
  */
 for(itr=v.begin();itr != v.end(); itr++)
 cout<<*itr<<endl;
}
```

```c++
/* Example of List */
#include<iostream>
#include<list> // header file for the list
int main(){
  list<int> v();
  v = {10,20,40,90};
  v.push_back(25); // first it will insert
  v.push_back(70); // then this will insert
  v.pop_back(70) // remove 70

  /* For each Loop */
  for(x:v){
    cout<<x<<endl;
  }

  /* Loop using iterator class */
  list<int>::iterator itr v.begin(); // begin() method available in all the containers.
  /*
  itr is a object of type pointer
  */
 for(itr=v.begin();itr != v.end(); itr++)
 cout<<*itr<<endl;
}
```

```c++
/* Example of forward List */
#include<iostream>
#include<forward_list> // header file for the forward_list
int main(){
  forward_list<int> v();
  v = {10,20,40,90};
  v.push_back(25); // first it will insert
  v.push_back(70); // then this will insert
  v.pop_back(70) // remove 70

  /* For each Loop */
  for(x:v){
    cout<<x<<endl;
  }

  /* Loop using iterator class */
  forward_list<int>::iterator itr v.begin(); // begin() method available in all the containers.
  /*
  itr is a object of type pointer
  */
 for(itr=v.begin();itr != v.end(); itr++)
 cout<<*itr<<endl;
}
```


## Hashing
* It is used for searching
* The idea of hashing searching is introduced over the `Linear` and `Binary` Search.
* Note linear and binary search is still slower because they have time complexity of `O(n) and O(logn)` respectively.
* We still need faster algorithms that have the time complexity `O(1)`,so here comes the hashing technique.

* Explanation of the hashing.
* If we have some set of keys or set of elements.
```c++
keys : 8,3,6,10,15,18,14;

// we need an array of size equal to the highest element present in the key that is 18

// All The element in the key will became the index in the array.

// for example element 8 will be at index 8
/*
element 3 will be at index 3.
element 6 will be at index 6.
element 10 will be at index 10.
element 15 will be at index 15.
and so on...
```
* Drawbacks
 * No doubt that we will find the element at `O(1) time complexity`, but we have to pay the cost for the space complexity and that will be very high.
 * In above example we have the highest element is 18, and we have to take the array of that size, but in reality we have only 7 elements, for 7 elements we have to make the size of the array 18,that is too much.
* Mathematical Model for hashing

There are total `4` Relational Mapping.
 * one-one (function)
 * one-many
 * many-one (function)
 * many-many

## Hashing function
![hashing](https://user-images.githubusercontent.com/90856122/226932085-e6b8461a-f324-497b-b755-6d733804ab1b.png)
* The function we have used in ideal hashing is `h(x) = x`.
 * Ideal hashing
  * It is not useful because it consumes huge memory.
 * Modulus hashing
  * Modulus hashing also called many-to-one-mapping
  * for Modulus hashing we have changed the ideal function to convert it into the modulus function.
  * The modulus function is `h(x) = x % 10`.
  * It is not useful because of collision for the same value.
* The Solution of collision is 
![Comparison-of-Separate-Chaining-and-Open-Addressing](https://user-images.githubusercontent.com/90856122/226957186-3720c9c5-b0c8-4780-a2b2-ec204f641ff8.png)
  * Open Hashing (We can have extra space if we want).
    * chaining
  * Closed hashing (We have to utilize the only given space,no extra space)
    * Open Addressing
      * Linear Probing
      * Quadratic Probing
      * Double hashing
### chaining


