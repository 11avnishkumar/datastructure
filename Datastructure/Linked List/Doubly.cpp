/*
Singley Linked List
*/

#include<iostream>
#include<climits> // for INT_MIN and INT_MAX
using namespace std;

/* Linked list representation */

class Node{
    public:
        Node *prev;
        int data;
        Node *next;
    // constructor
     Node(int val){
        this->prev = nullptr;
        this->data = val;
        this->next = nullptr;
     }

};

class LinkedList{
    public:
        Node *head;
    public:
    LinkedList(){head=nullptr;};
    LinkedList(int A[],int n);
    // ~LinkedList();
    void Insert(int index, int x);
    void SortedInsert(int element);
    void Display();
    void RDisplay(Node *p);
    void ReverseDisplay(Node *p); // Reverse Order display using Recursion
    int Count();
    int isSorted();
    int RCount(Node *p);
    int Sum();
    int RSum(Node *p);
    float Avg();
    int Max();
    int RMax(Node *p);
    int Min();
    int RMin(Node *p);
    Node* LSearch(int key);
    Node* RLSearch(Node* p,int key);
    Node* MoveToHeadSearch(int key);
    int Delete(int index);
    int isLoop();
    void RemoveDuplicate();
    int Length();
    void ReverseLinkedList();
    void RReverseLinkedList(Node *q,Node *p); // take two pointer as a arguement
    void ReverseLinkedListUsingArray();
    void Merge(Node*q,Node*p);
    void Concatenate(Node*q,Node*p);

};

// constrcutor for creating Linked List using array as user input
LinkedList::LinkedList(int A[],int n){
Node *t = head;
Node *last; 
t = new Node(A[0]); // Dynamic memory allocation and first node is initialized and rest of the node will be filled using array

head = t;
last = t;

for(int i=1; i<n; i++){ // rest of the element will be start from 1 because one element is already initialized
    t = new Node(A[i]);
    last->next = t;
    t->prev = last;
    last = t;
}

}


void LinkedList::Display(){
Node *p = head;
while(p != nullptr){
    cout<<p->data<<" ";
    p = p->next;
   }
}


/* Recursive Display of Linked List*/
void LinkedList::RDisplay(Node *p){
    if(p != nullptr){
        cout<<p->data<<endl;
        RDisplay(p->next);
    }
}

/* Display Linked List in Reverse Order */
void LinkedList::ReverseDisplay(Node *p){
    if(p != nullptr){
        ReverseDisplay(p->next);
        cout<<p->data<<endl;
    }
}



/* Counting Node of a Linked List */

int LinkedList::Count(){
    Node *p = head;
    int count = 0;
    while(p != nullptr){
        count++;
        p = p->next;
    }
    return count;
}


/* Recursive method for counting Node of Linked List */
int LinkedList::RCount(Node *p){
    if(p != nullptr){
        return RCount(p->next) + 1;
    }
    return 0;
}

/* Sum of all the elements of a Linked List */
int LinkedList::Sum(){
      Node* p = head;
    int sum = 0;
    while(p != nullptr){
        sum = sum + p->data;
        p = p->next;
    }
    return sum;
}


/* Average of all the elements of a Linked List */
float LinkedList::Avg(){
    
    return (float)Sum()/Count();
}


/* Sum of all the elements of a linked list Using Recursion */

int LinkedList::RSum(Node *p){
    if(p != nullptr){
    return RSum(p->next) + p->data;
    }
    return 0;
}

/* Max element of a Linked List */
int LinkedList::Max(){
    Node *p = head;
    int m = INT_MIN;
    while(p != nullptr){
        if(p->data > m)
            m=p->data;
        p = p->next;
    }
    return m;
}

/* Min element of a linked list */

int LinkedList::Min(){
    Node *p = head;
    int m = INT_MAX;
    while(p != nullptr){
        if(p->data < m)
            m = p->data;
        p = p->next;
    }
    return m;
}

/* Recursive Method of finding the Max of all elements from the linked list */
int LinkedList::RMax(Node *p){
    int m = INT_MIN;
    if(p != nullptr){
        m = RMax(p->next);
        return m > p->data ? m : p->data; // Ternary Condition
    }
    return m;
}


