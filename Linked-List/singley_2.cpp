/*
    Singley Linked List (Method 2)
    single class Representation of linked list
*/

#include<iostream>
#include<climits> // for INT_MIN and INT_MAX
using namespace std;

/* Linked list representation */
class LinkedList{
    private:
        int data;
        LinkedList *next;
    public:
        LinkedList(int data);
        LinkedList(int A[],int n);
        // ~LinkedList();
        void Insert(int index, int x);
        void SortedInsert(int element);
        void Display();
        void RDisplay(LinkedList *p);
        void ReverseDisplay(LinkedList *p); // Reverse Order display using Recursion
        int Count();
        int isSorted();
        int RCount(LinkedList *p);
        int Sum();
        int RSum(LinkedList *p);
        float Avg();
        int Max();
        int RMax(LinkedList *p);
        int Min();
        int RMin(LinkedList *p);
        LinkedList *LSearch(int key);
        LinkedList *RLSearch(LinkedList*p,int key);
        LinkedList *MoveToHeadSearch(int key);
        int Delete(int index);
        int isLoop();
        void RemoveDuplicate();
        int Length();
        void ReverseLinkedList();
        void RReverseLinkedList(LinkedList *q,LinkedList *p); // take two pointer as a arguement
        void ReverseLinkedListUsingArray();
        void Merge(LinkedList* q,LinkedList* p);
        void Concatenate(LinkedList* q,LinkedList* p);

}*head=NULL; // global head pointer

/* Constructor for initializing the Linked list*/
LinkedList::LinkedList(int data){
    this->data = data;
    this->next = NULL;
}

// constrcutor for creating Linked List using array as user input
LinkedList::LinkedList(int A[],int n){
LinkedList *t;
LinkedList *last; 
head = new LinkedList(A[0]); // Dynamic memeory allocation as well as create very first Node
last = head;
for(int i=1; i<n; i++){ // rest of the element will be start from 1 because one element is already initialized
    t = new LinkedList(A[i]);
    last->next = t;
    last = t;
}

}


void LinkedList::Display(){
LinkedList *p = head;
while(p != NULL){
    cout<<p->data<<" ";
    p = p->next;
   }
}


/* Recursive Display of Linked List*/
void LinkedList::RDisplay(LinkedList *p){
    if(p != NULL){
        cout<<p->data<<" ";
        RDisplay(p->next);
    }
}

/* Display Linked List in Reverse Order */
void LinkedList::ReverseDisplay(LinkedList *p){
    if(p != NULL){
        ReverseDisplay(p->next);
        cout<<p->data<<" ";
    }
}



/* Counting Node of a Linked List */
int LinkedList::Count(){
    LinkedList *p = head;
    int count = 0;
    while(p != NULL){
        count++;
        p = p->next;
    }
    return count;
}


/* Recursive method for counting Node of Linked List */
int LinkedList::RCount(LinkedList *p){
    if(p != NULL){
        return RCount(p->next) + 1;
    }
    return 0;
}

