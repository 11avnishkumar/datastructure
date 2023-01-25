# Problem Solving

## Array

|Problem No|Description|Status|Time Complexity|
|:-|:-|:-|:-
|1|Single missing element from the sorted array (Two method)|Completed|O(n)|
|2|Multiple missing element from the sorted array|completed|O(n)|
|3| a missing element using an array method.|Pending|O(n)|

## Linked List

|Problem No|Description|Status|Time Complexity|Space Complexity
|:-|:-|:-|:-|:-
|1|Middle of the element of a linked list (Two Method)|Pending|O(n)|
|2|Finding the Intessection point of two linked list|Pending||


## Stack

1. Parenthesis balancing Using Stack.

|Problem No|Description|Status|Time Complexity|Space Complexity|
|:-|:-|:-|:-|:-
|1|Parenthesis Matching|Completed|O(n)|O(1)|
|2|Infix to Postfix|Pending|
|3|Infix to Postfix using Associativity|Pending|

## Linked List

1. Deleting a Node using Single pointer.
Given a linked list  
1->2->3->4->NULL
```c++
Node* temp=head;
Node* temp2;  
for(int i=0; i<position-1; i++;) temp = temp->next; // stop before the node that has to  be deleted
temp2 = temp->next; //get the node that hase to be deleted
temp->next = temp->next->next;
delete temp2
return head;
```