/* Recursive Method of finding the Min of all elements from the linked list */
int LinkedList::RMin(Node *p){
    int m = INT_MAX;
    if(p != nullptr){
        m = RMin(p->next);
        return m < p->data ? m : p->data; // Ternary Condition
    }
    return m;
}


/*  Linear search in linked list */
  Node* LinkedList::LSearch(int key){
    Node *p = head;
    while(p != nullptr){
        if(key == p->data)
            return p;
        p = p->next;
    }
    return nullptr; // return nullptr if nothing found
}


/*  Recursive Linear search in linked list */
  Node* RLSearch(Node* p, int key){
    if(p == nullptr)
        return nullptr;
    if(key == p->data)
        return p;
    return RLSearch(p->next,key);
}


/* Move To Head: Improving Linear Search */
    Node* LinkedList::MoveToHeadSearch(int key){
    Node *p = head;
    Node *q = nullptr;
    while(p != nullptr){
        if(key == p->data){
            q->next = p->next;
            p->next = head;
            head = p;
            return p;
            
        }
        else{
           q = p;
           p = p->next;
        }
    }
    return nullptr;
}

/* Insert Element in a existing linked list*/
void LinkedList::Insert(int index,int element){
    Node *p = head;
    Node *t;
    Node *last; 
    int i;
    if(index < 0 || index > Count()){ 
        printf("Invalid Index");
        return;
    }
    /* if this Node is very first Node in the entire Linked List */
    t = new Node(element);
    if(index == 0){
        t->next = head;
        head = last = t;
    }else{
        p = head; // p start from 0
        for(i=0; i < index - 1 && p != nullptr; i++) p = p->next;

        if(p != nullptr){
            t->next = p->next;  // right Node modification
            t->prev = p;
            if(p->next) p->next->prev = t;
            p->next = t;     
        }
    }
}


/* Inserting element at sorted Position */
void LinkedList::SortedInsert(int element){
    Node *p = head;
    Node *t,*q=nullptr; // q will be nullptr initially;
    t = new Node(element); // Node and data is ready

    if(head == nullptr){
       head = t; // either we can use head(it is global) or p
    }else{

    while(p!= nullptr && p->data < element){
        q = p;
        p = p->next;
    }
    // Handling special case in linked list
    if(p == head){
        t->next = head; // Insert left
        head = t;
    }else{
        t->next = q->next;
        q->next = t;   // Insert right
    }
 }
}


/* Delete elements from linked list */
int LinkedList::Delete(int index){
    Node *p = head;
    int i,x; // i for counter, x for storing deleted elements
    //check, if the index is valid or Not
    if(index < 1 || index > Count()) // Node index start from 1 onwards.
        return -1;
    if(index == 1){
        p = head;
        x = head->data;
        head = head->next;
        delete p; // for delete we use delete Keyword;
        return x;
    }else{
        for(i = 0; i < index -1 && p != nullptr; i++) p = p->next;
        p->prev->next = p->next;
        if(p->next)
            p->next->prev = p->next;
        x = p->data;
        delete p;
        return x;
    }    
}


/* Check whether the linked list is sorted or not */
int LinkedList::isSorted(){
    Node *p = head;
    int x = INT_MIN;
    while(p != nullptr){
        if(p->data < x)
            return 0;
        x = p->data;
        p = p->next;    
    }
    return 1; // return 1 if the linked list is sorted
}


/* Removing Duplicates from sorted linked list */

void LinkedList::RemoveDuplicate(){
  Node *p = head;  
  Node *q = p->next;
while(q != nullptr){
    if(p->data == q->data){
    p->next = q->next;
    delete q;
    q = p->next;
    }else{
    p = q;
    q = q->next;
    }
}
}

/* Reversing a Linked List using an Array */
void LinkedList::ReverseLinkedListUsingArray(){    
int *A,i=0;  Node *q=head;
A = new int[Count()]; // allocate the memory
while(q!=nullptr){
    A[i] = q->data;
    q = q->next;
    i++;
}
q = head;
i--;
while(q!=nullptr){
    q->data = A[i];
    q = q->next;
    i--;
}
}