/* Sum of all the elements of a Linked List */
int LinkedList::Sum(){
      LinkedList* p = head;
    int sum = 0;
    while(p != NULL){
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

int LinkedList::RSum(LinkedList *p){
    if(p != NULL){
    return RSum(p->next) + p->data;
    }
    return 0;
}

/* Max element of a Linked List */
int LinkedList::Max(){
    LinkedList *p = head;
    int m = INT_MIN;
    while(p != NULL){
        if(p->data > m)
            m=p->data;
        p = p->next;
    }
    return m;
}

/* Min element of a linked list */
int LinkedList::Min(){
    LinkedList *p = head;
    int m = INT_MAX;
    while(p != NULL){
        if(p->data < m)
            m = p->data;
        p = p->next;
    }
    return m;
}

/* Recursive Method of finding the Max of all elements from the linked list */
int LinkedList::RMax(LinkedList *p){
    int m = INT_MIN;
    if(p != NULL){
        m = RMax(p->next);
        return m > p->data ? m : p->data; // Ternary Condition
    }
    return m;
}


/* Recursive Method of finding the Min of all elements from the linked list */
int LinkedList::RMin(LinkedList *p){
    int m = INT_MAX;
    if(p != NULL){
        m = RMin(p->next);
        return m < p->data ? m : p->data; // Ternary Condition
    }
    return m;
}


/*  Linear search in linked list */
  LinkedList* LinkedList::LSearch(int key){
    LinkedList *p = head;
    while(p != NULL){
        if(key == p->data)
            return p;
        p = p->next;
    }
    return NULL; // return NULL if nothing found
}


/*  Recursive Linear search in linked list */
  LinkedList * LinkedList::RLSearch(LinkedList *p, int key){
    if(p == NULL)
        return NULL;
    if(key == p->data)
        return p;
    return RLSearch(p->next,key);
}


/* Move To Head: Improving Linear Search */
  LinkedList * LinkedList::MoveToHeadSearch(int key){
    LinkedList *p = head;
    LinkedList *q = NULL;
    while(p != NULL){
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
    return NULL;
}

/* Insert Element in a existing linked list*/
void LinkedList::Insert(int index,int element){
    LinkedList *p = head;
    LinkedList *t; int i;
    if(index < 0 || index > Count()){ 
        cout<<"Invalid Index!!!!!!"<<endl;
        return;
    }
    if(index == 0){
        t = new LinkedList(element);
        head = t;

    }else{
        p = head; // p start from 0
        for(i=0; i < index - 1 && p != NULL; i++) p = p->next;

        if(p != NULL){
            t = new LinkedList(element);
            t->next = p->next;
            p->next = t;
        }
    }
}


/* Inserting element at sorted Position */
void LinkedList::SortedInsert(int element){
    LinkedList *p = head;
    LinkedList *t,*q=NULL; // q will be NULL initially;

    t = new LinkedList(element);

    if(head == NULL) head = t;

    else{

        while(p!= NULL && p->data < element){
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
    LinkedList *p = head;
    LinkedList *q=NULL;
    int i,x; // i for counter, x for storing deleted elements
    //check, if the index is valid or Not
    if(index < 1 || index > Count()) // Node index start from 1 onwards.
        return -1;
    if(index == 1){
        q = head;
        x = head->data;
        head = head->next;
        delete q; // for delete we use delete Keyword;
        return x;
    }else{
        for(i=0; i< index -1 && p !=NULL; i++){
            q = p;
            p = p->next;
        }
        q->next = p->next;
        x = p->data;
        delete p;
        return x;
    }    
}


/* Check whether the linked list is sorted or not */
int LinkedList::isSorted(){
    LinkedList *p = head;
    int x = INT_MIN;
    while(p != NULL){
        if(p->data < x)
            return 0;
        x = p->data;
        p = p->next;    
    }
    return 1; // return 1 if the linked list is sorted
}


/* Removing Duplicates from sorted linked list */

void LinkedList::RemoveDuplicate(){
  LinkedList *p = head;  
  LinkedList *q = p->next;
while(q != NULL){
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
int *A,i=0;  LinkedList *q=head;
A = new int[Count()]; // allocate the memory
while(q!=NULL){
    A[i] = q->data;
    q = q->next;
    i++;
}
q = head;
i--;
while(q!=NULL){
    q->data = A[i];
    q = q->next;
    i--;
}
}


/* Iterative: Reversing Linked List */
void LinkedList::ReverseLinkedList(){
    LinkedList *p = head;
    LinkedList *q,*r;
    q = NULL;
    r = NULL;
    while(p!=NULL){
      r = q;
      q = p;
      p = p->next;
      q->next = r;  
    }
    head = q;
}


/* Recursive: Reversing Linked List */

void LinkedList::RReverseLinkedList(LinkedList *q,  LinkedList *p){
    if(p!=NULL){
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
// while(p->next!=NULL)
//     p = p->next;
// p->next = q;
// q=NULL; 
    
// }

/* Program for merging two Linked List */
// void LinkedList::Merge(Node*p,Node *q){
//   Node *p = head;  
//   Node *last;
// if(p->data < q->data){
//     third=last=p;
//     p = p->next;
//     last->next = NULL;
// }else{
//     third=last=q;
//     q = q->next;
//     last->next = NULL;
// }
// while(p!=NULL && q!=NULL){
//    if(p->data < q->data)
//    {
//     last->next=p;
//     last=p;
//     p = p->next; 
//     last->next = NULL;
//    }else{
//     last->next=q;
//     last=q;
//     q = q->next; 
//     last->next = NULL;
//    } 
// }

// if(p!=NULL)last->next = p;
// else last->next = q;

// }

/* Check whether there is loop in linked list or not */

// int LinkedList::isLoop(){
//     LinkedList *f = head;
//     LinkedList *p,*q;
//     p=q=f;
//     do{
//         head->data = A[0]; // first node is initialized and rest of the node will be filled using array
//         head->next = NULL;        
//         q = q->next;
//         q = q != NULL? q->next : NULL;
//     }while(p!=NULL && q!=NULL && p!=q);

//     return p == q ? 1 : 0; // ternary
// }

int main(){
    LinkedList* temp;
    int ch;
    int returnedValue;
    int index,element;
    int A[] = {15,20,25,30,35,40,45,50}; // these array element work as input to linked list
    int B[] = {80,90,100,105,110,120};
    // head = new LinkedList(A[0]); // initialize the linked list with first element
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
        switch (ch){
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
            cout<<"Recursive : Number of Node is "<<L.RCount(head);
            break;
        case 4:
            L.Display();
            cout<<endl;
            L.RDisplay(head);
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
            cout<<"Enter the element"<<endl;
            cin>>element;
            L.Delete(element);
            break;
        case 8:
            returnedValue = L.Sum();
            cout<<"Sum "<<returnedValue<<endl;
            cout<<"Recursive : Sum of all elements "<<L.RSum(head);
            break;
        case 9:
            returnedValue = L.Max();
            cout<<"Max "<<returnedValue<<endl;
            cout<<"Recursive : Max of all elements "<<L.RMax(head);
            break;
        case 10:
            returnedValue = L.Min();
            cout<<"Min "<<returnedValue<<endl;
            cout<<"Recursive : Min of all elements "<<L.RMin(head);
            break;
        case 11:
            L.ReverseLinkedListUsingArray();
            L.ReverseLinkedList();
            L.RReverseLinkedList(NULL,head);
            break;                
        case 12:
            cout<<"Removed Duplicate: "<<endl;
            L.RemoveDuplicate();
            break;                
        case 13:
            cout<<"Iterative : Linear Search "<<L.LSearch(15)<<endl;
            temp = L.LSearch(15); // address always stored in pointer.
            // temp != NULL ? cout<<"\nAddress "<<temp<<"and key "<<temp->data : cout<<"address and data "<<temp<<temp->data; // Verification line for the output
            // cout<<"\nRecursive : Linear Search "<<L.RLSearch(head,15);
            cout<<"Improved Linear Search "<<L.MoveToHeadSearch(50)<<endl;
            break;                
        default:
            cout<<"Invalid Choices"<<endl;
            break;
        }
    }while(ch<10);
    // cout<<"Average of all element "<<Avg()<<endl;
    
    

    // l.Merge(second);
    // cout<<"Display:After Merging: ");
    // Display(third);


    // l.Concatenate(second);
    // cout<<"\nDisplay After Concatination: ");
    // Display(third);
    
}

