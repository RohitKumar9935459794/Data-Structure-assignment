#include<stdio.h>
#include<conio.h>
#define MAXSIZE 10

// ass 01:  write down the programe to implement Stack using array and two operation push and pop.

int push(int arr[], int top){
    int i=0;
if(top==MAXSIZE-1)
printf(" your stack is full");
else{
    top++;
    printf("enter the elemement you want");
    scanf("%d",&i);
    arr[top]=i;
}

    
}
int main(){
 
  int arr[MAXSIZE];
  int choice,i,top=-1;
  printf(" enter your choice you want");
  scanf("%d",&choice);
  switch (choice)
  {
  case 1: printf(" you want push the element");
          push(arr[MAXSIZE],top);
    break;

  case 2: printf(" you want to pop");
  break;

  case 3: printf(" you want display the stack");
  default:printf("invalid choice");
    break;
  } 
   
    return 0;
    
}