/* Iterative: Reversing Linked List */
void LinkedList::ReverseLinkedList(){
    Node *p = head;
    Node *temp;
    while(p != nullptr){
        temp = p->next;
        p->next = p->prev; // p->next will be nullptr becuase p->prev was holding the value nullptr
        p->prev = temp;
        p=p->prev;
        if(p!=nullptr && p->next == nullptr) head = p;
    }
    
}


/* Recursive: Reversing Linked List */
void LinkedList::RReverseLinkedList(Node *q,  Node *p){
    if(p!=nullptr){
        RReverseLinkedList(p,p->next); // first recursive calling 
        p->next = q; // then movement reversing a link
    }
    else
    {
        head = q;
    }
}

/* Concatination of two Linked List */
// void LinkedList::Concatenate(Node *p,Node *q){
// third = p;
// while(p->next!=nullptr)
//     p = p->next;
// p->next = q;
// q=nullptr; 
    
// }

/* Program for merging two Linked List */
// void LinkedList::Merge(Node *q){
//   Node *p = head;  
//   Node *last;
// if(p->data < q->data){
//     third=last=p;
//     p = p->next;
//     last->next = nullptr;
// }else{
//     third=last=q;
//     q = q->next;
//     last->next = nullptr;
// }
// while(p!=nullptr && q!=nullptr){
//    if(p->data < q->data)
//    {
//     last->next=p;
//     last=p;
//     p = p->next; 
//     last->next = nullptr;
//    }else{
//     last->next=q;
//     last=q;
//     q = q->next; 
//     last->next = nullptr;
//    } 
// }

// if(p!=nullptr)last->next = p;
// else last->next = q;

// }

/* Check whether there is loop in linked list or not */

int LinkedList::isLoop(){
    Node *f = head;
    Node *p,*q;
    p=q=f;
    do{
        p = p->next;
        /* Below we are making q pointer to move faster then p pointer */
        q = q->next;
        q = q != nullptr? q->next : nullptr;
    }while(p!=nullptr && q!=nullptr && p!=q);

    return p == q ? 1 : 0; // ternary
}

int main(){
    
    int ch;
    int returnedValue;
    int index,element;
    Node *head;
    Node *third;
    Node *temp;
    int A[] = {15,20,25,30,35,40,45,50}; // these array element work as input to linked list
    
    int B[] = {80,90,100,105,110,120};

    LinkedList L(A,8); // Creating initial Linked List using arrays.
    


    // SecondLinkedCreate(B,6);
    // printf("\nSimple Display: ");

    // cout<<"Display Second: "<<endl;
    // Display(second);
    do{
        cout<<"\nChoose from the following"<<endl;
        cout<<"1. Insert"<<endl;
        cout<<"2. Insert at sorted Position only"<<endl;
        cout<<"3. Count the Nodes"<<endl;
        cout<<"4. Display"<<endl;
        cout<<"5. Reverses Display"<<endl;
        cout<<"6. Is Sorted"<<endl;
        cout<<"7. Delete"<<endl;
        cout<<"8. Sum"<<endl;
        cout<<"9. Max"<<endl;
        cout<<"10. Min"<<endl;
        cout<<"11.Reverse a Linked List"<<endl;
        cout<<"12.Remove Duplicates from linked list"<<endl;
        cout<<"13.Search"<<endl;
        cin>>ch;
        cout<<"********************************"<<endl;
        switch (ch)
        {
        case 1:
            cout<<"Enter the index and the element respectively"<<endl;
            cin>>index>>element;
            L.Insert(index,element);
            break;
        case 2:
            cout<<"Enter the element"<<endl;
            cin>>element;
            L.SortedInsert(element);
            break;
        case 3:
            returnedValue = L.Count();
            cout<<"Number of Node is "<<returnedValue<<endl;
            cout<<"Recursive : Number of Node is "<<L.RCount(L.head);
            break;
        case 4:
            L.Display();
            L.RDisplay(L.head);
            break;
        case 5:
            cout<<"Diplay in Reverse Order"<<endl;
            L.ReverseDisplay(head);
            break;    
        case 6:
            returnedValue = L.isSorted();
            cout<<"Is Sorted "<<returnedValue<<endl;
            break;        
        case 7:
            cout<<"Enter the index"<<endl;
            cin>>index;
            returnedValue = L.Delete(index);
            cout<<"Deleted Element is "<<returnedValue<<endl;
            break;
        case 8:
            returnedValue = L.Sum();
            cout<<"Sum "<<returnedValue<<endl;
            cout<<"Recursive : Sum of all elements "<<L.RSum(L.head);
            break;
        case 9:
            returnedValue = L.Max();
            cout<<"Max "<<returnedValue<<endl;
            cout<<"Recursive : Max of all elements "<<L.RMax(L.head);
            break;
        case 10:
            returnedValue = L.Min();
            cout<<"Min "<<returnedValue<<endl;
            cout<<"Recursive : Min of all elements "<<L.RMin(L.head);
            break;
        case 11:
            L.ReverseLinkedListUsingArray();
            L.ReverseLinkedList();
            L.RReverseLinkedList(nullptr,L.head);
            L.Display();
            break;                
        case 12:
            cout<<"Removed Duplicate: "<<endl;
            L.RemoveDuplicate();
            break;                
        case 13:
            cout<<"Iterative : Linear Search "<<L.LSearch(15)<<endl;
            temp = L.LSearch(15); // address always stored in pointer.
            temp != nullptr ? cout<<"\nAddress "<<temp<<"and key "<<temp->data : cout<<"address and data "<<temp<<temp->data; // Verification line for the output
            // cout<<"\nRecursive : Linear Search "<<L.RLSearch(L.head,15);
            cout<<"Improved Linear Search "<<L.MoveToHeadSearch(50)<<endl;
            break;                
        default:
            cout<<"Invalid Choices"<<endl;
            break;
        }
    }while(ch<14);
    // cout<<"Average of all element "<<Avg()<<endl;
    
    

    // L.Merge(second);
    // cout<<"Display:After Merging: ");
    // Display(third);


    // L.Concatenate(second);
    // cout<<"\nDisplay After Concatination: ");
    // Display(third);
    
}


