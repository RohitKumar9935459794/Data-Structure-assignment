#include<stdio.h>
// Assigment 9 :write a program to preform flowwing operation on linkedlist
//a: insertion at begining , at the end, a given location in on sorted list
// b: Deletion of first node ,last node, a given item odf node and a given item from sorted 
struct Node
{
    int data;
    struct  Node *next;
}; struct Node *head=NULL;     //creating pointer of struct node pointer called a *head and assigning it NULL 

//here is the function insertion at the beginning
void insertAtBeginning(int value)
{
    //creating indiviual node
    // creating pointer of struct node type called a *newNode
    struct  Node *newNode;
    newNode=(struct node*)malloc((sizeof(struct Node )));
    newNode->data=value;
    if(head==NULL){
    //when no element is present in as struct node creating whole new element    
    newNode->next=NULL;
    head=newNode;
    }
    else
    {
    // when element present in linklist
        newNode->next=head; //assigning head's data-part to newNode address-part
        head=newNode; //moving head to newNode and assinging newNode's address to head
    }
  printf("/n insertion at the beginning is successfull ") ; 
}

//here creating the function of insertion  at the end
void insertAtEnd(int value){
//creating indiviual node
// creating pointer of struct node type called a *newNode
   struct Node *newNode;
   newNode=(struct Node*)malloc(sizeof(struct Node));
   newNode->data=value;
   newNode->next=NULL;
   if(head==NULL){
    head=newNode;  // if no element is present assign head=newNode for creating first element
   }
   else
   {
    //here creating temp variable and moving it to the last by using while loop by assigning temp->next!=NULL
    struct Node *temp=head;
    while (temp->next!=NULL)
    {    
        temp=temp->data;// assigning temp's data-part to temp data  
        temp->next=newNode; //assinging temp's adress-part to new data

    }
    
   }
   printf("");
}

//here creating function of insertion at the given location
void insertAtPosition(int value, int pos)
{
    //creating indiviual node
    // creating pointer of struct node type called a *newNode
    struct Node *newNode;
    newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=value;
    newNode->next=NULL;
    if(head==NULL){
        newNode->next=NULL;
        head=newNode;//if no element is present creating first element
    }
    else
    {
        int i;
        //creating temp variable for moving to specific postion
        struct Node *temp=head;//assiging head to the temp
        //moving i to the a node befor the given node
        for(i=0;i<pos-1;i++){
             temp=temp->next; //moving temp
        }
        //assiging the temp's address to new node's address-part 
        newNode->next=temp->next;
        temp->next=newNode;//  assigining temp-address to newNode's data type
    }
    printf(" insertion is seccessfull");
}

//here creating function for deletation at first
 int deleteAtFirst(){
    if(head==NULL){ // if no element is present
        printf("/nlinkedlist is empty ");
    }
    else {
        struct Node *temp=head;// creating  temp pointer struct node type 
        if (head->next==NULL)  // cheaking for first emlement
        {
            head=NULL;
            free(temp);
        }else
        {
          head=temp->next;//here moving head to the temp next
          free(temp);
          
        }
        printf("/ndeletation of first elememt is successful");
        
    }
    
 }

 // here creating function for deletation is the end
 int deleteAtLast(){
    if(head==NULL){
        printf("/nlinkedlist is empty");
    }
    else{
        struct Node *temp1=head, *temp2; //here creating two temp variable struct Node type and assgining temp1=head
        if(head->next==NULL)// if only one element is present 
        head=NULL;
        else{
            while (temp1->next!=NULL) //moving temp1 to the  a element before the last element
            {
                temp2 =temp1; // assiging the temp2 to temp1
                temp1=temp1->next;// moving temp to next element
            }
           temp2->next=NULL;//breaking the link between temp1 and temp2
        }
        free(temp1);
    }
 }

 //hearing creating function for deletation at the specific position
 int deleteAtPosition( int pos){
     int i;
        struct Node *temp1=head, *temp2;
        int flag=0;
    if(pos==1){
     head=temp1->next;
     free(temp1);
     printf("/ndeletation is successfull");
    }
    else
    {
        for(i=0;i<pos-1;i++){
            if (temp1->next!=NULL) //moving temp1 to the  a element before the last element
            {
                temp2 =temp1; // assiging the temp2 to temp1
                temp1=temp1->next;// moving temp to next element
            }else
            {
                flag=1; 
                break;
            }
        }
        if(flag==0){
            temp2->next=temp1->next;//assiging the temp1's address to the temp2's address part so that temp1 can be freeed
            free(temp1);// as indivisual node
            printf("\n delettation is successfull");
        }else{
            printf("\nthe position exicided the linklist");// printing if the position are empty
        }
    }
}
 

 void main(){
    int flag=1,choice,value,pos;
    do
    {
         printf("\n 1. intertion at bigainin \n 2. intertion at the ending \n 3. intertion at the end ");
    printf("\n 4. deletation at bigainin \n 5. deletation at the ending \n 6. deletation at the end \n 7. exit");
    printf("\nenter your choice");
    scanf("%d",&choice);
    switch(choice){
        case 1:printf(" you want to enter at the begining");

        break;
        case 2:printf(" you want to enter at the end");
        printf("enter the value");
        scanf("%d",&value);
        insertAtBeginning(value);
        break;
        case 3:printf(" you want to enter at the specific pos");
        printf("enetr the value");
        scanf("%d",&value);
        printf("enter your position");
        scanf("%d",&pos);
        insertAtPosition(value,pos);
        break;
        case 4:printf(" you want to delete at the begining");
        printf("enter the value");
        scanf("%d",&value);
        insertAtEnd(value);
        break;
        case 5:printf(" you want to delete at the end");
        break;
        case 6:printf(" you want to delete at the specific position");
        break;
        case 7:flag=0;
        break;
        default: ("plese enter correct choice");
        break;
    }
   
    } while (flag==1);
    
   
 }

