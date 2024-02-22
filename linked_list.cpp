#include <bits/stdc++.h>
#include <string>
using namespace std;
struct node {
   int data;
   struct node *next;
};
struct node *head = NULL;
struct node *current = NULL;

void insertatbegin(int data){
   
   //create a link
   struct node *newNode = (struct node*) malloc(sizeof(struct node));
   newNode->data = data;
   
   // point it to old first node
   newNode->next = head;
   
   //point first to new first node
   head = newNode;
}
// display the list
void printList(){
   struct node *p = head;
   cout << "\n[";
   
   //start from the beginning
   while(p != NULL) {
      cout << " " << p->data << " ";
      p = p->next;
   }
   cout << "]";
}

void insertatend(int data){

   //create a link
   struct node *newNode = (struct node*) malloc(sizeof(struct node));
   newNode->data = data;
   struct node *linkedlist = head;

   // point it to old first node
   while(linkedlist->next != NULL){
      linkedlist = linkedlist->next;
      
   }

      

   //point first to new first node
   linkedlist->next = newNode;
   newNode->next = NULL;
   
}

void insertafternode(struct node *linkedListHead, int data, int InsertNodeAfter){
   struct node *newNode = (struct node*) malloc(sizeof(struct node));
   newNode->data = data;

   struct node *pointer = linkedListHead;

   while(pointer->data != InsertNodeAfter){
      pointer = pointer->next;
   }

   newNode->next = pointer->next;
   pointer->next = newNode;
}

int main(){
   insertatbegin(12);
   insertatbegin(22);
   insertatbegin(30);
   insertatbegin(44);
   insertatbegin(50);
   cout << "Linked List: ";
   
   printList();

   insertatend(13);
   insertatend(456);
   insertatend(13232);


   printList();

   insertafternode(head,33,13);

   printList();
   
}
