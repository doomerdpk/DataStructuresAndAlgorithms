#include<bits/stdc++.h>
using namespace std;

//Important terms:
//1. Not stored in contigous memoery locations like arrays.
//2. Not of fixed length opposite to the arrays.
//3. Single element in a linked list stores a data and pointer to the 
//   address of next element.
//4. head: Starting element of the linked list.
//5. tail: last element of the linked list. next element should store
//   "nullptr".
//6. Singly linkedlist - Unidirectional linked list. 


class Node {
   
   public:
   int data;
   //Next element is a node. Pointer to that node should be of same data type
   Node* next;

   //Constructor to initialize the element of a node element
   public:
   Node(int d)
   {
      data=d;
      next=nullptr;
   }
};

int main()
{
   Node x=Node(1);
   cout<<x.data<<" "<<x.next<<endl;
   cout<<typeid(x.data).name()<<endl;
   cout<<typeid(x.next).name()<<endl;

   Node* y=new Node(2);
   cout<<y<<endl;
   cout<<y->data<<endl;
   cout<<typeid(y).name()<<endl;
   
   return 0;   
}

