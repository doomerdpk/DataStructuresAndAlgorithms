#include<bits/stdc++.h>
using namespace std;

class Node{
   
   public:
   int data;
   Node* next;
   Node* back;
};

//Function to create a node(data only version)
Node* createNode1(int val)
{
   Node* newNode= new Node();
   newNode->data=val;
   newNode->next=nullptr;
   newNode->back=nullptr;

   return newNode;
}

//Function to create a Node
Node* createNode2(int val,Node* next, Node* back)
{
   Node* newNode= new Node();
   newNode->data=val;
   newNode->next=next;
   newNode->back=back;

   return newNode;
}

//Function to create a doubly linked list from an array
Node* convertToDLL(vector<int>& arr)
{
   Node* head=createNode1(arr[0]);

   Node* temp=head;
   for(int i=1;i<arr.size();i++)
   {
      temp->next=createNode2(arr[i],nullptr,temp);
      temp=temp->next;
   }

   return head;
}


//Function to print a doubly linked list
void printDLL(Node* head)
{
   Node* temp=head;
   while(temp)
   {
      cout<<temp->data<<" ";
      temp=temp->next;
   }
}

//Deletion of head in a DLL
Node* deletehead(Node* head)
{
   //Edge Case1: Empty DLL
   if(head==NULL)
   {
      return head;
   }

   //DLL Consists of only one element
   if(head->next==nullptr)
   {
      free(head);
      return NULL;
   }

   //Isolate the head element first and then delete
   Node* prev=head;
   head=head->next;
   head->back=nullptr;
   prev->next=nullptr;
   free(prev);

   return head;
}

//Deletion of tail in DLL
Node* deleteTail(Node* head)
{
   //Edge Case1: Empty DLL
   if(head==NULL)
   {
      return head;
   }
   
   //DLL Consists of only one element
   if(head->next==nullptr)
   {
      free(head);
      return NULL;
   }

   Node* temp=head;
   while(temp->next)
   {
      temp=temp->next;
   }
   Node* prev=temp->back;
   prev->next=nullptr;
   temp->back=nullptr;
   free(temp);
   return head;
}

//delete kth element given that k will be between 1 and size of the DLL
Node* deleteKthElement(Node* head,int k)
{
   if(head==NULL)
   {
      return head;
   }

   //First try to reach the Kth element
   int count=0;
   Node* temp=head;
   while(temp)
   {
      count++;
      if(count==k)
      {
         break;
      }
      temp=temp->next;
   }

   Node* prev=temp->back;
   Node* front=temp->next;

   //Edge Case 1: Only one element exists in DLL
   if(prev==NULL && front==NULL)
   {
      free(temp);
      return NULL;
   }

   //Edge Case 2: Kth element is head element
   if(prev==NULL)
   {
      return deletehead(head);
   }

   //Edge Case 3: Kth element is a tail element
   if(front==NULL)
   {
      return deleteTail(head);
   }

   prev->next=front;
   front->back=prev;
   
   temp->next=nullptr;
   temp->back=nullptr;
   free(temp);
   return head;
}

//Function to delete node with value k which should not be head
Node* deleteK(Node* head,int k)
{
   //If the DLL is empty
   if(head==NULL)
   {
      return head;
   }

   Node* temp=head;

   while(temp->data!=k)
   {
      temp=temp->next;
   }

   Node* prev=temp->back;
   Node* front=temp->next;

   //Edge Case: If its a tail element
   if(front==NULL)
   {
      return deleteTail(head);
   }

   prev->next=front;
   front->back=prev;
   
   temp->next=nullptr;
   temp->back=nullptr;
   free(temp);
   return head;
}

//Function to insert an element before the head - that element will become the new head
Node* insertBeforeHead(Node* head, int val)
{
   if(head==NULL)
   {
      return createNode2(val,nullptr,nullptr);
   }

   Node* newNode=createNode2(val,head,nullptr);
   head->back=newNode;
   return newNode;

}

//Function to insert an element before the tail
Node* insertBeforeTail(Node* head,int val)
{
   if(head==NULL)
   {
      return createNode2(val,nullptr,nullptr);
   }

   if(head->next==NULL)
   {
      return insertBeforeHead(head,val);
   }

   Node* temp=head;
   while(temp->next)
   {
      temp=temp->next;
   }

   Node* prev=temp->back;
   Node* newNode=createNode2(val,temp,prev);

   prev->next=newNode;
   temp->back=newNode;

   return head;
}

