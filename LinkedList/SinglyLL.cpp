#include<bits/stdc++.h>
using namespace std;

//Never tamper with the head element as it is a fixed starting point of
//your linked list


class Node {
   
   public:
   int data;
   Node* next;
};

//Function to creates a node (data only version)
 Node* createNode1(int data) 
   {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = nullptr;
    return newNode;
   }
//Function to creates a node
 Node* createNode2(int data,Node* next) 
   {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = next;
    return newNode;
   }

//Function to convert an array into linked list
Node* Convert2LL(int arr[],int n)
{
   Node* head=createNode1(arr[0]);
   Node* temp=head;
   for(int i=1;i<5;i++)
   {
      temp->next=createNode1(arr[i]);
      //Going to the next element
      temp=temp->next;
   }

   return head;
} 

//Function to print the linked list
void printLL(Node* head)
{
   if(head==NULL) return;
   Node* temp=head;

   while(temp)
   {
      cout<<temp->data<<" ";
      temp=temp->next;
   }
}

//Function to delete head
Node* deleteHead(Node* head)
{
   if(head==NULL) return head;

   Node* temp=head;
   head=head->next;
   free(temp);
   return head;
}

//Function to delete tail
Node* deleteTail(Node* head)
{
   if(head==NULL) return head;

   Node* temp=head;

   while(temp->next->next)
   {
      temp=temp->next;
   }
   //deleted the tail
   free(temp->next);
   //Made the previous element as the tail
   temp->next=nullptr;
   return head;
}

//Function to delete Kth Element
Node* deleteKthElement(Node* head,int k)
{
   //Edge Case 1: Linked List is empty
   if(head==NULL) return head;

   //Edge Case 2: K=1 -> deletion of head element
   if(k==1)
   {
      Node* temp=head;
      head=head->next;
      free(temp);
      return head;
   }

   int countEl=0;
   Node* temp= head;
   Node* prev=nullptr;
   while(temp)
   {
      countEl++;
      if(countEl==k)
      {
         prev->next=prev->next->next;
         free(temp);
         break;
      }
      prev=temp;
      temp=temp->next;  
   }

   return head;
}

//Function to delete an element with value K
Node* deleteK(Node* head,int k)
{
   if(head==NULL) return head;
   
   if(head->data==k)
   {
      Node* temp=head;
      head=head->next;
      free(temp);
      return head;
   }

   Node* temp= head;
   Node* prev=nullptr;
   while(temp)
   {
      if(temp->data==k)
      {
         prev->next=prev->next->next;
         free(temp);
         break;
      }
      prev=temp;
      temp=temp->next;  
   }

   return head;
}

//Function to insert an element at head
Node* InsertHead(Node* head,int val)
{
   //Created a new node and point it to node
   //return the nre node as head
   //Covers the edge case where linked list is empty
   return createNode2(val,head);
}

//Function to insert an element at tail 
Node* InsertTail(Node* head,int val)
{
   if(head==NULL) return createNode1(val);
   Node* temp=head;
   while(temp->next)
   {
      temp=temp->next;
   }
   Node* newNode=createNode1(val);
   temp->next=newNode;
   return head;
}

//Function to insert an element at Kth position
Node* InsertKthPosition(Node* head,int k,int val)
{
   if(head==NULL)
   {
      if(k==1)
      {
         return createNode1(val);
      }
      else
      {
         return head;
      }
   }

   //Insert at Head
   if(k==1)
   {
      return createNode2(val,head);
   }

   int count=0;
   Node* temp=head;
   while(temp)
   {
      count++;
      if(count==k-1)
      {
         Node* newNode=createNode2(val,temp->next);
         temp->next=newNode;
         break;
      }
      temp=temp->next;
   }
   return head;
}

//Function to insert an element before the value K
Node* InsertBeforeK(Node* head,int k,int val)
{
   if(head==NULL)
   {
      return head;
   }

   //Insert at Head
   if(head->data==k)
   {
      return createNode2(val,head);
   }

   Node* temp=head;
   while(temp->next)
   {
      if(temp->next->data==k)
      {
         Node* newNode=createNode2(val,temp->next);
         temp->next=newNode;
         break;
      }
      temp=temp->next;
   }
   return head;
}

int main()
{
   int arr[5]={1,2,3,4,5};

   Node* head=Convert2LL(arr,5);

   //printLL(head);

   //Node* head1=deleteHead(head);

   //printLL(head1);
 
   //Node* head2=deleteTail(head);

   //printLL(head2);

   //Node* head3=deleteKthElement(head,7);

   //printLL(head3);

   //Node* head4=deleteK(head,1);

   //printLL(head4);
   
   //Node* head5=InsertHead(head,100);

   //printLL(head5);

   //Node* head6=InsertTail(head,100);

   //printLL(head6);

   //Node* head7=InsertKthPosition(head,7,100);
   //printLL(head7);

   Node* head8=InsertBeforeK(head,6,100);
   printLL(head8);

   return 0;   
}

