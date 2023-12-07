#include<stdio.h>
#include<conio.h>
#define MAXSIZE 10

// ass 01:  write down the programe to implement Stack using array and two operation push and pop.

int arr[MAXSIZE],top=-1;

int push(int i){
if(top==MAXSIZE-1)
printf(" your stack is full");
else{
    top++;
     arr[top]=i;
}

void pop(){
    if(top==-1)
    printf("your stack is empty");
    else{
        printf(" you pop the element is ",arr[top]);
         top--;
    }
}

void displayStack(){
    for (int j = 0; j < MAXSIZE; j++)
    {
    printf(" you stack is" ,arr[j]);
    }
    
}

    
}
int main(){

  int choice,i;
  while (1)
  {
    printf(" \n.............Stack........");
    printf("\n 1. push  \n 2.pop  \n display");
    printf("\n..........stack...........");
     printf(" enter your choice you want");
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
  default:printf("invalid choice");
    break;
  }
  }
  return 0;
    
}