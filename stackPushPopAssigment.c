#include<stdio.h>
#include<stdbool.h>
#define MAXSIZE 10

// ass 01:  write down the programe to implement Stack using array and two operation push and pop.
//run successfully
int arr[MAXSIZE],top=-1;

// isEmpty is a function for cheaking array is empty or not
//for use of bool , i include<stdboo.h>
bool isEmpty(){
if(top==-1)
return true;
else
return false;
}

//here is the function of push
void push(int i){
if(top==MAXSIZE-1)
printf(" your stack is full");
else{
    top++;
     arr[top]=i;
     printf("you pushed element ",arr[top]);
}
}

//here is the function of pop
//i use isEmpty function inplace of top==-1 for cheaking empty
int pop(){
    if(isEmpty())
    printf("your stack is empty");
    else{
        printf(" you pop the element is %d ",arr[top]);
         top--;
    }
}

// here is display function for display element 
void displayStack(){
    for (int j = 0; j <=top; j++)
    {
    printf(" %d" ,arr[j]);
    }
    
}

    

int main(){

  int choice,i;
  //flag declared for cheaking on do or while loop 
  //if flag==1, loop run and flag==0 loop is stop
 int flag=1;
  do{
    printf(" \n.............Stack........");
    printf("\n 1. push  \n 2.pop  \n 3. display");
    printf("\n..........stack...........");
     printf(" \n enter your choice you want");
  scanf("%d",&choice);
  switch (choice)
  {
  case 1: printf(" you want push the element");
          scanf("%d",&i);
          push(i);
    break;

  case 2: printf(" you want to pop");
         pop();
  break;

  case 3: printf(" you want display the stack");
         displayStack();
         break;
   case 4: flag=0;
         printf(" exiting stack");
         break;      
  default:printf("invalid choice");
    break;
  }
  }while (flag==1);

  
  return 0;
    
}