/*
    ***************** Inserting into linked list ***************

    1. Insertion into linked list can be of tree type.
        1.1 Before head Node.
        1.2 After head Node or any other Node.
        1.3 after last Node.            
        1.4 Time complexity of Insertion before head Node or after head Node
            takes O(1) constant time.
            while insertion after any other node or at the end of linked list takes
            O(n) time.
            Note: We can User insert() method to create entire linked list but one thing
                    keep in mind that we must give index 0 while creating the linke list because
                    rest of the other Node is going to insert after the head node or before the head Node
                    Therefore head Node creation is important.we don't need the create() method which we have made earlier.
                        
    **************** Insertion Only end of a Linked List ************

    1. Insertion into linked list at the end takes O(n) time we can reduce
       this time by just maintaining a last pointer which will point to only last
       Node by doing this time complexity will reduce from O(n) to O(1).

    **************** Insertion into sorted position (Handling special case) ****************

    1.Insertion at sorted position if it is head postition then
      Time complexity will be O(1) otherwise O(n).  

    **************** Deletion from a linked list ***************

    1. Time complexity O(1), if it is head element.
    2. Time complexity O(n), if it is other then head element.

    **************** Is Linked List Sorted *****************

    Time complexity O(1) or O(n).

    **************** Removing duplicates from sorted linked list ******************

    1. To find all the duplicate from the linked list it is must to traverse entire
    linked list therefore it takes time.
        1.1 Time Complexity O(n).
    *************** Reverse of a Linked List using an array ********
    1. Using an auxiliary array we can Reverse a linked list.
    2. Time complexity O(2n)

    *************** Reversing a Linked List ***************

    1. Linked List can be reversed in two ways:
        1.1 Iterative
            1.10 Iterative method is efficient in terms of space.
            1.11 Time Complexity O(n)
            1.12 Space complexity O(1)
        1.2 Recursive
            1.20 Recusive method is costly in terms of space
            1.22 Time complexity O(n)
            1.23 Space complexity O(n)

    ************** Concatinating Linked List *************

    1. Concatinating two linked list means taking either of the list from two
        given linked list and join them to form a single linked list.
        1.1 Time Complexity O(n).

    ************* Merging a Linked List ****************

    1. Merging  is the process of combining two sorted Linked List
        Time complexity O(m+n)

    ************* Finding a Loop in a Linked List ***********

    1. Traverse the linked list if the pointer reaches at the end and having value nullptr then
        Definitely there is no Loop in a linked list.

*/