//Function to insert an element before kth element
Node* insertBeforeKthElment(Node* head, int val,int k)
{
   int count=0;
   Node* temp=head;

   while(temp)
   {
      count++;
      if(count==k)
      {
         break;
      }
      temp=temp->next;
   }

   Node* prev=temp->back;
   Node* front=temp->next;

   if(prev==NULL)
   {
      return insertBeforeHead(head,val);
   }

   if(front==NULL)
   {
      return insertBeforeTail(head,val);
   }

   Node* newNode=createNode2(val,temp,prev);

   prev->next=newNode;
   temp->back=newNode;

   return head;
}

//Function to insert element before The Node with value K- Shouldn't be head
Node* insertBeforeK(Node* head,int val,int k)
{
   Node* temp=head;
   while(temp->data!=k)
   {
      temp=temp->next;
   }

   Node* prev=temp->back;

   Node* newNode=createNode2(val,temp,prev);

   prev->next=newNode;
   temp->back=newNode;

   return head;
}

Node* insertAfterHead(Node* head,int val)
{
   if(head==NULL)
   {
      return createNode2(val,nullptr,nullptr);
   }
   if(head->next==NULL)
   {
      Node* newNode=createNode2(val,nullptr,head);
      return head;
   }

   Node* temp=head->next;

   Node* newNode=createNode2(val,temp,head);

   head->next=newNode;
   temp->back=newNode;

   return head;
}

Node* insertAftertail(Node* head,int val)
{
   if(head->next==NULL)
   {
      return insertAfterHead(head,val);
   }

   Node* temp=head;
   while(temp->next)
   {
      temp=temp->next;
   }

   Node* newNode=createNode2(val,nullptr,temp);

   temp->next=newNode;

   return head;
}

Node* insertAfterKthElement(Node* head,int val,int k)
{
   Node* temp=head;
   int count=0;
   while(temp)
   {
     count++;
     if(count==k)
     {
      break;
     }
     temp=temp->next;
   }

   Node* prev=temp->back;
   Node* front=temp->next;

   if(prev==NULL)
   {
      return insertAfterHead(head,val);
   }

   if(front==NULL)
   {
      return insertAftertail(head,val);
   }

   Node* newNode=createNode2(val,front,temp);

   temp->next=newNode;
   front->back=newNode;

   return head;
}

Node* insertAfterK(Node* head,int val,int k)
{

   if(head->data==k)
   {
      return insertAfterHead(head,val);
   }
   Node* temp=head;
   while(temp->data!=k)
   {
      temp=temp->next;
   }

   if(temp->next==NULL)
   {
      return insertAftertail(head,val);
   }

   Node* front=temp->next;

   Node* newNode=createNode2(val,front,temp);
   temp->next=newNode;
   front->back=newNode;

   return head;


}

int main()
{
   vector<int> arr={1,2,3,4,5};
   
   Node* head=convertToDLL(arr);
   //printDLL(head);

   //Node* head1=deletehead(head);
   //printDLL(head1);

   //Node* head2=deleteTail(head);
   //printDLL(head2);

   //Node* head3=deleteKthElement(head,5);
   //printDLL(head3);

   //Cannnot delete the head
   //Node* head4=deleteK(head,5);
   //printDLL(head4);

   //Node* head5=insertBeforeHead(head,10);
   //printDLL(head5);

   //Node* head6=insertBeforeTail(head,10);
   //printDLL(head6);

   //Node* head7=insertBeforeKthElment(head,10,5);
   //printDLL(head7);

   //Node* head8=insertBeforeK(head,10,5);
   //printDLL(head8);

   //Node* head9=insertAfterHead(head,100);
   //printDLL(head9);

   //Node* head10=insertAftertail(head,99);
   //printDLL(head10);

   //Node* head11=insertAfterKthElement(head,88,5);
   //printDLL(head11);

   //Node* head12=insertAfterK(head,77,5);
   //printDLL(head12);

   return 0;   
}

