#include<bits/stdc++.h>
using namespace std;

//Problem Statement:
//1. Convert an array into linked list
//2. Traverse the linked list and print


class Node {
   
   public:
   int data;
   Node* next;
};

//Function to creates a node 
 Node* createNode(int data) 
   {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = nullptr;
    return newNode;
   }

int main()
{
   int arr[5]={1,2,3,4,5};

   //converting arr into linked list
   Node* head=createNode(arr[0]);
   //Never tamper with the head element as it is a fixed starting point of
   //your linked list
   Node* temp1=head;
   for(int i=1;i<5;i++)
   {
      temp1->next=createNode(arr[i]);
      //Going to the next element
      temp1=temp1->next;
   }

   //Printing the linked list;
   Node* temp2=head;

   while(temp2)
   {
     cout<<temp2->data<<" ";
     //Going to the next element
     temp2=temp2->next;
   }
   return 0;   
}

